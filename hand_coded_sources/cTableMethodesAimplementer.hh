//---------------------------------------------------------------------------*
//                                                                           *
//                     Tables génériques de méthodes                         *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  La table générique 'cTableMethodesAimplementer' réalise :                *
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

#ifndef IMPLEMENTATION_TABLE_METHODES_A_IMPLEMENTER_DEFINIE
#define IMPLEMENTATION_TABLE_METHODES_A_IMPLEMENTER_DEFINIE

//---------------------------------------------------------------------------*

#include "cTableMethodesAimplementer.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe élément table 'cElementTableMethodesAimplementer'            *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableMethodesAimplementer <INFO, KEY>
                 ::cElementTableMethodesAimplementer (const INFO & info,
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

template <typename INFO, typename KEY>
cElementTableMethodesAimplementer <INFO, KEY>::~cElementTableMethodesAimplementer (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cTableMethodesAimplementer <INFO, KEY>::cTableMethodesAimplementer (void) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cTableMethodesAimplementer <INFO, KEY>::~cTableMethodesAimplementer (void) {
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cTableMethodesAimplementer <INFO, KEY>
            ::cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO, KEY> & source) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
  *this = source ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cTableMethodesAimplementer <INFO, KEY>
            ::operator = (const cTableMethodesAimplementer <INFO, KEY> & source) {
  if (this != & source) {
    drop_operation () ;
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

template <typename INFO, typename KEY> void cTableMethodesAimplementer <INFO, KEY>::drop_operation (void) {
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
cTableMethodesAimplementer <INFO, KEY> cTableMethodesAimplementer <INFO, KEY>::
constructor_empty (void) {
  cTableMethodesAimplementer <INFO, KEY> result ;
  macroMyNew (result.mReferenceCountPtr, sint32 (1)) ;
  return result ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> void cTableMethodesAimplementer <INFO, KEY>::insulateMap (void) {
//--- Si la table est referencee plusieurs fois, la dupliquer
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
      macroMyNew (mReferenceCountPtr, sint32 (1)) ;
      cElementTableMethodesAimplementer <INFO, KEY> * p = mFirstItem ;
      mLastItem = (element_type *) NULL ;
      mFirstItem = (element_type *) NULL ;
      mRoot = (element_type *) NULL ;
      mListLength = 0 ;
      while (p != NULL) {
        macroValidPointer (p) ;
        sint32 numeroElement ;
        internalInsert (p->mInfo, p->mKey, numeroElement, p->champEstAbstraite, mRoot) ;
        p = p->mNextItem ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cTableMethodesAimplementer <INFO, KEY>::insertAbstract (C_lexique & inLexique,
                                          const INFO & info,
                                          const KEY & clef,
                                         const GGS_location & inLocation,
                                          const char * messageErreurInsertion) {
  sint32 numeroElement = -1 ;
  if (isBuilt ()) {
  //--- Si la table est référencée plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Réaliser l'insertion
    internalInsert (info, clef, numeroElement, true, mRoot) ;
  //--- Erreur d'insertion : la clef existe déjà
    if (numeroElement < 0) {
      inLocation.semanticErrorForMap (inLexique, messageErreurInsertion, clef) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cTableMethodesAimplementer <INFO, KEY>::insertNotAbstract (C_lexique & inLexique,
                                          const INFO & info,
                                          const KEY & clef,
                                         const GGS_location & inLocation,
                                          const char * messageErreurInsertion) {
  sint32 numeroElement = -1 ;
  if (isBuilt ()) {
  //--- Si la table est référencée plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Réaliser l'insertion
    internalInsert (info, clef, numeroElement, false, mRoot) ;
  //--- Erreur d'insertion : la clef existe déjà
    if (numeroElement < 0) {
      inLocation.semanticErrorForMap (inLexique, messageErreurInsertion, clef) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cTableMethodesAimplementer <INFO, KEY>::internalInsert (const INFO & info,
                                                              const KEY & clef,
                                                           sint32 & numeroElement,
                                                        const bool estAbstraite,
                      cElementTableMethodesAimplementer <INFO, KEY> * & racine) {
  if (racine == NULL) {
    #define macroTemporaire cElementTableMethodesAimplementer <INFO, KEY> (info, clef, mListLength, estAbstraite)
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
      internalInsert (info, clef, numeroElement, estAbstraite, racine->mInfPtr) ;
    }else if (comparaison < 0) {
      internalInsert (info, clef, numeroElement, estAbstraite, racine->mSupPtr) ;
    }else{
      numeroElement = -1 ;
    }
  }
}

//---------------------------------------------------------------------------*

#endif
