//---------------------------------------------------------------------------*
//                                                                           *
//  Generate cocoa file                                                      *
//                                                                           *
//  Copyright (C) 2004, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"
#include "collections/TC_Array2.h"
#include "command_line_interface/C_builtin_CLI_Options.h"
#include "galgas/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "cocoa_parser.h"

//---------------------------------------------------------------------------*

static void
generate_mm_file_for_cocoa (C_Compiler & inLexique,
                            const C_String & inCocoaComponentName,
                            const GGS_lstringlist & inNibAndClassList,
                            const GGS_textMacroList & inTextMacroList,
                            const GGS_string & inBlockComment,
                            const C_String & inLexiqueComponentName,
                            const GGS_M_optionComponents & inOptionComponentsMap,
                            const GGS_labelForPopUpList & inLabelForPopUpList,
                            const sint32 inTerminalSymbolCount) {
//--- Generate user includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#import \"OC_Token.h\"\n\n"             
                    "#import \"F_CocoaWrapperForGalgas.h\"\n"
                    "#import \"OCP_TokenizerProtocol.h\"\n"
                    "#import \"C_sourceTextForCocoa.h\"\n"
                    "#import \"" << inLexiqueComponentName << ".h\"\n" ;
  GGS_M_optionComponents::cEnumerator currentOptionComponent (inOptionComponentsMap, true) ;
  while (currentOptionComponent.hasCurrentObject ()) {
    generatedZone2 << "#import \"" << currentOptionComponent._key (HERE) << ".h\"\n" ;
    currentOptionComponent.next () ;
  }
  GGS_lstringlist::cEnumerator currentNib (inNibAndClassList, true) ;
  while (currentNib.hasCurrentObject ()) {
    TC_UniqueArray <C_String> result ;
    currentNib._mValue (HERE).componentsSeparatedByString (".", result) ;
    generatedZone2 << "#import \"" << result (1 COMMA_HERE) << ".h\"\n" ;
    currentNib.next () ;
  }
  generatedZone2 << "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
                    "  #import \"user_default_colors.h\"\n"
                    "#endif\n"
                    "\n" ;
//------------------------------------ Command line options
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  generatedZone3 << "#pragma mark Boolean Command Line Options\n\n" ;
  generatedZone3.appendCppTitleComment ("Boolean Command Line Options") ;
  C_builtin_CLI_Options genericOptions (false) ;
  C_galgas_CLI_Options galgasOptions ;
//--- Bool options
  sint32 boolOptionCount = genericOptions.getBoolOptionsCount () ;
  boolOptionCount += galgasOptions.getBoolOptionsCount () ;
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    boolOptionCount += currentOptionComponent._mBoolOptionsMap (HERE).count () ;
    currentOptionComponent.next () ;
  }

  generatedZone3 << "static const unsigned kBoolOptionCount = " << cStringWithSigned (boolOptionCount) << " ;\n\n" ;

  generatedZone3 << "static const char gBoolOptionChar [kBoolOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (genericOptions.getBoolOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (galgasOptions.getBoolOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralCharConstant (mapEnumerator._mOptionChar (HERE).charValue ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gBoolOptionString [kBoolOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getBoolOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getBoolOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mOptionString (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gBoolOptionDescription [kBoolOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getBoolOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getBoolOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getBoolOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mComment (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static bool gBoolOptionValue [kBoolOptionCount] ;\n\n" ;

  generatedZone3 << "unsigned getBoolOptionsCount (void) {\n"
             "  return kBoolOptionCount ;\n"
             "}\n"
             "\n"
             "bool getBoolOptionValue (const unsigned inIndex) {\n"
             "  return gBoolOptionValue [inIndex] ;\n"
             "}\n"
             "\n"
             "void setBoolOptionValue (const unsigned inIndex, const bool inValue) {\n"
             "  gBoolOptionValue [inIndex] = inValue ;\n"
             "}\n"
             "\n"
             "char getBoolOptionChar (const unsigned inIndex)  {\n"
             "  return gBoolOptionChar [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getBoolOptionString (const unsigned inIndex) {\n"
             "  return gBoolOptionString [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getBoolOptionDescription (const unsigned inIndex) {\n"
             "  return gBoolOptionDescription [inIndex] ;\n"
             "}\n"
             "\n" ;
