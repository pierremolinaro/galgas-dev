//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Lexique introspection                                                                                              *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2016, ..., 2016 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*

static cLexiqueIntrospection * gLexiqueIntrospectionRoot = NULL ;

//---------------------------------------------------------------------------------------------------------------------*

cLexiqueIntrospection::cLexiqueIntrospection (void (*appendKeywordListNames) (TC_UniqueArray <C_String> & ioList),
                                              Type_getKeywordsForIdentifier getKeywordsForIdentifier) :
mNext (gLexiqueIntrospectionRoot),
mAppendKeywordListNames (appendKeywordListNames),
mGetKeywordsForIdentifier (getKeywordsForIdentifier) {
  gLexiqueIntrospectionRoot = this ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cLexiqueIntrospection::getKeywordListNames (TC_UniqueArray <C_String> & outList) {
  outList.setCountToZero () ;
  cLexiqueIntrospection * p = gLexiqueIntrospectionRoot ;
  while (NULL != p) {
    p->mAppendKeywordListNames (outList) ;
    p = p->mNext ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cLexiqueIntrospection::getKeywordListForIdentifier (const C_String & inIdentifier,
                                                         bool & outFound,
                                                         TC_UniqueArray <C_String> & outList) {
  outFound = false ;
  outList.setCountToZero () ;
  cLexiqueIntrospection * p = gLexiqueIntrospectionRoot ;
  while ((NULL != p) && !outFound) {
    p->mGetKeywordsForIdentifier (inIdentifier, outFound, outList) ;
    p = p->mNext ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
