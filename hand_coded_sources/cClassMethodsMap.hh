//---------------------------------------------------------------------------*
//                                                                           *
//                     Tables generiques de methodes                         *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  La table generique 'cClassMethodsMap' realise :                          *
//     - l'insertion des symboles, avec declenchement d'erreur si le symbole *
//       est deja dans la table ; l'ordre d'insertion est memorise dans une  *
//       liste chainee ;                                                     * 
//     - la recherche des symbole, avec declenchement d'erreur si le symbole *
//       n'est pas dans la table ;                                           *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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

#ifndef IMPLEMENTATION_TABLE_METHODES_UTILISABLES_DEFINIE
#define IMPLEMENTATION_TABLE_METHODES_UTILISABLES_DEFINIE

//---------------------------------------------------------------------------*

#include "cClassMethodsMap.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe element table 'cElementTableMethodesUtilisables'            *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableMethodesUtilisables <INFO>
                 ::cElementTableMethodesUtilisables (const INFO & info,
                                                     const GGS_lstring & clef,
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

template <typename INFO> cElementTableMethodesUtilisables <INFO>::~cElementTableMethodesUtilisables (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cClassMethodsMap'                              *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO>
cClassMethodsMap <INFO>::cClassMethodsMap (void) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cClassMethodsMap <INFO>::cClassMethodsMap (const cClassMethodsMap <INFO> & source) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
  *this = source ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cClassMethodsMap <INFO>::
operator = (const cClassMethodsMap <INFO> & source) {
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

template <typename INFO> cClassMethodsMap <INFO>::~cClassMethodsMap (void) {
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cClassMethodsMap <INFO>::build (void) {
  drop_operation () ;
  macroMyNew (mReferenceCountPtr, sint32 (1)) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cClassMethodsMap <INFO>::drop_operation (void) {
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

template <typename INFO>
void cClassMethodsMap <INFO>::insulateMap (void) {
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
      macroMyNew (mReferenceCountPtr, sint32 (1)) ;
      cElementTableMethodesUtilisables <INFO> * p = mFirstItem ;
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

template <typename INFO>
sint32 cClassMethodsMap <INFO>::insertAbstract (C_Lexique & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurInsertion
                                          COMMA_LOCATION_ARGS) {
  sint32 numeroElement = -1 ;
  if (mReferenceCountPtr != NULL) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Realiser l'insertion
    numeroElement = internalInsert (info, clef, true, mRoot) ;
  //--- Erreur d'insertion : la clef existe deja
    if (numeroElement < 0) {
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurInsertion, clef COMMA_THERE) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cClassMethodsMap <INFO>::insertNotAbstract (C_Lexique & inInputOutput,
                                          const INFO & info,
                                          const GGS_lstring & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurInsertion
                                          COMMA_LOCATION_ARGS) {
  sint32 numeroElement = -1 ;
  if (mReferenceCountPtr != NULL) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Realiser l'insertion
    numeroElement = internalInsert (info, clef, false, mRoot) ;
  //--- Erreur d'insertion : la clef existe deja
    if (numeroElement < 0) {
      inLocation.oldStyleSemanticErrorForGenericMap (inInputOutput, messageErreurInsertion, clef COMMA_THERE) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cClassMethodsMap <INFO>::internalInsert (const INFO & info,
                                           const GGS_lstring & clef,
                                           const bool estAbstraite,
                                           cElementTableMethodesUtilisables <INFO> * & racine) {
  sint32 numeroElement = -1 ;
  if (racine == NULL) {
    #define macroTemporaire cElementTableMethodesUtilisables <INFO> (info, clef, mListLength, estAbstraite)
    // macroTemporaire : astuce pour pallier l'erreur d'expansion qui considere la virgule entre INFO et
    // KEY comme un separateur entre un deuxieme et un troisieme argument
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

template <typename INFO>
cElementTableMethodesUtilisables <INFO> * cClassMethodsMap <INFO>::
searchKey (C_Lexique & inLexique,
           const GGS_lstring & inKey,
           const GGS_location & inLocation,
           const char * inSearchErrorMessage
           COMMA_LOCATION_ARGS) {
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
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, inSearchErrorMessage, inKey COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableMethodesUtilisables <INFO> * cClassMethodsMap <INFO>::
searchForOverride (C_Lexique & inLexique,
                   const GGS_lstring & inKey,
                   const GGS_location & inLocation,
                   const char * inSearchErrorMessage
                   COMMA_LOCATION_ARGS) {
  element_type * result = (element_type *) NULL ;
  if (isBuilt () && inKey.isBuilt ()) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
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
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, inSearchErrorMessage, inKey COMMA_THERE) ;
    }else{
      macroValidPointer (result) ;
      result->champEstAbstraite = false ; // La methode n'est plus abstraite
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cClassMethodsMap <INFO>::epilogue_definitionClasseNonAbstraite (C_Lexique & lexique COMMA_LOCATION_ARGS) {
  cElementTableMethodesUtilisables <INFO> * p = mFirstItem ;
  while (p != NULL) {
    macroValidPointer (p) ;
    if (p->champEstAbstraite) {
      C_String message ;
      message << "la methode abstraite '" << p->mKey << "' n'a pas ete surchargee" ;
      lexique.onTheFlySemanticError (message COMMA_THERE) ;
    }
    p = p->mNextItem ;
  }
}
  
//---------------------------------------------------------------------------*

#endif