//--- uint options
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Unsigned Command Line Options\n\n" ;
  generatedZone3.appendCppTitleComment ("Unsigned Command Line Options") ;
  sint32 uintOptionCount = genericOptions.getUintOptionsCount () ;
  uintOptionCount += galgasOptions.getUintOptionsCount () ;
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    uintOptionCount += currentOptionComponent._mUintOptionsMap (HERE).count () ;
    currentOptionComponent.next () ;
  }

  generatedZone3 << "static const unsigned kUIntOptionCount = " << cStringWithSigned (uintOptionCount) << " ;\n\n" ;

  generatedZone3 << "static const char gUIntOptionChar [kUIntOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (genericOptions.getUintOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (galgasOptions.getUintOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralCharConstant (mapEnumerator._mOptionChar (HERE).charValue ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gUIntOptionString [kUIntOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getUintOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getUintOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mOptionString (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gUIntOptionDescription [kUIntOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getUintOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getUintOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getUintOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mComment (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static unsigned gUintOptionValue [kUIntOptionCount] ;\n\n" ;

  generatedZone3 << "\n"
             "unsigned getUIntOptionsCount (void) {\n"
             "  return kUIntOptionCount ;\n"
             "}\n"
             "\n"
             "/* unsigned getUIntOptionDefaultValue (const unsigned inIndex) {\n"
             "  return gUintOptionValue [inIndex] ;\n"
             "} */\n"
             "\n"
             "unsigned getUIntOptionValue (const unsigned inIndex) {\n"
             "  return gUintOptionValue [inIndex] ;\n"
             "}\n"
             "\n"
             "void setUIntOptionValue (const unsigned inIndex, const unsigned inValue) {\n"
             "  gUintOptionValue [inIndex] = inValue ;\n"
             "}\n"
             "\n"
             "char getUIntOptionChar (const unsigned inIndex)  {\n"
             "  return gUIntOptionChar [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getUIntOptionString (const unsigned inIndex) {\n"
             "  return gUIntOptionString [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getUIntOptionDescription (const unsigned inIndex) {\n"
             "  return gUIntOptionDescription [inIndex] ;\n"
             "}\n"
             "\n" ;

//--- string options
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark String Command Line Options\n\n" ;
  generatedZone3.appendCppTitleComment ("String Command Line Options") ;
  sint32 stringOptionCount = genericOptions.getStringOptionsCount () ;
  stringOptionCount += galgasOptions.getStringOptionsCount () ;
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    stringOptionCount += currentOptionComponent._mStringOptionsMap (HERE).count () ;
    currentOptionComponent.next () ;
  }

  generatedZone3 << "static const unsigned kStringOptionCount = " << cStringWithSigned (stringOptionCount) << " ;\n\n" ;
 
  generatedZone3 << "static const char gStringOptionChar [kStringOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (genericOptions.getStringOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralCharConstant (TO_UNICODE (galgasOptions.getStringOptionChar (i))) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralCharConstant (mapEnumerator._mOptionChar (HERE).charValue ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gStringOptionString [kStringOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getStringOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getStringOptionString (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mOptionString (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static const char * gStringOptionDescription [kStringOptionCount] = {\n" ;
  for (sint32 i=0 ; i<genericOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (genericOptions.getStringOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  for (sint32 i=0 ; i<galgasOptions.getStringOptionsCount () ; i++) {
    generatedZone3 << "  " ;
    generatedZone3.appendCLiteralStringConstant (galgasOptions.getStringOptionDescription (i)) ;
    generatedZone3 << ",\n" ;
  }
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hasCurrentObject ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hasCurrentObject ()) {
      generatedZone3 << "  " ;
      generatedZone3.appendCLiteralStringConstant (mapEnumerator._mComment (HERE).string ()) ;
      generatedZone3 << ",\n" ;
      mapEnumerator.next () ;
    }
    currentOptionComponent.next () ;
  }
  generatedZone3 << "} ;\n\n" ;

  generatedZone3 << "static NSString * gStringOptionValue [kStringOptionCount] ;\n\n" ;

  generatedZone3 << "\n"
             "unsigned getStringOptionsCount (void) {\n"
             "  return kStringOptionCount ;\n"
             "}\n"
             "\n"
             "NSString * getStringOptionValue (const unsigned inIndex) {\n"
             "  return gStringOptionValue [inIndex] ;\n"
             "}\n"
             "\n"
             "void setStringOptionValue (const unsigned inIndex, const NSString * inValue) {\n"
             "  gStringOptionValue [inIndex] = inValue ;\n"
             "}\n"
             "\n"
             "char getStringOptionChar (const unsigned inIndex)  {\n"
             "  return gStringOptionChar [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getStringOptionString (const unsigned inIndex) {\n"
             "  return gStringOptionString [inIndex] ;\n"
             "}\n"
             "\n"
             "const char * getStringOptionDescription (const unsigned inIndex) {\n"
             "  return gStringOptionDescription [inIndex] ;\n"
             "}\n"
             "\n" ;
