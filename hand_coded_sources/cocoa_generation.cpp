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
  generatedZone2 << "#import <Cocoa/Cocoa.h>\n\n"             
                    "#import \"F_CocoaWrapperForGalgas.h\"\n"
                    "#import \"C_sourceTextForCocoa.h\"\n"
                    "#import \"command_line_interface/C_CLI_OptionGroup.h\"\n"
                    "#import \"command_line_interface/C_builtin_CLI_Options.h\"\n"
                    "#import \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#import \"" << inLexiqueComponentName << ".h\"\n" ;
  GGS_M_optionComponents::cEnumerator currentOptionComponent (inOptionComponentsMap, true) ;
  while (currentOptionComponent.hc ()) {
    generatedZone2 << "#import \"" << currentOptionComponent._key (HERE) << ".h\"\n" ;
    currentOptionComponent.next () ;
  }
  GGS_lstringlist::cEnumerator currentNib (inNibAndClassList, true) ;
  while (currentNib.hc ()) {
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
  while (currentOptionComponent.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mBoolOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mUintOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  while (currentOptionComponent.hc ()) {
    GGS_M_cli_options::cEnumerator mapEnumerator (currentOptionComponent._mStringOptionsMap (HERE), true) ;
    while (mapEnumerator.hc ()) {
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
  sint32 index = 0 ;
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug" COMMA_HERE) ;
  generatedZone3 << "static C_builtin_CLI_Options gGenericOptions ("
                 << (generateDebug ? "true" : "false")
                 << ") ;\n"
                 << "static C_galgas_CLI_Options gGalgasOptions ;\n" ;
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hc ()) {
    generatedZone3 << "static " << currentOptionComponent._key (HERE) << " gOption" << cStringWithSigned (index) << " ;\n" ;
    currentOptionComponent.next () ;
    index ++ ;
  }
  generatedZone3 << "static C_CLI_OptionGroup gCommandLineOptions (& gGenericOptions, & gGalgasOptions, " ;
  index = 0 ;
  currentOptionComponent.rewind () ;
  while (currentOptionComponent.hc ()) {
    generatedZone3 << "& gOption" << cStringWithSigned (index) << ", " ;
    currentOptionComponent.next () ;
    index ++ ;
  }
  generatedZone3 << "NULL) ;\n"
                    "static C_galgas_io_parameters IOparameters (& gCommandLineOptions, false, \"\", \"\") ;\n"
                    "static C_galgas_io * gIOParametersPtr = NULL ;\n"
                    "static " << inLexiqueComponentName << " * gScannerPtr = NULL ;\n"
                    "static NSMutableArray * gColorArray ;\n\n" ;
//--- Macros list
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Text Macros\n\n" ;
  generatedZone3.appendCppTitleComment ("T E X T    M A C R O S") ;
  generatedZone3 << "static uint32 kTextMacroCount = " << cStringWithSigned (inTextMacroList.count ()) << " ;\n\n" ;
  GGS_textMacroList::cEnumerator currentMacro (inTextMacroList, true) ;
  generatedZone3 << "static const char * kTextMacroTitle [" << cStringWithSigned (inTextMacroList.count () + 1) << "] = {\n  " ;
  while (currentMacro.hc ()) {
    generatedZone3.appendCLiteralStringConstant (currentMacro._mKey (HERE)) ;
    generatedZone3 << ",\n  " ;
    currentMacro.next () ;
  }
  generatedZone3 << "NULL\n"
                    "} ;\n\n" ;
  generatedZone3 << "static const char * kTextMacroContent [" << cStringWithSigned (inTextMacroList.count () + 1) << "] = {\n  " ;
  currentMacro.rewind () ;
  while (currentMacro.hc ()) {
    generatedZone3.appendCLiteralStringConstant (currentMacro._mContents (HERE)) ;
    generatedZone3 << ",\n  " ;
    currentMacro.next () ;
  }
  generatedZone3 << "NULL\n"
                    "} ;\n\n" ;
  generatedZone3 << "uint32 getTextMacroCount (void) {\n"
                    "  return kTextMacroCount ;\n"
                    "}\n\n" ;
  generatedZone3 << "const char * getTextMacroTitleAtIndex (const uint32 inIndex) {\n"
                    "  return kTextMacroTitle [inIndex] ;\n"
                    "}\n\n" ;
  generatedZone3 << "const char * getTextMacroContentAtIndex (const uint32 inIndex) {\n"
                    "  return kTextMacroContent [inIndex] ;\n"
                    "}\n\n" ;
//--- Datas for PopUp list
  if (inTerminalSymbolCount > 0) {
    generatedZone3.appendCppTitleComment ("P O P U P    L I S T    D A T A") ;
    C_String mainArray ;
    mainArray << "static const uint16 * kPopUpListData [" << cStringWithSigned (inTerminalSymbolCount + 1) << "] = {\n"
                 "  NULL" ;
    for (sint32 i=0 ; i<inTerminalSymbolCount ; i++) {
      mainArray << ",\n  " ;
      bool first = true ;
      GGS_labelForPopUpList::cEnumerator currentMark (inLabelForPopUpList, true) ;
      while (currentMark.hc ()) {
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
  while (currentNib.hc ()) {
    TC_UniqueArray <C_String> result ;
    currentNib._mValue (HERE).componentsSeparatedByString (".", result) ;
    generatedZone3 << "    [NSArray arrayWithObjects:@\"" << result (0 COMMA_HERE)
                   << "\", [" << result (1 COMMA_HERE) << " class], nil],\n" ;
    currentNib.next () ;
  }
  generatedZone3 << "    nil\n"
                    "  ] ;\n"
                    "}\n\n" ;

//--- Block Comment
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Block Comment\n\n" ;
  generatedZone3.appendCppTitleComment ("B L O C K    C O M M E N T") ;
  generatedZone3 << "NSString * blockComment (void) {\n"
                    "  return @" ;
  generatedZone3.appendCLiteralStringConstant (inBlockComment.string ()) ;
  generatedZone3 << " ;\n"
                    "}\n\n" ;

//--- Lexique interface           
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#pragma mark Lexique interface\n\n" ;
  generatedZone3.appendCppTitleComment ("Lexique interface") ;
  generatedZone3 << "\n"
                    "sint32 getStylesCount (void) {\n"
                    "  return " << inLexiqueComponentName << "::getStylesCount () ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "const char * getStyleName (const sint32 inIndex) {\n"
                    "  return " << inLexiqueComponentName << "::getStyleName (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "const char * getStyleIdentifier (const sint32 inIndex) {\n"
                    "  return " << inLexiqueComponentName << "::getStyleIdentifier (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "void\n"
                    "scanThenGetStyledRangeArray (NSString * inSourceString,\n"
                    "                             const char * inSourceFileName,\n"
                    "                             TC_UniqueArray <C_styledRange> & ioStyledRangeArray,\n"
                    "                             const sint32 inAffectedRangeLocation,\n"
                    "                             const sint32 inAffectedRangeLength,\n"
                    "                             const sint32 inReplacementStringLength,\n"
                    "                             sint32 & outFirstIndexToRedraw,\n"
                    "                             sint32 & outLastIndexToRedraw,\n"
                    "                             sint32 & outEraseRangeStart,\n"
                    "                             sint32 & outEraseRangeEnd,\n"
                    "                             TC_UniqueArray <C_popupEntry> & outPopUpEntries) {\n"
                    "  if (gScannerPtr == NULL) {\n"
                    "    macroMyNew (gIOParametersPtr, C_galgas_io (IOparameters, C_galgas_io::kNoOutput COMMA_HERE)) ;\n"
                    "    macroMyNew (gScannerPtr, " << inLexiqueComponentName << " (NULL, \"\", \"\", gIOParametersPtr, \"\" COMMA_HERE)) ;\n"
                    "  }\n"
                    "  AC_sourceText * sourceTextPtr = NULL ;\n"
                    "  macroMyNew (sourceTextPtr,\n"
                    "              C_sourceTextForCocoa (inSourceString,\n"
                    "                                    inSourceFileName\n"
                    "                                    COMMA_HERE)) ;\n"
                    "  gScannerPtr->resetAndLoadSourceFromText (sourceTextPtr) ;\n"
                    "  gScannerPtr->scanThenGetStyledRangeArray (ioStyledRangeArray,\n"
                    "                                            inAffectedRangeLocation,\n"
                    "                                            inAffectedRangeLength,\n"
                    "                                            inReplacementStringLength,\n"
                    "                                            outFirstIndexToRedraw,\n"
                    "                                            outLastIndexToRedraw,\n"
                    "                                            outEraseRangeStart,\n"
                    "                                            outEraseRangeEnd,\n"
                    "                                            "
                 << ((inTerminalSymbolCount == 0) ? "NULL" : "kPopUpListData")
                 << ",\n"
                    "                                            outPopUpEntries) ;\n"
                    "  macroDetachPointer (sourceTextPtr, C_sourceTextForCocoa) ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "void\n"
                    "initializeTextColors (NSString * inGGS_indexed_color,\n"
                    "                      NSString * inGGS_named_color) {\n"
                    "  NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;\n"
                    "  gColorArray = [NSMutableArray arrayWithCapacity:getStylesCount ()] ;\n"
                    "  [gColorArray retain] ;\n"
                    "  for (int i=0 ; i<getStylesCount () ; i++) {\n"
                    "    NSString * name = [NSString stringWithFormat:@\"%@_%s\", inGGS_named_color, getStyleIdentifier (i)] ;\n"
                    "    NSData * colorData = [defaults dataForKey:name] ;\n"
                    "    if (colorData == nil) {\n"
                    "      NSString * indexedName = [NSString stringWithFormat:@\"%@_%d\", inGGS_indexed_color, i] ;\n"
                    "      colorData = [defaults dataForKey:indexedName] ;\n"
                    "      [defaults setObject:colorData forKey:name] ;\n"
                    "      [defaults setObject:nil forKey:indexedName] ;\n"
                    "    }\n"
                    "    if (colorData != nil) {\n"
                    "      NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData: colorData] ;\n"
                    "      [gColorArray addObject:color] ;\n"
                    "    }else{\n"
                    "      #ifdef USER_DEFAULT_COLORS_DEFINED\n"
                    "        NSColor * newColor = getDefaultUserColor (i) ;\n"
                    "      #else\n"
                    "        NSColor * newColor = [NSColor blackColor] ;\n"
                    "      #endif\n"
                    "        [gColorArray addObject:newColor] ;\n"
                    "        colorData = [NSArchiver archivedDataWithRootObject:newColor] ;\n"
                    "        [defaults setObject:colorData forKey:name] ;\n"
                    "    }\n"
                    "  }\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "NSColor * getColor (const sint32 inIndex) {\n"
                    "  return [gColorArray objectAtIndex: inIndex] ;\n"
                    "}\n\n" ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 <<  "void changeColor (const sint32 inIndex, NSColor * inNewColor) {\n"
                     "  [gColorArray replaceObjectAtIndex: inIndex withObject: inNewColor] ;\n"
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
