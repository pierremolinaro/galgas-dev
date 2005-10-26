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

template <typename INFO>
cElementTableMethodesAimplementer <INFO>
                 ::cElementTableMethodesAimplementer (const INFO & info,
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

template <typename INFO>
cElementTableMethodesAimplementer <INFO>::~cElementTableMethodesAimplementer (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>::cTableMethodesAimplementer (void) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>::~cTableMethodesAimplementer (void) {
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>
            ::cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO> & source) {
  mRoot = (element_type *) NULL ;
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  mReferenceCountPtr = (sint32 *) NULL ;
  *this = source ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cTableMethodesAimplementer <INFO>
            ::operator = (const cTableMethodesAimplementer <INFO> & source) {
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

template <typename INFO> void cTableMethodesAimplementer <INFO>::drop_operation (void) {
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
void cTableMethodesAimplementer <INFO>::build (void) {
  drop_operation () ;
  macroMyNew (mReferenceCountPtr, sint32 (1)) ;
}


//---------------------------------------------------------------------------*

template <typename INFO> void cTableMethodesAimplementer <INFO>::insulateMap (void) {
//--- Si la table est referencee plusieurs fois, la dupliquer
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
      macroMyNew (mReferenceCountPtr, sint32 (1)) ;
      cElementTableMethodesAimplementer <INFO> * p = mFirstItem ;
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

template <typename INFO>
sint32 cTableMethodesAimplementer <INFO>::insertAbstract (C_Lexique & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
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

template <typename INFO>
sint32 cTableMethodesAimplementer <INFO>::insertNotAbstract (C_Lexique & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
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

template <typename INFO>
void cTableMethodesAimplementer <INFO>::internalInsert (const INFO & info,
                                                              const GGS_lstring & clef,
                                                           sint32 & numeroElement,
                                                        const bool estAbstraite,
                      cElementTableMethodesAimplementer <INFO> * & racine) {
  if (racine == NULL) {
    #define macroTemporaire cElementTableMethodesAimplementer <INFO> (info, clef, mListLength, estAbstraite)
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