//--- Global static variables
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark ------------------------\n\n" ;
  generatedZone3.appendCppTitleComment ("Global static variables") ;
  generatedZone3 << "static C_CLI_OptionGroup gCommandLineOptions ;\n" ;
  generatedZone3 << "static C_galgas_io_parameters IOparameters (& gCommandLineOptions, false, \"\", \"\") ;\n\n" ;
//--- Macros list
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Text Macros\n\n" ;
  generatedZone3.appendCppTitleComment ("T E X T    M A C R O S") ;
  generatedZone3 << "static uint32 kTextMacroCount = " << cStringWithSigned (inTextMacroList.count ()) << " ;\n\n" ;
  GGS_textMacroList::cEnumerator currentMacro (inTextMacroList, true) ;
  generatedZone3 << "static NSString * kTextMacroTitle [" << cStringWithSigned (inTextMacroList.count () + 1) << "] = {\n  " ;
  while (currentMacro.hasCurrentObject ()) {
    generatedZone3 << "@" ;
    generatedZone3.appendCLiteralStringConstant (currentMacro._mKey (HERE)) ;
    generatedZone3 << ",\n  " ;
    currentMacro.next () ;
  }
  generatedZone3 << "NULL\n"
                    "} ;\n\n" ;
  generatedZone3 << "static NSString * kTextMacroContent [" << cStringWithSigned (inTextMacroList.count () + 1) << "] = {\n  " ;
  currentMacro.rewind () ;
  while (currentMacro.hasCurrentObject ()) {
    generatedZone3 << "@" ;
    generatedZone3.appendCLiteralStringConstant (currentMacro._mContents (HERE)) ;
    generatedZone3 << ",\n  " ;
    currentMacro.next () ;
  }
  generatedZone3 << "NULL\n"
                    "} ;\n\n" ;
//--- Datas for PopUp list
  if (inTerminalSymbolCount > 0) {
    generatedZone3.appendCppHyphenLineComment () ;
    generatedZone3 << "#pragma mark Popup List Data\n\n" ;
    generatedZone3.appendCppTitleComment ("P O P U P    L I S T    D A T A") ;
    C_String mainArray ;
    mainArray << "static const uint16 * kPopUpListData [" << cStringWithSigned (inTerminalSymbolCount + 1) << "] = {\n"
                 "  NULL" ;
    for (sint32 i=0 ; i<inTerminalSymbolCount ; i++) {
      mainArray << ",\n  " ;
      bool first = true ;
      GGS_labelForPopUpList::cEnumerator currentMark (inLabelForPopUpList, true) ;
      while (currentMark.hasCurrentObject ()) {
        const sint32 terminalID1 = (sint32) currentMark._mTerminal1ID (HERE).uintValue () ;
        if (terminalID1 == i) {
          const uint32 terminalID2 = currentMark._mTerminal2ID (HERE).uintValue () ;
          if (first) {
            first = false ;
            generatedZone3 << "static uint16 kPopUpListData_" << cStringWithSigned (i) << " [] = {" ;
          }else{
            generatedZone3 << ", " ;
          }
          generatedZone3.appendUnsigned (terminalID2 + 1) ;
        }
        currentMark.next () ;
      }
      if (first) {
        mainArray << "NULL" ;
      }else{
        mainArray << "kPopUpListData_" << cStringWithSigned (i) ;
        generatedZone3 << ", 0} ;\n\n" ;
        generatedZone3.appendCppHyphenLineComment () ;
      }
    }
    mainArray << "} ;\n\n" ;
    generatedZone3 << mainArray ;
  }
