//--------------------------------------------------------------------------------------------------
//
//  Lexique introspection
//
//  This file is part of libpm library
//
//  Copyright (C) 2016, ..., 2016 Pierre Molinaro.
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

#include "LexiqueIntrospection.h"
#include "C_galgas_CLI_Options.h"
#include "Compiler.h"
#include "FileManager.h"

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection * gLexiqueIntrospectionRoot = nullptr ;

//--------------------------------------------------------------------------------------------------

LexiqueIntrospection::LexiqueIntrospection (void (*appendKeywordListNames) (GenericUniqueArray <String> & ioList),
                                            Type_getKeywordsForIdentifier getKeywordsForIdentifier) :
mNext (gLexiqueIntrospectionRoot),
mAppendKeywordListNames (appendKeywordListNames),
mGetKeywordsForIdentifier (getKeywordsForIdentifier) {
  gLexiqueIntrospectionRoot = this ;
}

//--------------------------------------------------------------------------------------------------

void LexiqueIntrospection::getKeywordListNames (GenericUniqueArray <String> & outList) {
  outList.removeAllKeepingCapacity () ;
  LexiqueIntrospection * p = gLexiqueIntrospectionRoot ;
  while (nullptr != p) {
    p->mAppendKeywordListNames (outList) ;
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void LexiqueIntrospection::getKeywordListForIdentifier (const String & inIdentifier,
                                                        bool & outFound,
                                                        GenericUniqueArray <String> & outList) {
  outFound = false ;
  outList.removeAllKeepingCapacity () ;
  LexiqueIntrospection * p = gLexiqueIntrospectionRoot ;
  while ((nullptr != p) && !outFound) {
    p->mGetKeywordsForIdentifier (inIdentifier, outFound, outList) ;
    p = p->mNext ;
  }
//--- Sort keyword list
  outList.sortArrayUsingComparisonOperators () ;
}

//--------------------------------------------------------------------------------------------------

void LexiqueIntrospection::handleGetKeywordListOption (Compiler * inCompiler) {
  const String option = gOption_galgas_5F_builtin_5F_options_outputKeywordList.readProperty_value () ;
  if (option != "") {
    const String optionFormat = "lexique_name:list_name:columns:prefix:postfix:path" ;
    gCout.appendCString ("Option \"--") ;
    gCout.appendString (gOption_galgas_5F_builtin_5F_options_outputKeywordList.mCommandString) ;
    gCout.appendCString ("=") ;
    gCout.appendString (option) ;
    gCout.appendCString ("\":\n") ;
    GenericUniqueArray <String> components ;
    option.componentsSeparatedByString (":", components) ;
    if (components.count () != 6) {
      String message = "invalid option ; should be \"--" ;
      message.appendString (gOption_galgas_5F_builtin_5F_options_outputKeywordList.mCommandString) ;
      message.appendCString ("=") ;
      message.appendString (optionFormat + "\"") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_HERE) ;
    }else if (!components (2 COMMA_HERE).isUnsignedInteger ()) {
      String message = "invalid option ; in \"--" ;
      message.appendString (gOption_galgas_5F_builtin_5F_options_outputKeywordList.mCommandString) ;
      message.appendCString ("=") ;
      message.appendString (optionFormat + "\", ") ;
      message.appendCString ("\"columns\" should be an decimal unsigned number") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_HERE) ;
    }else{
      const uint32_t columns = components (2 COMMA_HERE).unsignedIntegerValue () ;
      const String prefix = components (3 COMMA_HERE) ;
      const String postfix = components (4 COMMA_HERE) ;
      const String identifier = components (0 COMMA_HERE) + ":" + components (1 COMMA_HERE) ;
      GenericUniqueArray <String> nameList ;
      bool found = false ;
      getKeywordListForIdentifier (identifier, found, nameList) ;
      if (!found) {
        String message = "invalid option ; in \"--" ;
        message.appendString (gOption_galgas_5F_builtin_5F_options_outputKeywordList.mCommandString) ;
        message.appendCString ("=") ;
        message.appendString (optionFormat + "\", ") ;
        message.appendCString ("available values for \"lexique_name:list_name\" are:") ;
        GenericUniqueArray <String> keywordListNames ; getKeywordListNames (keywordListNames) ;
        for (int32_t i=0 ; i<keywordListNames.count () ; i++) {
          message.appendCString ("  - ") ;
          message.appendString (keywordListNames (i COMMA_HERE)) ;
          message.appendNewLine () ;
        }
        inCompiler->onTheFlyRunTimeError (message COMMA_HERE) ;
      }else{
        uint32_t idx = 0 ;
        String s ;
        for (int32_t i=0 ; i<nameList.count() ; i++) {
          s.appendCString ("  ") ;
          s.appendString (prefix) ;
          s.appendString (nameList (i COMMA_HERE)) ;
          s.appendString (postfix) ;
          s.appendCString ("  ") ;
          idx += 1 ;
          if (idx < columns) {
            s.appendCString ("&") ;
          }else{
            s.appendCString (" \\\\\n") ;
            idx = 0 ;
          }
        }
        if (idx > 0) {
          for (uint32_t i = idx+1 ; i<columns ; i++) {
            s.appendCString ("  &  ") ;
          }
          s.appendCString ("  \\\\\n") ;
        }
        const String path = components (5 COMMA_HERE) ;
        FileManager::writeStringToFile (s, path) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

