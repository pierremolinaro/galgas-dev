//---------------------------------------------------------------------------*
//                                                                           *
//   Option Component Generation (hand-coded file)                           *
//                                                                           *
//  Copyright (C) 2003-2004 Pierre Molinaro.                                 *
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
#include "time/C_DateTime.h"
#include "generic_arraies/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

#include "cli_options_parser.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_option_header_file (C_Lexique & inLexique,
                             const GGS_lstring & inOptionClassName,
                             const GGS_M_cli_options & inBoolOptionsMap,
                             const GGS_M_cli_options & inUintOptionsMap) {
//--- Write #ifndef, ..., #include, ...
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << inOptionClassName << "_0_DEFINED\n"
            "#define " << inOptionClassName << "_0_DEFINED\n"
            "#include \"command_line_interface/AC_CLI_Options.h\"\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3.writeTitleComment ("Command Line Options definitions class") ;
  generatedZone3 << "class " << inOptionClassName << " : public AC_CLI_Options {\n"
            "//--- Constructor\n"
            "  public : " << inOptionClassName << " (void) ;\n"
            "\n"
            "//--- Boolean Command Line Interface Options\n"
            "  public : virtual sint32 getBoolOptionsCount (void) const ;\n"
            "  public : virtual bool getBoolOptionValue (const sint32 inIndex) const ;\n"
            "  public : virtual void setBoolOptionValue (const sint32 inIndex, const bool inValue) ;\n"
            "  public : virtual char getBoolOptionChar (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getBoolOptionString (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getBoolOptionDescription (const sint32 inIndex) const ;\n"
            "  public : virtual bool boolOptionValueFromKeys (const char * inModuleName,\n"
            "                                                    const char * inOptionName,\n"
            "                                                    bool * outFound) const ;\n"
            "\n"
            "//--- Unsigned integer Command Line Interface Options\n"
            "  public : virtual sint32 getUintOptionsCount (void) const ;\n"
            "  public : virtual uint32 getUintOptionValue (const sint32 inIndex) const ;\n"
            "  public : virtual uint32 getUintOptionDefaultValue (const sint32 inIndex) const ;\n"
            "  public : virtual void setUintOptionValue (const sint32 inIndex, const uint32 inValue) ;\n"
            "  public : virtual char getUintOptionChar (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getUintOptionString (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getUintOptionDescription (const sint32 inIndex) const ;\n"
            "  public : virtual uint32 uintOptionValueFromKeys (const char * inModuleName,\n"
            "                                                      const char * inOptionName,\n"
            "                                                      bool * outFound) const ;\n"
            "\n"
            "//--- String Command Line Interface Options\n"
            "  public : virtual sint32 getStringOptionsCount (void) const ;\n"
            "  public : virtual C_String getStringOptionValue (const sint32 inIndex) const ;\n"
            "  public : virtual void setStringOptionValue (const sint32 inIndex, const C_String & inValue) ;\n"
            "  public : virtual char getStringOptionChar (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getStringOptionString (const sint32 inIndex) const ;\n"
            "  public : virtual const char * getStringOptionDescription (const sint32 inIndex) const ;\n"
            "  public : virtual C_String stringOptionValueFromKeys (const char * inModuleName,\n"
            "                                                          const char * inOptionName,\n"
            "                                                          bool * outFound) const ;\n"
            "\n"
            "//--- Private arraies : current options values\n"
            "  private : bool mBoolValue [" << (inBoolOptionsMap.count () + 1) << "] ;\n"
            "  private : uint32 mUintValue [" << (inUintOptionsMap.count () + 1) << "] ;\n"
            "  private : TC_UniqueArray <C_String> mStringValue ;\n"
            "} ;\n\n" ;
//--- End of ".h" file
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile (inOptionClassName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Generate C++ Option file                              *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_option_cpp_file (C_Lexique & inLexique,
                          const GGS_lstring & inOptionClassName,
                          const GGS_M_cli_options & inBoolOptionsMap,
                          const GGS_M_cli_options & inUintOptionsMap) {
//--------------------------------------- Engendrer les inclusions
  C_String generatedZone2 ;
  generatedZone2 << "#include <string.h>\n\n"
                   "#include \"" << inOptionClassName << ".h\"\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
//--------------------------------------- Constructor
  generatedZone3.writeTitleComment ("C O N S T R U C T O R") ;
  generatedZone3 << inOptionClassName << "::" << inOptionClassName
          << " (void)\n"
             ":mStringValue (1 COMMA_HERE) {\n" ;
  GGS_M_cli_options::element_type * currentOption = inBoolOptionsMap.firstObject () ;
  sint32 index = 0 ;
  while (currentOption != NULL) {
    macroValidPointer (currentOption) ;
    generatedZone3 << "  mBoolValue [" << index << "] = " << currentOption->mInfo.mDefaultValue.getValue () << " ;\n" ;
    index ++ ;
    currentOption = currentOption->nextObject () ;
  }
  generatedZone3 << "  mBoolValue [" << index << "] = false ; // Extra unused entry\n" ;
  currentOption = inUintOptionsMap.firstObject () ;
  index = 0 ;
  while (currentOption != NULL) {
    macroValidPointer (currentOption) ;
    generatedZone3 << "  mUintValue [" << index << "] = " << currentOption->mInfo.mDefaultValue.getValue () << " ;\n" ;
    index ++ ;
    currentOption = currentOption->nextObject () ;
  }
  generatedZone3 << "  mUintValue [" << index << "] = 0 ; // Extra unused entry\n"
             "}\n\n" ;

//--------------------------------------- Get bool options count
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N S    C O U N T") ;
  generatedZone3 << "sint32 " << inOptionClassName << "::getBoolOptionsCount (void) const {\n"
          << "  return " << inBoolOptionsMap.count () << " ;\n"
             "}\n\n" ;

//--------------------------------------- Get bool option value
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N    V A L U E") ;
  generatedZone3 << "bool " << inOptionClassName
          << "::getBoolOptionValue (const sint32 inIndex) const {\n"
             "  return ((inIndex >= 0) && (inIndex < " << inBoolOptionsMap.count () << ")) ? mBoolValue [inIndex] : false ;\n"
             "}\n\n" ;

//--------------------------------------- Set bool option value
  generatedZone3.writeTitleComment ("S E T    B O O L    O P T I O N    V A L U E") ;
  generatedZone3 << "void " << inOptionClassName
          << "::setBoolOptionValue (const sint32 inIndex, const bool inValue) {\n"
             "  if ((inIndex >= 0) && (inIndex < " << inBoolOptionsMap.count () << ")) {\n"
             "    mBoolValue [inIndex] = inValue ;\n"
             "  }\n"
             "}\n\n" ;

//--------------------------------------- Get bool option char
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N    C H A R A C T E R") ;
  generatedZone3 << "char " << inOptionClassName
          << "::getBoolOptionChar (const sint32 inIndex) const {\n"
             "  const char kCharArray ["<< (inBoolOptionsMap.count () + 1) << "] = {" ;
  currentOption = inBoolOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCcharConstant (currentOption->mInfo.mOptionChar.getValue ()) ;
    generatedZone3 << ", " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "'\\0'} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inBoolOptionsMap.count () << ")) ? kCharArray [inIndex] : '\\0' ;\n"
             "}\n\n" ;

//--------------------------------------- Get bool option string
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N    S T R I N G") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::getBoolOptionString (const sint32 inIndex) const {\n"
             "  const char * kStringArray ["<< (inBoolOptionsMap.count () + 1) << "] = {" ;
  currentOption = inBoolOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCstringConstant (currentOption->mInfo.mOptionString) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inBoolOptionsMap.count () << ")) ? kStringArray [inIndex] : \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get bool description string
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N    D E S C R I P T I O N") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::getBoolOptionDescription (const sint32 inIndex) const {\n"
          << "  const char * kDescriptionArray ["<< (inBoolOptionsMap.count () + 1) << "] = {" ;
  currentOption = inBoolOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCstringConstant (currentOption->mInfo.mComment) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inBoolOptionsMap.count () << ")) ? kDescriptionArray [inIndex] : \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get bool option value from keys
  generatedZone3.writeTitleComment ("G E T    B O O L    O P T I O N    V A L U E    F R O M    K E Y S") ;
  generatedZone3 << "bool " << inOptionClassName
          << "::boolOptionValueFromKeys (const char * inModuleName,\n"
             "                              const char * inOptionName,\n"
             "                              bool * outFound) const {\n"
          << "  const char * kKeyArray ["<< (inBoolOptionsMap.count () + 1) << "] = {" ;
  currentOption = inBoolOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    macroValidPointer (currentOption) ;
    generatedZone3.writeCstringConstant (currentOption->mKey) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  bool result = false ;\n"
             "  bool found = strcmp (inModuleName, \""  << inOptionClassName << "\") == 0 ;\n"
             "  if (found) {\n"
             "    found = false ;\n"
             "    sint32 index = 0 ;\n"
             "    while ((index < " << inBoolOptionsMap.count () << ") && ! found) {\n"
             "      found = strcmp (inOptionName, kKeyArray [index]) == 0 ;\n"
             "      if (found) {\n"
             "        result = mBoolValue [index] ;\n"
             "      }\n"
             "      index ++ ;\n"
             "    }\n"
             "  }\n"
             "  if (outFound != NULL) {\n"
             "    * outFound = found ;\n"
             "  }\n"
             "  return result ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint options count
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N S    C O U N T") ;
  generatedZone3 << "sint32 " << inOptionClassName << "::getUintOptionsCount (void) const {\n"
          << "  return " << inUintOptionsMap.count () << " ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint option value
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N    V A L U E") ;
  generatedZone3 << "uint32 " << inOptionClassName
          << "::getUintOptionValue (const sint32 inIndex) const {\n"
             "  return ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) ? mUintValue [inIndex] : 0 ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint option default value
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N    D E F A U L T    V A L U E") ;
  generatedZone3 << "uint32 " << inOptionClassName
          << "::getUintOptionDefaultValue (const sint32 inIndex) const {\n"
             "  const uint32 kDefaultValues [" << (inUintOptionsMap.count () + 1) << "] = {\n" ;
  currentOption = inUintOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    macroValidPointer (currentOption) ;
    generatedZone3 << "  " << currentOption->mInfo.mDefaultValue.getValue () << ",\n" ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "  0} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) ? kDefaultValues [inIndex] : 0 ;\n"
             "}\n\n" ;

//--------------------------------------- Set uint option value
  generatedZone3.writeTitleComment ("S E T    U I N T    O P T I O N    V A L U E") ;
  generatedZone3 << "void " << inOptionClassName
          << "::setUintOptionValue (const sint32 inIndex, const uint32 inValue) {\n"
             "  if ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) {\n"
             "    mUintValue [inIndex] = inValue ;\n"
             "  }\n"
             "}\n\n" ;

//--------------------------------------- Get uint option char
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N    C H A R A C T E R") ;
  generatedZone3 << "char " << inOptionClassName
          << "::getUintOptionChar (const sint32 inIndex) const {\n"
             "  const char kCharArray ["<< (inUintOptionsMap.count () + 1) << "] = {" ;
  currentOption = inUintOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCcharConstant (currentOption->mInfo.mOptionChar.getValue ()) ;
    generatedZone3 << ", " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "'\\0'} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) ? kCharArray [inIndex] : '\\0' ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint option string
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N    S T R I N G") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::getUintOptionString (const sint32 inIndex) const {\n"
             "  const char * kStringArray ["<< (inUintOptionsMap.count () + 1) << "] = {" ;
  currentOption = inUintOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCstringConstant (currentOption->mInfo.mOptionString) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) ? kStringArray [inIndex] : \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint description string
  generatedZone3.writeTitleComment ("G E T   U I N T    O P T I O N    D E S C R I P T I O N") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::getUintOptionDescription (const sint32 inIndex) const {\n"
          << "  const char * kDescriptionArray ["<< (inUintOptionsMap.count () + 1) << "] = {" ;
  currentOption = inUintOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    generatedZone3.writeCstringConstant (currentOption->mInfo.mComment) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  return ((inIndex >= 0) && (inIndex < " << inUintOptionsMap.count () << ")) ? kDescriptionArray [inIndex] : \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get uint option value from keys
  generatedZone3.writeTitleComment ("G E T    U I N T    O P T I O N    V A L U E    F R O M    K E Y S") ;
  generatedZone3 << "uint32 " << inOptionClassName
          << "::uintOptionValueFromKeys (const char * inModuleName,\n"
             "                              const char * inOptionName,\n"
             "                              bool * outFound) const {\n"
          << "  const char * kKeyArray ["<< (inUintOptionsMap.count () + 1) << "] = {" ;
  currentOption = inUintOptionsMap.firstObject () ;
  while (currentOption != NULL) {
    macroValidPointer (currentOption) ;
    generatedZone3.writeCstringConstant (currentOption->mKey) ;
    generatedZone3 << ",\n    " ;
    currentOption = currentOption->nextObject () ;
  }          
  generatedZone3 << "\"\"} ;\n"
             "  uint32 result = 0 ;\n"
             "  bool found = strcmp (inModuleName, \""  << inOptionClassName << "\") == 0 ;\n"
             "  if (found) {\n"
             "    found = false ;\n"
             "    sint32 index = 0 ;\n"
             "    while ((index < " << inUintOptionsMap.count () << ") && ! found) {\n"
             "      found = strcmp (inOptionName, kKeyArray [index]) == 0 ;\n"
             "      if (found) {\n"
             "        result = mUintValue [index] ;\n"
             "      }\n"
             "      index ++ ;\n"
             "    }\n"
             "  }\n"
             "  if (outFound != NULL) {\n"
             "    * outFound = found ;\n"
             "  }\n"
             "  return result ;\n"
             "}\n\n" ;

//--------------------------------------- Get string options count
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N S    C O U N T") ;
  generatedZone3 << "sint32 " << inOptionClassName
          << "::getStringOptionsCount (void) const {\n"
             "  return 0 ;\n"
             "}\n\n" ;

//--------------------------------------- Get string options value
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N S    V A L U E") ;
  generatedZone3 << "C_String " << inOptionClassName
          << "::\n"
             "getStringOptionValue (const sint32 /* inIndex */) const {\n"
             "  return C_String () ;\n"
             "}\n\n" ;

//--------------------------------------- Set string options value
  generatedZone3.writeTitleComment ("S E T    S T R I N G    O P T I O N S    V A L U E") ;
  generatedZone3 << "void " << inOptionClassName
          << "::\n"
             "setStringOptionValue (const sint32 /* inIndex */, const C_String & /* inValue */) {\n"
             "}\n\n" ;

//--------------------------------------- Get string option char
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N    C H A R") ;
  generatedZone3 << "char " << inOptionClassName
          << "::\n"
             "getStringOptionChar (const sint32 /* inIndex */) const {\n"
             "  return '\\0' ;\n"
             "}\n\n" ;

//--------------------------------------- Get string option string
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N    S T R I N G") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::\n"
             "getStringOptionString (const sint32 /* inIndex */) const {\n"
             "  return \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get string option description
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N    D E S C R I P T I O N") ;
  generatedZone3 << "const char * " << inOptionClassName
          << "::\n"
             "getStringOptionDescription (const sint32 /* inIndex */) const {\n"
             "  return \"\" ;\n"
             "}\n\n" ;

//--------------------------------------- Get string option value from keys
  generatedZone3.writeTitleComment ("G E T    S T R I N G    O P T I O N    V A L U E   F R O M   K E Y S") ;
  generatedZone3 << "C_String " << inOptionClassName
          << "::\n"
             "stringOptionValueFromKeys (const char * /* inModuleName */,\n"
             "                              const char * /* inOptionName */,\n"
             "                              bool * outFound) const {\n"
             "  if (* outFound) {\n"
             "    * outFound = false ;\n"
             "  }\n"
             "  return C_String () ;\n"
             "}\n\n" ;

  generatedZone3.writeHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile (inOptionClassName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void
generate_option_component (C_Lexique & inLexique,
                           GGS_lstring & inOptionClassName,
                           GGS_M_cli_options & inBoolOptionsMap,
                           GGS_M_cli_options & inUintOptionsMap) {
//--- Generate header file
  generate_option_header_file (inLexique,
                               inOptionClassName,
                               inBoolOptionsMap,
                               inUintOptionsMap) ;
//--- Generate implementation file
  generate_option_cpp_file (inLexique,
                            inOptionClassName,
                            inBoolOptionsMap,
                            inUintOptionsMap) ;
}

//---------------------------------------------------------------------------*
