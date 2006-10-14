//---------------------------------------------------------------------------*
//                                                                           *
//  Generate cocoa file                                                      *
//                                                                           *
//  Copyright (C) 2004 Pierre Molinaro.                                      *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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

#include "cocoa_parser.h"

//---------------------------------------------------------------------------*

static void
generate_mm_file_for_cocoa (C_Lexique & inLexique,
                            const C_String & inCocoaComponentName,
                            const GGS_lstring & inCLIToolName,
                            const GGS_L_nibAndClassList & inNibAndClassList,
                            const GGS_string & inBlockComment,
                            const C_String & inLexiqueComponentName,
                            const GGS_M_optionComponents & inOptionComponentsMap) {
//--- Generate user includes
  C_String generatedZone2 ;
  generatedZone2 << "#import <Cocoa/Cocoa.h>\n\n"             
                    "#import \"F_CocoaWrapperForGalgas.h\"\n"
                    "#import \"C_sourceTextForCocoa.h\"\n"
                    "#import \"command_line_interface/C_CLI_OptionGroup.h\"\n"
                    "#import \"command_line_interface/C_builtin_CLI_Options.h\"\n"
                    "#import \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#import \"galgas/C_galgas_null_io.h\"\n"
                    "#import \"" << inLexiqueComponentName << ".h\"\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "#import \"" << currentOptionComponent->mKey << ".h\"\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  GGS_L_nibAndClassList::element_type * currentNib = inNibAndClassList.firstObject () ;
  while (currentNib != NULL) {
    macroValidPointer (currentNib) ;
    TC_UniqueArray <C_String> result ;
    currentNib->mValue.componentsSeparatedByString (".", result) ;
    generatedZone2 << "#import \"" << result (1 COMMA_HERE) << ".h\"\n" ;
    currentNib = currentNib->nextObject () ;
  }
  generatedZone2 << "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
                    "  #import \"user_default_colors.h\"\n"
                    "#endif\n"
                    "\n" ;

//--- Global static variables
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3.writeCppTitleComment ("Global static variables") ;
  generatedZone3 << "\n" ;
  sint32 index = 0 ;
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  generatedZone3 << "static C_builtin_CLI_Options gGenericOptions ("
                 << (generateDebug ? "true" : "false")
                 << ") ;\n"
                 << "static C_galgas_CLI_Options gGalgasOptions ;\n" ;
  currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "static " << currentOptionComponent->mKey << " gOption" << index << " ;\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
    index ++ ;
  }
  generatedZone3 << "static C_CLI_OptionGroup gCommandLineOptions (& gGenericOptions, & gGalgasOptions, " ;
  index = 0 ;
  currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "& gOption" << index << ", " ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
    index ++ ;
  }
  generatedZone3 << "NULL) ;\n"
                    "static C_galgas_io_parameters IOparameters (& gCommandLineOptions) ;\n"
                    "static C_galgas_null_io gNullIO (IOparameters) ;\n"
                    "static " << inLexiqueComponentName << " * gScannerPtr = NULL ;\n"
                    "static NSMutableArray * gColorArray ;\n\n" ;

//--- NIB and main class
  generatedZone3.writeCppTitleComment ("N I B S   A N D   T H E I R   M A I N   C L A S S E S") ;
  generatedZone3 << "NSArray * nibsAndClasses (void) {\n"
                    "  return [NSArray arrayWithObjects:\n" ;
  currentNib = inNibAndClassList.firstObject () ;
  while (currentNib != NULL) {
    macroValidPointer (currentNib) ;
    TC_UniqueArray <C_String> result ;
    currentNib->mValue.componentsSeparatedByString (".", result) ;
    generatedZone3 << "    [NSArray arrayWithObjects:@\"" << result (0 COMMA_HERE)
                   << "\", [" << result (1 COMMA_HERE) << " class], nil],\n" ;
    currentNib = currentNib->nextObject () ;
  }
  generatedZone3 << "    nil\n"
                    "  ] ;\n"
                    "}\n\n" ;

//--- Block Comment
  generatedZone3.writeCppTitleComment ("B L O C K    C O M M E N T") ;
  generatedZone3 << "NSString * blockComment (void) {\n"
                    "  return @" ;
  generatedZone3.writeCstringConstant (inBlockComment) ;
  generatedZone3 << " ;\n"
                    "}\n\n" ;

