//---------------------------------------------------------------------------*
//                                                                           *
//                     Tables generiques de methodes                         *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  La table generique 'cTableMethodesAimplementer' realise :                *
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

#ifndef IMPLEMENTATION_TABLE_METHODES_A_IMPLEMENTER_DEFINIE
#define IMPLEMENTATION_TABLE_METHODES_A_IMPLEMENTER_DEFINIE

//---------------------------------------------------------------------------*

#include "cTableMethodesAimplementer.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe element table 'cElementTableMethodesAimplementer'           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableMethodesAimplementer <INFO>::
cElementTableMethodesAimplementer (const INFO & info,
                                   const GGS_lstring & clef,
                                   const PMSInt32 numeroElement,
                                   const bool estAbstraite) :
mNextItem (NULL),
mInfPtr (NULL),
mSupPtr (NULL),
mKey (clef),
mInfo (info),
champEstAbstraite (estAbstraite),
mEntryIndex (numeroElement) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableMethodesAimplementer <INFO>::~cElementTableMethodesAimplementer (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>::cTableMethodesAimplementer (void) :
mRoot (NULL),
mFirstItem (NULL),
mLastItem (NULL),
mListLength (0),
mReferenceCountPtr (NULL) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>::~cTableMethodesAimplementer (void) {
  drop () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO>::
cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO> & source) :
mRoot (NULL),
mFirstItem (NULL),
mLastItem (NULL),
mListLength (0),
mReferenceCountPtr (NULL) {
  *this = source ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cTableMethodesAimplementer <INFO> & cTableMethodesAimplementer <INFO>::
operator = (const cTableMethodesAimplementer <INFO> & source) {
  if (this != & source) {
    drop () ;
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
  return * this ;
}

//---------------------------------------------------------------------------*

template <typename INFO> void cTableMethodesAimplementer <INFO>::drop (void) {
  mFirstItem = (cElement *) NULL ;
  mLastItem = (cElement *) NULL ;
  mListLength = 0 ;
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) == 1) {
      macroMyDelete (mRoot) ;
      macroMyDelete (mReferenceCountPtr) ;
    }else{
      mRoot = (cElement *) NULL ;
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (PMSInt32 *) NULL ;
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
  drop () ;
  macroMyNew (mReferenceCountPtr, PMSInt32 (1)) ;
}


//---------------------------------------------------------------------------*

template <typename INFO> void cTableMethodesAimplementer <INFO>::insulateMap (void) {
//--- Si la table est referencee plusieurs fois, la dupliquer
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (PMSInt32 *) NULL ;
      macroMyNew (mReferenceCountPtr, PMSInt32 (1)) ;
      cElementTableMethodesAimplementer <INFO> * p = mFirstItem ;
      mLastItem = (cElement *) NULL ;
      mFirstItem = (cElement *) NULL ;
      mRoot = (cElement *) NULL ;
      mListLength = 0 ;
      while (p != NULL) {
        macroValidPointer (p) ;
        PMSInt32 numeroElement ;
        internalRecursiveInsert (p->mInfo, p->mKey, numeroElement, p->champEstAbstraite, mRoot) ;
        p = p->mNextItem ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cTableMethodesAimplementer <INFO>::insertAbstract (C_Compiler & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                          const char * messageErreurInsertion
                                          COMMA_LOCATION_ARGS) {
  PMSInt32 numeroElement = -1 ;
  if (isBuilt ()) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Realiser l'insertion
    internalRecursiveInsert (info, clef, numeroElement, true, mRoot) ;
  //--- Erreur d'insertion : la clef existe deja
    if (numeroElement < 0) {
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurInsertion, clef COMMA_THERE) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cTableMethodesAimplementer <INFO>::insertNotAbstract (C_Compiler & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                          const char * messageErreurInsertion
                                          COMMA_LOCATION_ARGS) {
  PMSInt32 numeroElement = -1 ;
  if (isBuilt ()) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Realiser l'insertion
    internalRecursiveInsert (info, clef, numeroElement, false, mRoot) ;
  //--- Erreur d'insertion : la clef existe deja
    if (numeroElement < 0) {
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurInsertion, clef COMMA_THERE) ;
    }
  }
  return numeroElement ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cTableMethodesAimplementer <INFO>::internalRecursiveInsert (const INFO & info,
                                                              const GGS_lstring & clef,
                                                           PMSInt32 & numeroElement,
                                                        const bool estAbstraite,
                      cElementTableMethodesAimplementer <INFO> * & racine) {
  if (racine == NULL) {
    #define macroTemporaire cElementTableMethodesAimplementer <INFO> (info, clef, mListLength, estAbstraite)
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
    const PMSInt32 comparaison = racine->mKey.compareStringByLength (clef) ;
    if (comparaison > 0) {
      internalRecursiveInsert (info, clef, numeroElement, estAbstraite, racine->mInfPtr) ;
    }else if (comparaison < 0) {
      internalRecursiveInsert (info, clef, numeroElement, estAbstraite, racine->mSupPtr) ;
    }else{
      numeroElement = -1 ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
bool cTableMethodesAimplementer <INFO>::isBuilt (void) const {
  return mReferenceCountPtr != NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cTableMethodesAimplementer <INFO>::count (void) const {
  return mListLength ;
}

//---------------------------------------------------------------------------*

#endif
