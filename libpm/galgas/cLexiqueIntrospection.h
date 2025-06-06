//--------------------------------------------------------------------------------------------------
//
//  Lexique introspection                                                                        
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2016, ..., 2023 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "String-class.h"

//--------------------------------------------------------------------------------------------------

typedef void (* Type_appendKeywordListNames) (TC_UniqueArray <String> & ioList) ;

typedef void (* Type_getKeywordsForIdentifier) (const String & inIdentifier,
                                                bool & ioFound,
                                                TC_UniqueArray <String> & ioList) ;

//--------------------------------------------------------------------------------------------------

class cLexiqueIntrospection final {
//--- Constructor
  public: cLexiqueIntrospection (Type_appendKeywordListNames appendKeywordListNames,
                                 Type_getKeywordsForIdentifier getKeywordsForIdentifier) ;

//--- Accessors
  public: static void getKeywordListNames (TC_UniqueArray <String> & outList) ;
  public: static void getKeywordListForIdentifier (const String & inIdentifier,
                                                   bool & outFound,
                                                   TC_UniqueArray <String> & outList) ;

  public: static void handleGetKeywordListOption (class Compiler * inCompiler) ;

//--- No copy
  private: cLexiqueIntrospection (const cLexiqueIntrospection &) = delete ;
  private: cLexiqueIntrospection & operator = (const cLexiqueIntrospection &) = delete ;

//--- Private member
  private: cLexiqueIntrospection * mNext ;
  private: Type_appendKeywordListNames mAppendKeywordListNames ;
  private: Type_getKeywordsForIdentifier mGetKeywordsForIdentifier ;
} ;

//--------------------------------------------------------------------------------------------------