//--- NIB and main class
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Nibs\n\n" ;
  generatedZone3.appendCppTitleComment ("N I B S   A N D   T H E I R   M A I N   C L A S S E S") ;
  generatedZone3 << "NSArray * nibsAndClasses (void) {\n"
                    "  return [NSArray arrayWithObjects:\n" ;
  currentNib.rewind () ;
  while (currentNib.hasCurrentObject ()) {
    TC_UniqueArray <C_String> result ;
    currentNib._mValue (HERE).componentsSeparatedByString (".", result) ;
    generatedZone3 << "    [NSArray arrayWithObjects:@\"" << result (0 COMMA_HERE)
                   << "\", [" << result (1 COMMA_HERE) << " class], nil],\n" ;
    currentNib.next () ;
  }
  generatedZone3 << "    nil\n"
                    "  ] ;\n"
                    "}\n\n" ;

//--- Lexique interface           
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Lexique interface\n\n" ;
  generatedZone3.appendCppTitleComment ("Lexique interface") ;
  generatedZone3 << "@interface OC_TemporaryTokenizer : NSObject <OCP_TokenizerProtocol> {\n"
                    "  @private " << inLexiqueComponentName << " * mScannerPtr ;\n"
                    "  @private C_galgas_io * mIOParametersPtr ;\n"
                    "}\n\n"
                    "@end\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "@implementation OC_TemporaryTokenizer\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (void) tokenizeForSourceString: (NSString *) inSourceString\n"
                    "         tokenArray: (NSMutableArray *) ioStyledRangeArray // Array of OC_Token\n"
                    "         editedRange: (const NSRange *) inEditedRange\n"
                    "         changeInLength: (const sint32) inChangeInLength\n"
                    "         firstIndexToRedraw: (sint32 *) outFirstIndexToRedraw\n"
                    "         lastIndexToRedraw: (sint32 *) outLastIndexToRedraw\n"
                    "         eraseRangeStart: (sint32 *) outEraseRangeStart\n"
                    "         eraseRangeEnd: (sint32 *) outEraseRangeEnd\n"
                    "         popupMenu: (NSMenu *) ioMenu {\n"
                    "  if (mScannerPtr == NULL) {\n"
                    "    macroMyNew (mIOParametersPtr, C_galgas_io (IOparameters, C_galgas_io::kNoOutput COMMA_HERE)) ;\n"
                    "    macroMyNew (mScannerPtr, " << inLexiqueComponentName << " (NULL, \"\", \"\", mIOParametersPtr, \"\" COMMA_HERE)) ;\n"
                    "  }\n"
                    "  AC_sourceText * sourceTextPtr = NULL ;\n"
                    "  macroMyNew (sourceTextPtr,\n"
                    "              C_sourceTextForCocoa (inSourceString,\n"
                    "                                    \"\"\n"
                    "                                    COMMA_HERE)) ;\n"
                    "  mScannerPtr->resetAndLoadSourceFromText (sourceTextPtr) ;\n"
                    "  TC_UniqueArray <C_styledRange> styledRangeArray ([ioStyledRangeArray count] COMMA_HERE) ;\n"
                    "  for (uint32 i=0 ; i<[ioStyledRangeArray count] ; i++) {\n"
                    "    OC_Token * token = [ioStyledRangeArray objectAtIndex:i] ;\n"
                    "    const C_styledRange sr = {[token tokenCode], [token range].location, [token range].location + [token range].length - 1, [token style]} ;\n"
                    "    styledRangeArray.addObject (sr) ;\n"
                    "  }\n"
                    "  TC_UniqueArray <C_popupEntry> popUpEntries ;\n"
                    "  const sint32 affectedRangeLocation = inEditedRange->location ;\n"
                    "  const sint32 affectedRangeLength = inEditedRange->length ;\n"
                    "  const sint32 replacementStringLength = inEditedRange->length + inChangeInLength ;\n"
                    "  mScannerPtr->scanThenGetStyledRangeArray (styledRangeArray,\n"
                    "                                            affectedRangeLocation,\n"
                    "                                            affectedRangeLength,\n"
                    "                                            replacementStringLength,\n"
                    "                                            *outFirstIndexToRedraw,\n"
                    "                                            *outLastIndexToRedraw,\n"
                    "                                            *outEraseRangeStart,\n"
                    "                                            *outEraseRangeEnd,\n"
                    "                                            "
                 << ((inTerminalSymbolCount == 0) ? "NULL" : "kPopUpListData")
                 << ",\n"
                    "                                            popUpEntries) ;\n"
                    "  for (sint32 i=0 ; i<popUpEntries.count () ; i++) {\n"
                    "    NSMenuItem * item = [[NSMenuItem alloc]\n"
                    "      initWithTitle:[NSString stringWithFormat:@\"%s\", popUpEntries (i COMMA_HERE).mEntryString.cString (HERE)]\n"
                    "      action:NULL\n"
                    "      keyEquivalent:@\"\"\n"
                    "    ] ;\n"
                    "    [item setTag:popUpEntries (i COMMA_HERE).mStartLocation] ;\n"
                    "    [ioMenu addItem:item] ;\n"
                    "    [item release] ;\n"
                    "  }\n"
                    "  [ioStyledRangeArray removeAllObjects] ;\n"
                    "  for (sint32 i=0 ; i<styledRangeArray.count () ; i++) {\n"
                    "    OC_Token * token = [[OC_Token alloc]\n"
                    "      initWithTokenCode:styledRangeArray (i COMMA_HERE).mTokenCode\n"
                    "      range:NSMakeRange (styledRangeArray (i COMMA_HERE).mStartLocation, styledRangeArray (i COMMA_HERE).mEndLocation + 1 - styledRangeArray (i COMMA_HERE).mStartLocation)\n"
                    "      style:styledRangeArray (i COMMA_HERE).mStyle\n"
                    "    ] ;\n"
                    "    [ioStyledRangeArray addObject:token] ;\n"
                    "  }\n"
                    "  macroDetachPointer (sourceTextPtr, C_sourceTextForCocoa) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (NSString *) blockComment {\n"
                    "  return @" ;
  generatedZone3.appendCLiteralStringConstant (inBlockComment.string ()) ;
  generatedZone3 << " ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "\n"
                    "- (UInt32) styleCount {\n"
                    "  return " << inLexiqueComponentName << "::getStylesCount () ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (const char *) styleNameForIndex: (const SInt32) inIndex {\n"
                    "  return " << inLexiqueComponentName << "::getStyleName (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (const char *) styleIdentifierForIndex: (const SInt32) inIndex {\n"
                    "  return " << inLexiqueComponentName << "::getStyleIdentifier (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (UInt32) textMacroCount {\n"
                    "  return kTextMacroCount ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
                    "  return kTextMacroTitle [inIndex] ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
                    "  return kTextMacroContent [inIndex] ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "@end\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "NSObject <OCP_TokenizerProtocol> * tokenizerForExtension (const NSString * inExtension) {\n"
                    "  return [[OC_TemporaryTokenizer alloc] init] ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "NSArray * tokenizers (void) {\n"
                    "  return [NSArray arrayWithObjects:\n"
                    "    [[[OC_TemporaryTokenizer alloc] init] autorelease],\n"
                    "    nil\n"
                    "  ] ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile ("//",
                          inCocoaComponentName + ".mm",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void 
routine_generateCocoaComponent (C_Compiler & inLexique,
                                const GGS_lstring inGUIcomponentName,
                                const GGS_lstring inGUIkindName,
                                const GGS_lstringlist inNibAndClassList,
                                const GGS_textMacroList inTextMacroList,
                                const GGS_string inBlockComment,
                                const GGS_lstring inLexiqueComponentName,
                                const GGS_M_optionComponents inOptionComponentsMap,
                                const GGS_labelForPopUpList inLabelForPopUpList,
                                const GGS_uint inTerminalSymbolCount
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inGUIkindName.string () == "cocoa") {
    generate_mm_file_for_cocoa (inLexique,
                                inGUIcomponentName,
                                inNibAndClassList,
                                inTextMacroList,
                                inBlockComment,
                                inLexiqueComponentName,
                                inOptionComponentsMap,
                                inLabelForPopUpList,
                                (sint32) inTerminalSymbolCount.uintValue ()) ;
  }else{
    inGUIkindName.semanticError (inLexique,
                                 "only the \"cocoa\" gui is currenly supported"
                                 COMMA_HERE) ;
  }
}

//---------------------------------------------------------------------------*
