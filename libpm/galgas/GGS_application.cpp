//--------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "Compiler.h"
#include "BoolCommandLineOption.h"
#include "UIntCommandLineOption.h"
#include "StringCommandLineOption.h"
#include "analyzeCommandLineOptions.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------
//                     'GGS_application' class
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_application::class_func_verboseOutput (UNUSED_LOCATION_ARGS) {
  return GGS_bool (verboseOutput ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_system (UNUSED_LOCATION_ARGS) {
  #if COMPILE_FOR_WINDOWS == 1
    return GGS_string ("windows") ;
  #else
    return GGS_string ("unix") ;
  #endif
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_application::class_func_boolOptionNameList (LOCATION_ARGS) {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  GenericUniqueArray <String> array ;
  BoolCommandLineOption::getBoolOptionNameList (array) ;
  for (int32_t i=0 ; i<array.count () ; i+=2) {
    result.addAssignOperation (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE)) COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_application::class_func_boolOptionInvocationCharacter (const GGS_string & inDomainName,
                                                                           const GGS_string & inIdentifier
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_char result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const utf32 c = BoolCommandLineOption::getBoolOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_char (c) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_boolOptionInvocationString (const GGS_string & inDomainName,
                                                                          const GGS_string & inIdentifier
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = BoolCommandLineOption::getBoolOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_boolOptionCommentString (const GGS_string & inDomainName,
                                                                       const GGS_string & inIdentifier
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = BoolCommandLineOption::getBoolOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_application::class_func_boolOptionValue (const GGS_string & inDomainName,
                                                             const GGS_string & inIdentifier
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const bool v = BoolCommandLineOption::getBoolOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_bool (v) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_application::class_method_setBoolOptionValue (GGS_string inDomainName,
                                                          GGS_string inIdentifier,
                                                          GGS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
    BoolCommandLineOption::setBoolOptionValue (inDomainName.stringValue (),
                                                 inIdentifier.stringValue (),
                                                 inValue.boolValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   @UINT options                                                                               
//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_application::class_func_uintOptionNameList (LOCATION_ARGS) {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  GenericUniqueArray <String> array ;
  UIntCommandLineOption::getUIntOptionNameList (array) ;
  for (int32_t i=0 ; i<array.count () ; i+=2) {
    result.addAssignOperation (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE)) COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


GGS_char GGS_application::class_func_uintOptionInvocationCharacter (const GGS_string & inDomainName,
                                                                           const GGS_string & inIdentifier
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_char result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const utf32 c = UIntCommandLineOption::getUIntOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_char (c) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_uintOptionInvocationString (const GGS_string & inDomainName,
                                                                          const GGS_string & inIdentifier
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = UIntCommandLineOption::getUIntOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_uintOptionCommentString (const GGS_string & inDomainName,
                                                                       const GGS_string & inIdentifier
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = UIntCommandLineOption::getUIntOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_application::class_func_uintOptionValue (const GGS_string & inDomainName,
                                                             const GGS_string & inIdentifier
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const uint32_t v = UIntCommandLineOption::getUIntOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_uint (v) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_application::class_method_setUIntOptionValue (GGS_string inDomainName,
                                                          GGS_string inIdentifier,
                                                          GGS_uint inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
    UIntCommandLineOption::setUIntOptionValue (inDomainName.stringValue (),
                                                 inIdentifier.stringValue (),
                                                 inValue.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_application::class_method_exit (GGS_uint inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inValue.isValid ()) {
    exit (int (inValue.uintValue ())) ;
  }else{
    exit (1) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   STRING OPTION                                                                               
//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_application::class_func_stringOptionNameList (LOCATION_ARGS) {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  GenericUniqueArray <String> array ;
  StringCommandLineOption::getStringOptionNameList (array) ;
  for (int32_t i=0 ; i<array.count () ; i+=2) {
    result.addAssignOperation (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE)) COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_application::class_func_stringOptionInvocationCharacter (const GGS_string & inDomainName,
                                                                             const GGS_string & inIdentifier
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_char result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const utf32 c = StringCommandLineOption::getStringOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_char (c) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_stringOptionInvocationString (const GGS_string & inDomainName,
                                                                            const GGS_string & inIdentifier
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = StringCommandLineOption::getStringOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_stringOptionCommentString (const GGS_string & inDomainName,
                                                                         const GGS_string & inIdentifier
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String s = StringCommandLineOption::getStringOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_stringOptionValue (const GGS_string & inDomainName,
                                                                 const GGS_string & inIdentifier
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ;
  if (inDomainName.isValid () && inIdentifier.isValid ()) {
    const String v = StringCommandLineOption::getStringOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
    result = GGS_string (v) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_application::class_method_setStringOptionValue (GGS_string inDomainName,
                                                            GGS_string inIdentifier,
                                                            GGS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
    StringCommandLineOption::setStringOptionValue (inDomainName.stringValue (),
                                                     inIdentifier.stringValue (),
                                                     inValue.stringValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Version strings
//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_projectVersionString (UNUSED_LOCATION_ARGS) {
  return GGS_string (projectVersionString ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_galgasVersionString (UNUSED_LOCATION_ARGS) {
  return GGS_string (galgasVersionString ()) ;
}

//--------------------------------------------------------------------------------------------------
//  Command line arguments
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_application::class_func_commandLineArgumentCount (UNUSED_LOCATION_ARGS) {
  return GGS_uint (commandLineArgumentCount ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_commandLineArgumentAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < commandLineArgumentCount ()) {
      result = GGS_string (commandLineArgumentAtIndex (idx)) ;
    }else{
      String message ;
      message.appendCString ("@application.commandLineArgumentAtIndex: index ") ;
      message.appendUnsigned (idx) ;
      message.appendCString (" >= argument count = ") ;
      message.appendUnsigned (commandLineArgumentCount ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------*

GGS_stringset GGS_application::class_func_keywordIdentifierSet (LOCATION_ARGS) {
  GGS_stringset result = GGS_stringset::class_func_emptySet (THERE) ;
  GenericUniqueArray <String> list ;
  LexiqueIntrospection::getKeywordListNames (list) ;
  for (int32_t i=0 ; i < list.count () ; i++) {
    result.plusPlusAssignOperation (GGS_string (list (i COMMA_HERE)) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------*

GGS_stringlist GGS_application::class_func_keywordListForIdentifier (const GGS_string & inIdentifier
                                                                     COMMA_LOCATION_ARGS) {
  GGS_stringlist result ;
  if (inIdentifier.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    GenericUniqueArray <String> list ;
    bool found = false ;
    LexiqueIntrospection::getKeywordListForIdentifier (inIdentifier.stringValue(), found, list) ;
    for (int32_t i=0 ; i < list.count () ; i++) {
      result.addAssignOperation (GGS_string (list (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
