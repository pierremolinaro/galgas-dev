//---------------------------------------------------------------------------*
//                                                                           *
//                     Tables génériques de méthodes                         *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  La table générique 'cClassMethodsMap' réalise :                          *
//     - l'insertion des symboles, avec déclenchement d'erreur si le symbole *
//       est déjà dans la table ; l'ordre d'insertion est mémorisé dans une  *
//       liste chaînée ;                                                     * 
//     - la recherche des symbole, avec déclenchement d'erreur si le symbole *
//       n'est pas dans la table ;                                           *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
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

#ifndef IMPLEMENTATION_TABLE_METHODES_UTILISABLES_DEFINIE
#define IMPLEMENTATION_TABLE_METHODES_UTILISABLES_DEFINIE

//---------------------------------------------------------------------------*

#include "cClassMethodsMap.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe élément table 'cElementTableMethodesUtilisables'            *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableMethodesUtilisables <INFO, KEY>
                 ::cElementTableMethodesUtilisables (const INFO & info,
                                                     const KEY & clef,
                                                     const sint32 numeroElement,
                                                     const bool estAbstraite)
:champEstAbstraite (estAbstraite), mEntryIndex (numeroElement) {
  mNextItem = (element_type *) NULL ;
  mInfPtr = (element_type *) NULL ;
  mSupPtr = (element_type *) NULL ;
  mKey = clef ;
  mInfo = info ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> cElementTableMethodesUtilisables <INFO, KEY>::~cElementTableMethodesUtilisables (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cClassMethodsMap'                              *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cClassMethodsMap <INFO, KEY>::cClassMethodsMap (void) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cClassMethodsMap <INFO, KEY>::cClassMethodsMap (const cClassMethodsMap <INFO, KEY> & source) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
  *this = source ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cClassMethodsMap <INFO, KEY>
             ::operator = (const cClassMethodsMap <INFO, KEY> & source) {
  if (this != & source) {
    mRoot = source.mRoot ;
    mFirstItem = source.mFirstItem ;
    mLastItem = source.mLastItem ;
    mListLength = source.mListLength ;
    mReferenceCountPtr = source.mReferenceCountPtr ;
    if (mReferenceCountPtr != NULL) {
      macroValidPointer (mReferenceCountPtr) ;
      (*mReferenceCountPtr) ++ ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> cClassMethodsMap <INFO, KEY>::~cClassMethodsMap (void) {
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cClassMethodsMap <INFO, KEY>::drop_operation (void) {
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) == 1) {
      macroMyDelete (mRoot, element_type) ;
      macroMyDelete (mReferenceCountPtr, sint32) ;
    }else{
      mRoot = (element_type *) NULL ;
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'new' constructor                                                  *
//                                                                           *
//---------------------------------------------------------------------------*

template <class INFO, class KEY>
cClassMethodsMap <INFO, KEY> cClassMethodsMap <INFO, KEY>::
constructor_empty (void) {
  cClassMethodsMap <INFO, KEY> result ;
  macroMyNew (result.mReferenceCountPtr, sint32 (1)) ;
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cClassMethodsMap <INFO, KEY>::insulateMap (void) {
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
      macroMyNew (mReferenceCountPtr, sint32 (1)) ;
      cElementTableMethodesUtilisables <INFO, KEY> * p = mFirstItem ;
      mLastItem = (element_type *) NULL ;
      mFirstItem = (element_type *) NULL ;
      mRoot = (element_type *) NULL ;
      mListLength = 0 ;
      while (p != NULL) {
        macroValidPointer (p) ;
        internalInsert (p->mInfo, p->mKey, p->champEstAbstraite, mRoot) ;
        p = p->mNextItem ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cClassMethodsMap <INFO, KEY>::insertAbstract (C_lexique & inLexique,
                                          const INFO & info,
                                          const KEY & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurInsertion) {
  sint32 numeroElement = -1 ;
  if (mReferenceCountPtr != NULL) {
  //--- Si la table est référencée plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Réaliser l'insertion
    numeroElement = internalInsert (info, clef, true, mRoot) ;
  //--- Erreur d'insertion : la clef existe déjà
    if (numeroElement < 0) {
      inLocation.semanticErrorForMap (inLexique, messageErreurInsertion, clef) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cClassMethodsMap <INFO, KEY>::insertNotAbstract (C_lexique & inInputOutput,
                                          const INFO & info,
                                          const KEY & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurInsertion) {
  sint32 numeroElement = -1 ;
  if (mReferenceCountPtr != NULL) {
  //--- Si la table est référencée plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Réaliser l'insertion
    numeroElement = internalInsert (info, clef, false, mRoot) ;
  //--- Erreur d'insertion : la clef existe déjà
    if (numeroElement < 0) {
      inLocation.semanticErrorForMap (inInputOutput, messageErreurInsertion, clef) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cClassMethodsMap <INFO, KEY>::internalInsert (const INFO & info,
                                           const KEY & clef,
                                           const bool estAbstraite,
                                           cElementTableMethodesUtilisables <INFO, KEY> * & racine) {
  sint32 numeroElement = -1 ;
  if (racine == NULL) {
    #define macroTemporaire cElementTableMethodesUtilisables <INFO, KEY> (info, clef, mListLength, estAbstraite)
    // macroTemporaire : astuce pour pallier l'erreur d'expansion qui considère la virgule entre INFO et
    // KEY comme un séparateur entre un deuxième et un troisième argument
    macroMyNew (racine, macroTemporaire) ;
    #undef macroTemporaire
    if (mLastItem == NULL) {
      mFirstItem = racine ;
    }else{
      macroValidPointer (mLastItem) ;
      mLastItem->mNextItem = racine ;
    }
    mLastItem = racine ;
    numeroElement = mListLength ;
    mListLength ++ ;
  }else{
    macroValidPointer (racine) ;
    const sint32 comparaison = racine->mKey.compareStringByLength (clef) ;
    if (comparaison > 0) {
      numeroElement = internalInsert (info, clef, estAbstraite, racine->mInfPtr) ;
    }else if (comparaison < 0) {
      numeroElement = internalInsert (info, clef, estAbstraite, racine->mSupPtr) ;
    }else{
      numeroElement = -1 ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableMethodesUtilisables <INFO, KEY> * cClassMethodsMap <INFO, KEY>::
searchKey (C_lexique & inLexique,
           const KEY & inKey,
           const GGS_location & inLocation,
           const char * inSearchErrorMessage) {
  element_type * result = (element_type *) NULL ;
  if (isBuilt () && inKey.isBuilt ()) {
    result = mRoot ;
    bool found = false ;
    while ((result != NULL) && ! found) {
      macroValidPointer (result) ;
      const sint32 comparison = result->mKey.compareStringByLength (inKey) ;
      if (comparison > 0) {
        result = result->mInfPtr ;
      }else if (comparison < 0) {
        result = result->mSupPtr ;
      }else{
        found = true ;
      }
    }
    if (result == NULL) { // Rechercher une occurrence '%%', afin de la remplacer par la clef
      inLocation.semanticErrorForMap (inLexique, inSearchErrorMessage, inKey) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableMethodesUtilisables <INFO, KEY> * cClassMethodsMap <INFO, KEY>::
searchForOverride (C_lexique & inLexique,
                   const KEY & inKey,
                   const GGS_location & inLocation,
                   const char * inSearchErrorMessage) {
  element_type * result = (element_type *) NULL ;
  if (isBuilt () && inKey.isBuilt ()) {
  //--- Si la table est référencée plusieurs fois, la dupliquer
    insulateMap () ;
    result = mRoot ;
    bool found = false ;
    while ((result != NULL) && ! found) {
      macroValidPointer (result) ;
      const sint32 comparison = result->mKey.compareStringByLength (inKey) ;
      if (comparison > 0) {
        result = result->mInfPtr ;
      }else if (comparison < 0) {
        result = result->mSupPtr ;
      }else{
        found = true ;
      }
    }
    if (result == NULL) { // Rechercher une occurrence '%%', afin de la remplacer par la clef
      inLocation.semanticErrorForMap (inLexique, inSearchErrorMessage, inKey) ;
    }else{
      macroValidPointer (result) ;
      result->champEstAbstraite = false ; // La méthode n'est plus abstraite
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cClassMethodsMap <INFO, KEY>::epilogue_definitionClasseNonAbstraite (C_lexique & lexique) {
  cElementTableMethodesUtilisables <INFO, KEY> * p = mFirstItem ;
  while (p != NULL) {
    macroValidPointer (p) ;
    if (p->champEstAbstraite) {
      C_string message ;
      message << "la méthode abstraite '" << p->mKey << "' n'a pas été surchargée" ;
      lexique.onTheFlySemanticError (message) ;
    }
    p = p->mNextItem ;
  }
}
  
//---------------------------------------------------------------------------*

#endif
