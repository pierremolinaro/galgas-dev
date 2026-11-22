//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "BoolCommandLineOption.h"
#include "UIntCommandLineOption.h"
#include "StringCommandLineOption.h"
#include "analyzeCommandLineOptions.h"
#include "LexiqueIntrospection.h"
#include "galgas-input-output.h"

//--------------------------------------------------------------------------------------------------
//                     'GGS_application' class
//--------------------------------------------------------------------------------------------------

GGS_string GGS_application::class_func_system (UNUSED_LOCATION_ARGS) {
  #if COMPILE_FOR_WINDOWS == 1
    return GGS_string ("windows") ;
  #else
    return GGS_string ("unix") ;
  #endif
}

//--------------------------------------------------------------------------------------------------

/* GGS_bool GGS_application::class_func_runningOnUnix (UNUSED_LOCATION_ARGS) {
  #if COMPILE_FOR_WINDOWS == 1
    return GGS_bool (false) ;
  #else
    return GGS_bool (true) ;
  #endif
} */

//--------------------------------------------------------------------------------------------------

/* GGS_bool GGS_application::class_func_runningOnWindows (UNUSED_LOCATION_ARGS) {
  #if COMPILE_FOR_WINDOWS == 1
    return GGS_bool (true) ;
  #else
    return GGS_bool (false) ;
  #endif
} */

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_application::class_func_errorCount (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (uint32_t (totalErrorCount ())) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_application::class_func_warningCount (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (uint32_t (totalWarningCount ())) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_application::class_func_compilationMode (UNUSED_LOCATION_ARGS) {
  #ifdef __LP64__
    return GGS_u_33__32_ (64) ;
  #else
    return GGS_u_33__32_ (32) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

//GGS__5B_stringString_5D_ GGS_application::class_func_boolOptionNameList (LOCATION_ARGS) {
//  GGS__5B_stringString_5D_ result = GGS__5B_stringString_5D_::init (nullptr COMMA_THERE) ;
//  GenericUniqueArray <String> array ;
//  BoolCommandLineOption::getBoolOptionNameList (array) ;
//  for (int32_t i=0 ; i<array.count () ; i+=2) {
//    const GGS_stringString v = GGS_stringString (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE))) ;
//    result.plusPlusAssignOperation (v COMMA_THERE) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_char GGS_application::class_func_boolOptionInvocationCharacter (const GGS_string & inDomainName,
//                                                                    const GGS_string & inIdentifier
//                                                                    COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_char result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const utf32 c = BoolCommandLineOption::getBoolOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_char (c) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_boolOptionInvocationString (const GGS_string & inDomainName,
//                                                                   const GGS_string & inIdentifier
//                                                                   COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = BoolCommandLineOption::getBoolOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_boolOptionCommentString (const GGS_string & inDomainName,
//                                                                const GGS_string & inIdentifier
//                                                                COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = BoolCommandLineOption::getBoolOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_bool GGS_application::class_func_boolOptionValue (const GGS_string & inDomainName,
//                                                      const GGS_string & inIdentifier
//                                                      COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_bool result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const bool v = BoolCommandLineOption::getBoolOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_bool (v) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//void GGS_application::class_method_setBoolOptionValue (GGS_string inDomainName,
//                                                       GGS_string inIdentifier,
//                                                       GGS_bool inValue
//                                                       COMMA_UNUSED_LOCATION_ARGS) {
//  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
//    BoolCommandLineOption::setBoolOptionValue (inDomainName.stringValue (),
//                                                 inIdentifier.stringValue (),
//                                                 inValue.boolValue ()) ;
//  }
//}

//--------------------------------------------------------------------------------------------------
//   @u32 options                                                                               
//--------------------------------------------------------------------------------------------------

//GGS__5B_stringString_5D_ GGS_application::class_func_uintOptionNameList (LOCATION_ARGS) {
//  GGS__5B_stringString_5D_ result = GGS__5B_stringString_5D_::init (nullptr COMMA_THERE) ;
//  GenericUniqueArray <String> array ;
//  UIntCommandLineOption::getUIntOptionNameList (array) ;
//  for (int32_t i=0 ; i<array.count () ; i+=2) {
//    const GGS_stringString v = GGS_stringString (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE))) ;
//    result.plusPlusAssignOperation (v COMMA_THERE) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------


//GGS_char GGS_application::class_func_uintOptionInvocationCharacter (const GGS_string & inDomainName,
//                                                                    const GGS_string & inIdentifier
//                                                                    COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_char result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const utf32 c = UIntCommandLineOption::getUIntOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_char (c) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_uintOptionInvocationString (const GGS_string & inDomainName,
//                                                                   const GGS_string & inIdentifier
//                                                                   COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = UIntCommandLineOption::getUIntOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_uintOptionCommentString (const GGS_string & inDomainName,
//                                                                const GGS_string & inIdentifier
//                                                                COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = UIntCommandLineOption::getUIntOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_u_33__32_ GGS_application::class_func_uintOptionValue (const GGS_string & inDomainName,
//                                                      const GGS_string & inIdentifier
//                                                      COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_u_33__32_ result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const uint32_t v = UIntCommandLineOption::getUIntOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_u_33__32_ (v) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//void GGS_application::class_method_setUIntOptionValue (GGS_string inDomainName,
//                                                       GGS_string inIdentifier,
//                                                       GGS_u_33__32_ inValue
//                                                       COMMA_UNUSED_LOCATION_ARGS) {
//  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
//    UIntCommandLineOption::setUIntOptionValue (inDomainName.stringValue (),
//                                                 inIdentifier.stringValue (),
//                                                 inValue.uintValue ()) ;
//  }
//}

//--------------------------------------------------------------------------------------------------

//void GGS_application::class_method_exit (GGS_u_33__32_ inValue
//                                         COMMA_UNUSED_LOCATION_ARGS) {
//  if (inValue.isValid ()) {
//    exit (int (inValue.uintValue ())) ;
//  }else{
//    exit (1) ;
//  }
//}

//--------------------------------------------------------------------------------------------------
//   STRING OPTION                                                                               
//--------------------------------------------------------------------------------------------------

//GGS__5B_stringString_5D_ GGS_application::class_func_stringOptionNameList (LOCATION_ARGS) {
//  GGS__5B_stringString_5D_ result = GGS__5B_stringString_5D_::init (nullptr COMMA_THERE) ;
//  GenericUniqueArray <String> array ;
//  StringCommandLineOption::getStringOptionNameList (array) ;
//  for (int32_t i=0 ; i<array.count () ; i+=2) {
//    const GGS_stringString v = GGS_stringString (GGS_string (array (i COMMA_THERE)), GGS_string (array (i+1 COMMA_THERE))) ;
//    result.plusPlusAssignOperation (v COMMA_THERE) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_char GGS_application::class_func_stringOptionInvocationCharacter (const GGS_string & inDomainName,
//                                                                      const GGS_string & inIdentifier
//                                                                      COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_char result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const utf32 c = StringCommandLineOption::getStringOptionInvocationLetter (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_char (c) ;
//  }
//  return result ;
//}
//
//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_stringOptionInvocationString (const GGS_string & inDomainName,
//                                                                     const GGS_string & inIdentifier
//                                                                     COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = StringCommandLineOption::getStringOptionInvocationString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_stringOptionCommentString (const GGS_string & inDomainName,
//                                                                  const GGS_string & inIdentifier
//                                                                  COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String s = StringCommandLineOption::getStringOptionCommentString (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (s) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_stringOptionValue (const GGS_string & inDomainName,
//                                                          const GGS_string & inIdentifier
//                                                          COMMA_UNUSED_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inDomainName.isValid () && inIdentifier.isValid ()) {
//    const String v = StringCommandLineOption::getStringOptionValue (inDomainName.stringValue (), inIdentifier.stringValue ()) ;
//    result = GGS_string (v) ;
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

//void GGS_application::class_method_setStringOptionValue (GGS_string inDomainName,
//                                                         GGS_string inIdentifier,
//                                                         GGS_string inValue
//                                                         COMMA_UNUSED_LOCATION_ARGS) {
//  if (inDomainName.isValid () && inIdentifier.isValid () && inValue.isValid ()) {
//    StringCommandLineOption::setStringOptionValue (inDomainName.stringValue (),
//                                                     inIdentifier.stringValue (),
//                                                     inValue.stringValue ()) ;
//  }
//}

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

//GGS_u_33__32_ GGS_application::class_func_commandLineArgumentCount (UNUSED_LOCATION_ARGS) {
//  return GGS_u_33__32_ (commandLineArgumentCount ()) ;
//}

//--------------------------------------------------------------------------------------------------

//GGS_string GGS_application::class_func_commandLineArgumentAtIndex (const GGS_u_33__32_ & inIndex,
//                                                                   Compiler * inCompiler
//                                                                   COMMA_LOCATION_ARGS) {
//  GGS_string result ;
//  if (inIndex.isValid ()) {
//    const uint32_t idx = inIndex.uintValue () ;
//    if (idx < commandLineArgumentCount ()) {
//      result = GGS_string (commandLineArgumentAtIndex (idx)) ;
//    }else{
//      String message ;
//      message.appendCString ("@application.commandLineArgumentAtIndex: index ") ;
//      message.appendUnsigned (idx) ;
//      message.appendCString (" >= argument count = ") ;
//      message.appendUnsigned (commandLineArgumentCount ()) ;
//      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
//    }
//  }
//  return result ;
//}

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

GGS__5B_string_5D_ GGS_application::class_func_keywordListForIdentifier (const GGS_string & inIdentifier
                                                                         COMMA_LOCATION_ARGS) {
  GGS__5B_string_5D_ result ;
  if (inIdentifier.isValid ()) {
    result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;
    GenericUniqueArray <String> list ;
    bool found = false ;
    LexiqueIntrospection::getKeywordListForIdentifier (inIdentifier.stringValue(), found, list) ;
    for (int32_t i=0 ; i < list.count () ; i++) {
      result.plusPlusAssignOperation (GGS_string (list (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
