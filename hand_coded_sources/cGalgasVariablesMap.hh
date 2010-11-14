//---------------------------------------------------------------------------*
//                                                                           *
//  Generic map used for GALGAS variables (handles read/write access)        *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
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

#ifndef IMPLEMENTATION_TABLE_AVEC_CONTROLE_PHASE_DEFINIE
#define IMPLEMENTATION_TABLE_AVEC_CONTROLE_PHASE_DEFINIE

//---------------------------------------------------------------------------*

#include <stdlib.h>

#include "utilities/MF_MemoryControl.h"
#include "galgas_cli_options.h"
#include "cGalgasVariablesMap.h"

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO>::
cElementTableControlePhase (const INFO & inInfo,
                            const enumNatureEntite nature,
                            const enumEtatVariable etat,
                            const GGS_lstring & clef,
                            const PMSInt32 numeroElement,
                            const bool inIsDeclaredUnused,
                            const bool inUsed) :
mInfPtr (NULL),
mSupPtr (NULL),
mKey (clef),
mInfo (inInfo),
mEntryIndex (numeroElement),
champChainageEtat (NULL),
mBalance (0),
champNature (nature),
champEtat (etat),
champUtilise (inUsed),
mIsDeclaredUnused (inIsDeclaredUnused) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO>::
~cElementTableControlePhase (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
  macroVoidPointer (champChainageEtat) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::cGalgasVariablesMap (void) :
mRoot (NULL),
aListeSurcharges (NULL),
mListLength (0) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::
~cGalgasVariablesMap (void) {
  drop () ;
  macroVoidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::build (void) {
  drop () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::drop (void) {
  mListLength = 0 ;
  macroMyDelete (mRoot) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
GGS_bool cGalgasVariablesMap <INFO>::
reader_hasKey (const GGS_string & inKey) const {
  const bool allBuilt = isBuilt () && inKey.isBuilt() ;
  bool found = false ;
  if (allBuilt) {
    cElement * current = mRoot ;
    while ((current != NULL) && ! found) {
      macroValidPointer (current) ;
      const PMSInt32 comparaison = current->mKey.string ().compareStringByLength (inKey.string ()) ;
      if (comparaison > 0) {
        current = current->mInfPtr ;
      }else if (comparaison < 0) {
        current = current->mSupPtr ;
      }else{
        found = true ;
      }
    }
  }
  return GGS_bool (allBuilt, found) ; 
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO> & cGalgasVariablesMap <INFO>::
operator = (const cGalgasVariablesMap <INFO> & inOperand) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
  drop () ;
  return * this ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::
cGalgasVariablesMap (const cGalgasVariablesMap <INFO> & inOperand) :
mRoot (NULL),
aListeSurcharges (NULL),
mListLength (0) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::rotateLeft (cElement * & a) {
// faire la rotation 
  cElement * b = a->mSupPtr ;
  a->mSupPtr = b->mInfPtr ;
  b->mInfPtr = a;

// recalculer l'equilibrage 
  if (b->mBalance >= 0) {
    a->mBalance++ ;
  }else{
    a->mBalance += 1 - b->mBalance ;
  }
  if (a->mBalance > 0) {
    b->mBalance += a->mBalance + 1 ;
  }else{
    b->mBalance++ ;
  }
  a = b ;
} 

//---------------------------------------------------------------------

template <typename INFO>
void cGalgasVariablesMap <INFO>::rotateRight (cElement * & a) {
// faire la rotation 
  cElement * b = a->mInfPtr ;
  a->mInfPtr = b->mSupPtr ;
  b->mSupPtr = a ;
 
// recalculer l'equilibrage 
  if (b->mBalance > 0) {
    a->mBalance += -b->mBalance - 1 ;
  }else{
    a->mBalance-- ;
  } ;
  if (a->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += a->mBalance - 1 ;
  }
  a = b ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertInArgument (C_CompilerEx & inLexique,
                  const INFO & inInfo,
                  const GGS_lstring & clef,
                  const GGS_location & inLocation,
                  const char * messageErreurInsertion
                  COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreIn, etatValue, false, false, clef, inLocation, messageErreurInsertion,
                    false COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUnusedInArgument (C_CompilerEx & inLexique,
                        const INFO & inInfo,
                        const GGS_lstring & clef,
                        const GGS_location & inLocation,
                        const char * messageErreurInsertion
                        COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreIn, etatValue, true, false, clef, inLocation, messageErreurInsertion,
                    false COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertInOutArgument (C_CompilerEx & inLexique,
                     const INFO & inInfo,
                     const GGS_lstring & clef,
                     const GGS_location & inLocation,
                     const char * messageErreurInsertion
                     COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, false, false, clef, inLocation, messageErreurInsertion,
                    false COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUsedInOutArgument (C_CompilerEx & inLexique,
                         const INFO & inInfo,
                         const GGS_lstring & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurInsertion
                         COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, false, true, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUnusedInOutArgument (C_CompilerEx & inLexique,
                           const INFO & inInfo,
                           const GGS_lstring & clef,
                           const GGS_location & inLocation,
                           const char * messageErreurInsertion
                           COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, true, false, clef, inLocation, messageErreurInsertion,
                    false COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertOutArgument (C_CompilerEx & inLexique,
                   const INFO & inInfo,
                   const GGS_lstring & clef,
                   const GGS_location & inLocation,
                   const char * messageErreurInsertion
                   COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreOut, etatNonValue, false, false,
                    clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertWithInstructionLocalVariable (C_CompilerEx & inLexique,
                                    const INFO & inInfo,
                                    const GGS_lstring & clef,
                                    const GGS_location & inLocation,
                                    const char * messageErreurInsertion
                                    COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, false, true,
                    clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertLocalVariable (C_CompilerEx & inLexique,
                     const INFO & inInfo,
                     const GGS_lstring & clef,
                     const GGS_location & inLocation,
                     const char * messageErreurInsertion
                     COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumVariableLocale, etatNonValue, false, false, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertConstInArgument (C_CompilerEx & inLexique,
                       const INFO & inInfo,
                       const GGS_lstring & clef,
                       const GGS_location & inLocation,
                       const char * messageErreurInsertion
                       COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, false, false, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUsedConstInArgument (C_CompilerEx & inLexique,
                           const INFO & inInfo,
                           const GGS_lstring & clef,
                           const GGS_location & inLocation,
                           const char * messageErreurInsertion
                           COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, false, true, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUsedConstInArgumentNoShadow (C_CompilerEx & inLexique,
                           const INFO & inInfo,
                           const GGS_lstring & clef,
                           const GGS_location & inLocation,
                           const char * messageErreurInsertion
                           COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, false, true, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertUnusedConstInArgument (C_CompilerEx & inLexique,
                             const INFO & inInfo,
                             const GGS_lstring & clef,
                             const GGS_location & inLocation,
                             const char * messageErreurInsertion
                             COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, true, false, clef, inLocation, messageErreurInsertion,
                    false
                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::
insertKey (C_CompilerEx & inLexique,
           const INFO & inInfo,
           const enumNatureEntite nature,
           const enumEtatVariable etat,
           const bool inIsDeclaredUnused,
           const bool inUsed,
           const GGS_lstring & inKey,
           const GGS_location & inLocation,
           const char * messageErreurInsertion,
           const bool inSearchForShadow
           COMMA_LOCATION_ARGS) {
  PMSInt32 resultat = -1 ; // Erreur 'insertion incorrecte'
  if (isBuilt () && inKey.isBuilt ()) {
  //--- Warns for shadows ?
    if (inSearchForShadow) {
    //--- Search in overridden maps
      typeSurchargeTable * surchargeCourante = aListeSurcharges ;
      bool found = false ;
      while ((surchargeCourante != NULL) && ! found) {
        macroValidPointer (surchargeCourante) ;
        cElement * result = surchargeCourante->champTable ;
        while ((result != NULL) && ! found) {
          macroValidPointer (result) ;
          const PMSInt32 comparaison = result->mKey.compareStringByLength (inKey) ;
          if (comparaison > 0) {
            result = result->mInfPtr ;
          }else if (comparaison < 0) {
            result = result->mSupPtr ;
          }else{
            found = true ;
          }
        }
        surchargeCourante = surchargeCourante->nextObject () ;
      }
    //--- Warns if found
      if (found) {
        C_String message ;
        message << "The '" << inKey << "' object shadows a previously declared object" ;
        inKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
    }
  //--- Realiser l'insertion
    bool insertionOk = false ;
    bool extension ;
    internalRecursiveInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, inKey, mRoot, extension) ;
    if (insertionOk) {
      resultat = mListLength - 1 ;
    }else{ // Rechercher une occurrence '%%', afin de la remplacer par la clef
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurInsertion, inKey COMMA_THERE) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
internalRecursiveInsert (bool & insertionOk,
                const INFO & inInfo,
                const enumNatureEntite nature,
                const enumEtatVariable etat,
                const bool inIsDeclaredUnused,
                const bool inUsed,
                const GGS_lstring & clef,
                cElement * & racine,
                bool & extension) {
  if (racine == NULL) {
    macroMyNew (racine, cElement (inInfo, nature, etat, clef, mListLength, inIsDeclaredUnused, inUsed)) ;
    mListLength ++ ; 
    insertionOk = true ;
    extension = true ;
  }else{
    macroValidPointer (racine) ;
    const PMSInt32 comparaison = racine->mKey.compareStringByLength (clef) ;
    if (comparaison > 0) {
      internalRecursiveInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, clef, racine->mInfPtr, extension) ;
      if (extension) {
        racine->mBalance++;
        switch (racine->mBalance) {
        case 0:
          extension = false;
          break;
        case 1:
          break;
        case 2:
          if (racine->mInfPtr->mBalance == -1) {
            rotateLeft (racine->mInfPtr) ;
          }
          rotateRight (racine) ;
          extension = false;
          break;
        }
      }
    }else if (comparaison < 0) {
      internalRecursiveInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, clef, racine->mSupPtr, extension) ;
      if (extension) {
        racine->mBalance-- ;
        switch (racine->mBalance) {
        case 0:
          extension = false ;
          break;
        case -1:
          break;
        case -2:
          if (racine->mSupPtr->mBalance == 1) {
            rotateRight (racine->mSupPtr) ;
          }
          rotateLeft (racine) ;
          extension = false;
          break;
        }
      }
    }else{
      insertionOk = false ;
      extension = false ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
chercherInterne (C_CompilerEx & inLexique,
                 cElement * & resultat,
                 const GGS_lstring & clef,
                 const char * messageErreurRecherche
                 COMMA_LOCATION_ARGS) {
  if (clef.isBuilt ()) {
  //--- Chercher d'abord dans la table designee par la racine
    resultat = mRoot ;
    bool found = false ;
    while ((resultat != NULL) && ! found) {
      macroValidPointer (resultat) ;
      const PMSInt32 comparaison = resultat->mKey.compareStringByLength (clef) ;
      if (comparaison > 0) {
        resultat = resultat->mInfPtr ;
      }else if (comparaison < 0) {
        resultat = resultat->mSupPtr ;
      }else{
        found = true ;
      }
    }
  //--- Si pas trouve, search dans les tables surchargees
    typeSurchargeTable * surchargeCourante = aListeSurcharges ;
    while ((resultat == NULL) && (surchargeCourante != NULL)) {
      macroValidPointer (surchargeCourante) ;
      resultat = surchargeCourante->champTable ;
      found = false ;
      while ((resultat != NULL) && ! found) {
        macroValidPointer (resultat) ;
        const PMSInt32 comparaison = resultat->mKey.compareStringByLength (clef) ;
        if (comparaison > 0) {
          resultat = resultat->mInfPtr ;
        }else if (comparaison < 0) {
          resultat = resultat->mSupPtr ;
        }else{
          found = true ;
        }
      }
      surchargeCourante = surchargeCourante->nextObject () ;
    }
  //--- Pas trouve : erreur de recherche
    if (resultat == NULL) {
      clef.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurRecherche, clef COMMA_THERE) ;
    }else if (resultat->mIsDeclaredUnused) {  //--- Check the variable is not declared as unused
      C_String message ;
      message << "The '" << clef << "' entity has been declared as 'unused'" ;
      clef.signalSemanticWarning (inLexique, message COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO> * cGalgasVariablesMap <INFO>::
searchForReadOnlyAccess (C_CompilerEx & inLexique,
                         const GGS_lstring & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurPhase
                         COMMA_LOCATION_ARGS) {
  cElement * resultat = (cElement *) NULL ;
  const char * messageErreurRecherche = "the '%' variable is not declared" ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche COMMA_THERE) ;
  if (resultat != NULL) { // Symbole trouve
    macroValidPointer (resultat) ;
    if (resultat->champEtat == etatValue) {
      resultat->champUtilise = true ;
    }else{
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurPhase, clef COMMA_THERE) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO> * cGalgasVariablesMap <INFO>::
searchForDestructiveReadAccess (C_CompilerEx & inLexique,
                                const GGS_lstring & clef,
                                const GGS_location & inLocation,
                                const char * messageErreurPhase
                                COMMA_LOCATION_ARGS) {
  const char * messageErreurRecherche = "the '%' variable is not declared" ;
  cElement * resultat = (cElement *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche COMMA_THERE) ;
  if (resultat != NULL) { // Symbole trouve
    macroValidPointer (resultat) ;
    if ((resultat->champEtat == etatValue) 
        && (resultat->champNature != enumConstanteLocale)) {
      resultat->champEtat = etatDetruite ;
      resultat->champUtilise = true ;
    }else{
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurPhase, clef COMMA_THERE) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO> * cGalgasVariablesMap <INFO>::
searchForReadWriteAccess (C_CompilerEx & inLexique,
                          const GGS_lstring & clef,
                          const GGS_location & inLocation,
                          const char * messageErreurPhase
                          COMMA_LOCATION_ARGS) {
  const char * messageErreurRecherche = "the '%' variable is not declared" ;
  cElement * resultat = (cElement *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche COMMA_THERE) ;
  if (resultat != NULL) { // Symbole trouve
    macroValidPointer (resultat) ;
    if ((resultat->champEtat == etatValue)
        && (resultat->champNature != enumConstanteLocale)) {
      resultat->champUtilise = true ;
    }else{
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurPhase, clef COMMA_THERE) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO> * cGalgasVariablesMap <INFO>::
searchForWriteAccess (C_CompilerEx & inLexique,
                      const GGS_lstring & clef,
                      const GGS_location & inLocation,
                      const char * messageErreurPhase
                      COMMA_LOCATION_ARGS) {
  const char * messageErreurRecherche = "the '%' variable is not declared" ;
  cElement * resultat = (cElement *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche COMMA_THERE) ;
  if (resultat != NULL) { // Symbole trouve
    macroValidPointer (resultat) ;
    if (resultat->champNature != enumConstanteLocale) {
      resultat->champEtat = etatValue ;
      resultat->champUtilise = true ;
    }else{
/*    if ((resultat->champEtat == etatNonValue) || (resultat->champEtat == etatDetruite)) {
      resultat->champEtat = etatValue ;
      resultat->champUtilise = true ;
    }else{*/
      inLocation.oldStyleSemanticErrorForGenericMap (inLexique, messageErreurPhase, clef COMMA_THERE) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
prologue_verifyVariableUsing (C_CompilerEx & COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
epilogue_verifyVariableUsing (C_CompilerEx & inLexique,
                              const GGS_location & positionErreur
                              COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
verificationRecursiveConsommation (C_CompilerEx & inLexique,
                                   cElement * element,
                                   const GGS_location & positionErreur
                                   COMMA_LOCATION_ARGS) {
  if (element != NULL) {
    macroValidPointer (element) ;
    verificationRecursiveConsommation (inLexique, element->mInfPtr, positionErreur COMMA_THERE) ;
    switch (element->champNature) {
    case enumParametreIn : 
      if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_String message ;
        message << "the '" << element->mKey << "' input argument is not used and has not been declared as 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumVariableLocale :
      break ;
    case enumConstanteLocale : // local constant : only verify a constant not declared as unused is effectivly used
      if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_String message ;
        message << "the '" << element->mKey << "' constant is not used and has not been declared as 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumListOfEntities : // List of entities : doit etre value
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' list of entity instances variable should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }else if (! element->champUtilise) {
        C_String message ;
        message << "the '" << element->mKey << "' list of entity instances variable is not used" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumParametreInOut : // Parametre formel en entree/sorie : doit etre valuee
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' input/output formal parameter should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }else if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_String message ;
        message << "the '" << element->mKey << "' input/output formal parameter is not used and has not been declared as 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumParametreOut : // Parametre formel de sortie : doit etre value
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' output formal parameter should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }
      break ;
    case enumEntityAttribute: // Idem Parametre formel de sortie : doit etre value
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' attribute entity instance should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }
      break ;
    case enumSingleEntity : // Idem Parametre formel de sortie : doit etre value
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' single entity instance should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }
      break ;
    case enumPropertyOut : // Properiete : doit etre value
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "the '" << element->mKey << "' property should be valuated by instruction list" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }
      break ;
    }
    verificationRecursiveConsommation (inLexique, element->mSupPtr, positionErreur COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
remettreVariablesDansEtatInitial (cElement * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    remettreVariablesDansEtatInitial (element->mInfPtr) ;
    switch (element->champNature) {
    case enumParametreIn :  // Parametre formel en entree : doit etre mis a value
      element->champEtat = etatValue ;
      break ;
    case enumVariableLocale : // variable locale : il ne doit pas en avoir
      MF_Assert (false, "Presence d'une variable locale !", 0, 0) ;
      break ;
    case enumConstanteLocale : // constante locale (non modifiable) : il ne doit pas en avoir
      MF_Assert (false, "Presence d'une constante locale !", 0, 0) ;
      break ;
    case enumListOfEntities:
      element->champEtat = etatValue ;
      break ;
    case enumParametreInOut : // Parametre formel en entree/sorie : doit etre mis a value
      element->champEtat = etatValue ;
      break ;
    case enumEntityAttribute:
      element->champEtat = etatNonValue ;
      break ;
    case enumSingleEntity :
      element->champEtat = etatNonValue ;
      break ;
    case enumParametreOut : // Parametre formel de sortie : doit etre mis a non value
      element->champEtat = etatNonValue ;
      break ;
    case enumPropertyOut : // Parametre formel de sortie : doit etre mis a non value
      element->champEtat = etatNonValue ;
      break ;
    }
    remettreVariablesDansEtatInitial (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
surchargerEtatVariables (cElement * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    surchargerEtatVariables (element->mInfPtr) ;
    agregatChainageEtat * tempo = (agregatChainageEtat *) NULL ;
    macroMyNew (tempo, agregatChainageEtat (element->champEtat, element->champChainageEtat)) ;
    element->champChainageEtat = tempo ;
    surchargerEtatVariables (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::dechargerEtatVariables (cElement * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    dechargerEtatVariables (element->mInfPtr) ;
    macroValidPointer (element->champChainageEtat) ;
    element->champEtat = element->champChainageEtat->champEtatApres ;
    agregatChainageEtat * tempo = element->champChainageEtat->mNextItem ;
    macroMyDelete (element->champChainageEtat) ;
    element->champChainageEtat = tempo ;
    dechargerEtatVariables (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::initialiserChampEtatApres (cElement * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    initialiserChampEtatApres (element->mInfPtr) ;
    macroValidPointer (element->champChainageEtat) ;
    element->champChainageEtat->champEtatApres = element->champEtat ;
    element->champEtat = element->champChainageEtat->champEtatAvant ;
    initialiserChampEtatApres (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
verifierChampEtatApres (C_CompilerEx & inLexique,
                        cElement * element,
                        const GGS_location & positionErreur,
                        const char * message1,
                        const char * message2) {
  if (element != NULL) {
    macroValidPointer (element) ;
    verifierChampEtatApres (inLexique, element->mInfPtr, positionErreur, message1, message2) ;
    macroValidPointer (element->champChainageEtat) ;
    if (element->champChainageEtat->champEtatApres != element->champEtat) {
      C_String message ;
      message << message1 << element->mKey << message2 ;
      positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
    }
    element->champEtat = element->champChainageEtat->champEtatAvant ;
    verifierChampEtatApres (inLexique, element->mSupPtr, positionErreur, message1, message2) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_testBloc (C_CompilerEx & COMMA_UNUSED_LOCATION_ARGS) {
  // printf ("cGalgasVariablesMap <INFO>::prologue_testBloc\n") ;
  typeSurchargeTable * tempo = (typeSurchargeTable *) NULL ;
  macroMyNew (tempo, typeSurchargeTable) ;
  tempo->mNextItem = aListeSurcharges ;
  tempo->champTable = mRoot ;
  mRoot = (cElement *) NULL ;
  aListeSurcharges = tempo ;

  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    surchargerEtatVariables (surchargeCourante->champTable) ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_testBloc (C_CompilerEx & COMMA_UNUSED_LOCATION_ARGS) {
  // printf ("cGalgasVariablesMap <INFO>::epilogue_testBloc\n") ;
  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    dechargerEtatVariables (surchargeCourante->champTable) ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
  macroValidPointer (aListeSurcharges) ;
  mRoot = aListeSurcharges->champTable ;
  typeSurchargeTable * tempo = aListeSurcharges->mNextItem ;
  macroMyDelete (aListeSurcharges) ;
  aListeSurcharges = tempo ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_testPart (C_CompilerEx & COMMA_UNUSED_LOCATION_ARGS) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
epilogue_testPart (C_CompilerEx & inLexique,
                   const GGS_location & positionErreur
                   COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
  macroMyDelete (mRoot) ;
//--- Verification de l'etat des variables
  macroValidPointer (aListeSurcharges) ;
  aListeSurcharges->champCompteur ++ ;
  if (aListeSurcharges->champCompteur == 1) {
  //--- Initialiser les champs 'apres'
    typeSurchargeTable * surchargeCourante = aListeSurcharges ;
    while (surchargeCourante != NULL) {
      macroValidPointer (surchargeCourante) ;
      initialiserChampEtatApres (surchargeCourante->champTable) ;
      surchargeCourante = surchargeCourante->mNextItem ;
    }
  }else{
  //--- Verifier la concordance de l'etat des variables et du champ 'apres'
    typeSurchargeTable * surchargeCourante = aListeSurcharges ;
    while (surchargeCourante != NULL) {
      macroValidPointer (surchargeCourante) ;
      verifierChampEtatApres (inLexique, surchargeCourante->champTable, positionErreur,
                   "this branch leaves the '", "' variable is a state different than the first branch") ;
      surchargeCourante = surchargeCourante->mNextItem ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
prologue_repeatBlock (C_CompilerEx & lexique COMMA_LOCATION_ARGS) {
  prologue_testBloc (lexique COMMA_THERE) ;
  prologue_testPart (lexique COMMA_THERE) ;
  GGS_location sansImportance ;
  epilogue_testPart (lexique, sansImportance COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
epilogue_repeatBlock (C_CompilerEx & lexique COMMA_LOCATION_ARGS) {
  epilogue_testBloc (lexique COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
prologue_repeatPart (C_CompilerEx & COMMA_UNUSED_LOCATION_ARGS) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::
epilogue_repeatPart (C_CompilerEx & inLexique,
                     const GGS_location & positionErreur
                     COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
  macroMyDelete (mRoot) ;
//--- Verification de l'etat des variables
  macroValidPointer (aListeSurcharges) ;
  aListeSurcharges->champCompteur ++ ;
//--- Verifier la concordance de l'etat des variables et du champ 'apres'
  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    verifierChampEtatApres (inLexique, surchargeCourante->champTable, positionErreur,
                 "this branch changes the state of the '", "' variable") ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
bool cGalgasVariablesMap <INFO>::isBuilt (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
PMSInt32 cGalgasVariablesMap <INFO>::count (void) const {
  return mListLength ;
}

//---------------------------------------------------------------------------*

#endif
