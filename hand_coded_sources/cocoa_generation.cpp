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

#include "files/C_text_file_write.h"
#include "time/C_datetime.h"

#include "cocoa_parser.h"

//---------------------------------------------------------------------------*

static void
generate_mm_file_for_cocoa (C_lexique & inLexique,
                            const C_string & inCocoaComponentName,
                            const GGS_lstring & inCLIToolName,
                            const C_string & inLexiqueComponentName,
                            const GGS_M_optionComponents & inOptionComponentsMap) {
//--- Generate user includes
  C_string generatedZone2 ;
  generatedZone2 << "#import <Cocoa/Cocoa.h>\n\n"             
             "#include \"cocoa_wrapper_for_galgas.h\"\n"
             "#include \"command_line_interface/C_cli_options_group.h\"\n"
             "#include \"command_line_interface/C_generic_cli_options.h\"\n"
             "#include \"galgas/C_galgas_null_io.h\"\n"
             "#include \"" << inLexiqueComponentName << ".h\"\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "#include \"" << currentOptionComponent->mKey << ".h\"\n" ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
  }
  generatedZone2 << "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
                    "  #import \"user_default_colors.h\"\n"
                    "#endif\n"
                    "\n" ;

//--- Global static variables
  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3.writeTitleComment ("Global static variables") ;
  generatedZone3 << "\n" ;
  sint32 index = 0 ;
  const bool generateDebug = inLexique.getBoolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  generatedZone3 << "static C_generic_cli_options gGenericOptions ("
          << (generateDebug ? "true" : "false")
          << ") ;\n" ;
  currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "static " << currentOptionComponent->mKey << " gOption" << index << " ;\n" ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
    index ++ ;
  }
  generatedZone3 << "static C_cli_options_group gCommandLineOptions (& gGenericOptions, " ;
  index = 0 ;
  currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "& gOption" << index << ", " ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
    index ++ ;
  }
  generatedZone3 << "NULL) ;\n"
             "static C_galgas_io_parameters IOparameters (& gCommandLineOptions) ;\n"
             "static C_galgas_null_io gNullIO (IOparameters) ;\n"
             "static " << inLexiqueComponentName << " gScanner (& gNullIO) ;\n"
             "static NSMutableArray * gColorArray ;\n\n" ;

//--- Bool options routines             
  generatedZone3.writeTitleComment ("B O O L   O P T I O N S   R O U T I N E S") ;
  generatedZone3 << "\n"
             "sint32 getBoolOptionsCount (void) {\n"
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
  generatedZone3.writeTitleComment ("U N S I G N E D   I N T E G E R   O P T I O N S   R O U T I N E S") ;
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
  generatedZone3.writeTitleComment ("S T R I N G   O P T I O N S   R O U T I N E S") ;
  generatedZone3 << "\n"
             "sint32 getStringOptionsCount (void) {\n"
             "  return gCommandLineOptions.getStringOptionsCount () ;\n"
             "}\n"
             "\n"
             "C_string getStringOptionValue (const sint32 inIndex COMMA_LOCATION_ARGS) {\n"
             "  return gCommandLineOptions.getStringOptionValue (inIndex COMMA_THERE) ;\n"
             "}\n"
             "\n"
             "void setStringOptionValue (const sint32 inIndex, const C_string & inValue COMMA_LOCATION_ARGS) {\n"
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
  generatedZone3.writeTitleComment ("Command line tool") ;
  generatedZone3 << "\n"
             "const char * getCommandLineInterfaceToolName (void) {\n"
             "  return \"" << inCLIToolName << "\" ;\n"
             "}\n"
             "\n" ;

//--- Lexique interface           
  generatedZone3.writeTitleComment ("Lexique interface") ;
  generatedZone3 << "\n"
             "sint32 getStylesCount (void) {\n"
             "  return " << inLexiqueComponentName << "::getStylesCount () ;\n"
             "}\n"
             "\n"
             "const char * getStyleName (const sint32 inIndex) {\n"
             "  return " << inLexiqueComponentName << "::getStyleName (inIndex) ;\n"
             "}\n"
             "\n"
             "void scanThenGetStyledRangeArray (const char * inSourceString,\n"
             "                                  const char * inSourceFileName,\n"
             "                                  TC_unique_grow_array <C_styledRange> & ioStyledRangeArray,\n"
             "                                  const sint32 inAffectedRangeLocation,\n"
             "                                  const sint32 inAffectedRangeLength,\n"
             "                                  const sint32 inReplacementStringLength,\n"
             "                                  sint32 & outFirstIndexToRedraw,\n"
             "                                  sint32 & outLastIndexToRedraw,\n"
             "                                  sint32 & outEraseRangeStart,\n"
             "                                  sint32 & outEraseRangeEnd) {\n"
             "  gScanner.resetAndLoadSourceFromText (inSourceString, inSourceFileName) ;\n"
             "  gScanner.scanThenGetStyledRangeArray (ioStyledRangeArray,\n"
             "                                        inAffectedRangeLocation,\n"
             "                                        inAffectedRangeLength,\n"
             "                                        inReplacementStringLength,\n"
             "                                        outFirstIndexToRedraw,\n"
             "                                        outLastIndexToRedraw,\n"
             "                                        outEraseRangeStart,\n"
             "                                        outEraseRangeEnd) ;\n"
             "}\n"
             "\n"
             "void initializeTextColors (NSString * inGGS_colors) {\n"
             "  NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;\n"
             "   gColorArray = [NSMutableArray arrayWithCapacity:getStylesCount ()] ;\n"
             "  [gColorArray retain] ;\n"
             "  for (int i=0 ; i<getStylesCount () ; i++) {\n"
             "    NSString * name = [NSString stringWithFormat:inGGS_colors, i] ;\n"
             "    NSData * colorData = [defaults dataForKey:name] ;\n"
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
             "        [[NSUserDefaults standardUserDefaults] setObject:colorData forKey:name] ;\n"
             "    }\n"
             "  }\n"
             "}\n"
             "\n"
             "NSColor * getColor (const sint32 inIndex) {\n"
             "  return [gColorArray objectAtIndex: inIndex] ;\n"
             "}\n"
             "\n"
             "void changeColor (const sint32 inIndex, NSColor * inNewColor) {\n"
             "  [gColorArray replaceObjectAtIndex: inIndex withObject: inNewColor] ;\n"
             "}\n"
             "\n" ;
  generatedZone3.writeHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile (inCocoaComponentName + ".mm",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void 
generateCocoaComponent (C_lexique & inLexique,
                        GGS_lstring & inCocoaComponentName,
                        GGS_lstring & inCLIToolName,
                        GGS_lstring & inLexiqueComponentName,
                        GGS_M_optionComponents & inOptionComponentsMap) {
 generate_mm_file_for_cocoa (inLexique,
                             inCocoaComponentName,
                             inCLIToolName,
                             inLexiqueComponentName,
                             inOptionComponentsMap) ;
}

//---------------------------------------------------------------------------*
