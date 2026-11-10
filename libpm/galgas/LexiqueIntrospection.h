//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2016, ..., 2023 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "String-class.h"

//--------------------------------------------------------------------------------------------------

typedef void (* Type_appendKeywordListNames) (GenericUniqueArray <String> & ioList) ;

typedef void (* Type_getKeywordsForIdentifier) (const String & inIdentifier,
                                                bool & ioFound,
                                                GenericUniqueArray <String> & ioList) ;

//--------------------------------------------------------------------------------------------------

class LexiqueIntrospection final {
//--- Constructor
  public: LexiqueIntrospection (Type_appendKeywordListNames appendKeywordListNames,
                                Type_getKeywordsForIdentifier getKeywordsForIdentifier) ;

//--- Accessors
  public: static void getKeywordListNames (GenericUniqueArray <String> & outList) ;
  public: static void getKeywordListForIdentifier (const String & inIdentifier,
                                                   bool & outFound,
                                                   GenericUniqueArray <String> & outList) ;

  public: static void handleGetKeywordListOption (class Compiler * inCompiler) ;

//--- No copy
  private: LexiqueIntrospection (const LexiqueIntrospection &) = delete ;
  private: LexiqueIntrospection & operator = (const LexiqueIntrospection &) = delete ;

//--- Private member
  private: LexiqueIntrospection * mNext ;
  private: Type_appendKeywordListNames mAppendKeywordListNames ;
  private: Type_getKeywordsForIdentifier mGetKeywordsForIdentifier ;
} ;

//--------------------------------------------------------------------------------------------------