//--- Bool options routines             
  generatedZone3.writeCppTitleComment ("B O O L   O P T I O N S   R O U T I N E S") ;
  generatedZone3 << "sint32 getBoolOptionsCount (void) {\n"
             "  return gCommandLineOptions.getBoolOptionsCount () ;\n"
             "}\n"
             "\n"
             "bool getBoolOptionValue (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getBoolOptionValue (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "void setBoolOptionValue (const sint32 inIndex, const bool inValue COMMA_LOCATION_ARGS) {\n"
             "  gCommandLineOptions.setBoolOptionValue (inIndex, inValue COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "char getBoolOptionChar (const sint32 inIndex COMMA_LOCATION_ARGS)  {\n"
             "  return gCommandLineOptions.getBoolOptionChar (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getBoolOptionString (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getBoolOptionString (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getBoolOptionDescription (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getBoolOptionDescription (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n" ;

//--- unsigned integer options routines             
  generatedZone3.writeCppTitleComment ("U N S I G N E D   I N T E G E R   O P T I O N S   R O U T I N E S") ;
  generatedZone3 << "\n"
             "sint32 getUIntOptionsCount (void) {\n"
             "  return gCommandLineOptions.getUintOptionsCount () ;\n"
             "}\n"
             "\n"
             "uint32 getUIntOptionDefaultValue (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getUintOptionDefaultValue (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "uint32 getUIntOptionValue (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getUintOptionValue (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "void setUIntOptionValue (const sint32 inIndex, const uint32 inValue COMMA_LOCATION_ARGS) {\n"
             "  gCommandLineOptions.setUintOptionValue (inIndex, inValue COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "char getUIntOptionChar (const sint32 inIndex COMMA_LOCATION_ARGS)  {\n"
             "  return gCommandLineOptions.getUintOptionChar (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getUIntOptionString (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getUintOptionString (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getUIntOptionDescription (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getUintOptionDescription (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n" ;

//--- unsigned integer options routines             
  generatedZone3.writeCppTitleComment ("S T R I N G   O P T I O N S   R O U T I N E S") ;
  generatedZone3 << "\n"
             "sint32 getStringOptionsCount (void) {\n"
             "  return gCommandLineOptions.getStringOptionsCount () ;\n"
             "}\n"
             "\n"
             "C_String getStringOptionValue (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getStringOptionValue (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "void setStringOptionValue (const sint32 inIndex, const C_String & inValue COMMA_LOCATION_ARGS) {\n"
             "  gCommandLineOptions.setStringOptionValue (inIndex, inValue COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "char getStringOptionChar (const sint32 inIndex COMMA_LOCATION_ARGS)  {\n"
             "  return gCommandLineOptions.getStringOptionChar (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getStringOptionString (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getStringOptionString (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "const char * getStringOptionDescription (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getStringOptionDescription (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n" ;

//--- Command line tool             
  generatedZone3.writeCppTitleComment ("Command line tool") ;
  generatedZone3 << "\n"
             "const char * getCommandLineInterfaceToolName (void) {\n"
             "  return \"" << inCLIToolName << "\" ;\n"
             "}\n"
             "\n" ;

//--- Lexique interface           
  generatedZone3.writeCppTitleComment ("Lexique interface") ;
  generatedZone3 << "\n"
                    "sint32 getStylesCount (void) {\n"
                    "  return " << inLexiqueComponentName << "::getStylesCount () ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "const char * getStyleName (const sint32 inIndex) {\n"
                    "  return " << inLexiqueComponentName << "::getStyleName (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "const char * getStyleIdentifier (const sint32 inIndex) {\n"
                    "  return " << inLexiqueComponentName << "::getStyleIdentifier (inIndex) ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "void scanThenGetStyledRangeArray (NSString * inSourceString,\n"
                    "                                  const char * inSourceFileName,\n"
                    "                                  TC_UniqueArray <C_styledRange> & ioStyledRangeArray,\n"
                    "                                  const sint32 inAffectedRangeLocation,\n"
                    "                                  const sint32 inAffectedRangeLength,\n"
                    "                                  const sint32 inReplacementStringLength,\n"
                    "                                  sint32 & outFirstIndexToRedraw,\n"
                    "                                  sint32 & outLastIndexToRedraw,\n"
                    "                                  sint32 & outEraseRangeStart,\n"
                    "                                  sint32 & outEraseRangeEnd) {\n"
                    "  if (gScannerPtr == NULL) {\n"
                    "    macroMyNew (gScannerPtr, " << inLexiqueComponentName << " (& gNullIO)) ;\n"
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
                    "                                            outEraseRangeEnd) ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "void\n"
                    "initializeTextColors (NSString * inGGS_indexed_color,\n"
                    "                      NSString * inGGS_named_color) {\n"
                    "  NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;\n"
                    "  gColorArray = [NSMutableArray arrayWithCapacity:getStylesCount ()] ;\n"
                    "  [gColorArray retain] ;\n"
                    "  for (int i=0 ; i<getStylesCount () ; i++) {\n"
                    "    NSString * name = [NSString stringWithFormat:inGGS_named_color, getStyleIdentifier (i)] ;\n"
                    "    NSData * colorData = [defaults dataForKey:name] ;\n"
                    "    if (colorData == nil) {\n"
                    "      NSString * indexedName = [NSString stringWithFormat:inGGS_indexed_color, i] ;\n"
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
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "NSColor * getColor (const sint32 inIndex) {\n"
                    "  return [gColorArray objectAtIndex: inIndex] ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 <<  "void changeColor (const sint32 inIndex, NSColor * inNewColor) {\n"
                     "  [gColorArray replaceObjectAtIndex: inIndex withObject: inNewColor] ;\n"
                    "}\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inCocoaComponentName + ".mm",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void 
routine_generateCocoaComponent (C_Lexique & inLexique,
                                GGS_lstring inGUIcomponentName,
                                GGS_lstring inGUIkindName,
                                GGS_lstring inCLIToolName,
                                GGS_L_nibAndClassList inNibAndClassList,
                                GGS_string inBlockComment,
                                GGS_lstring inLexiqueComponentName,
                                GGS_M_optionComponents inOptionComponentsMap
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inGUIkindName == "cocoa") {
    generate_mm_file_for_cocoa (inLexique,
                                inGUIcomponentName,
                                inCLIToolName,
                                inNibAndClassList,
                                inBlockComment,
                                inLexiqueComponentName,
                                inOptionComponentsMap) ;
  }else{
    inGUIkindName.semanticError (inLexique,
                                 "only the \"cocoa\" gui is currenly supported"
                                 COMMA_HERE) ;
  }
}

//---------------------------------------------------------------------------*
