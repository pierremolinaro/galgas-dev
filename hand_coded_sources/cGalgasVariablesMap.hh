//---------------------------------------------------------------------------*
//                                                                           *
//  Generic map used for GALGAS variables (handles read/write access)        *
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

#ifndef IMPLEMENTATION_TABLE_AVEC_CONTROLE_PHASE_DEFINIE
#define IMPLEMENTATION_TABLE_AVEC_CONTROLE_PHASE_DEFINIE

//---------------------------------------------------------------------------*

#include <stdlib.h>

#include "utilities/MF_MemoryControl.h"
#include "cGalgasVariablesMap.h"

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO>::cElementTableControlePhase (const INFO & inInfo,
                                                                    const enumNatureEntite nature,
                                                                    const enumEtatVariable etat,
                                                                    const GGS_lstring & clef,
                                                                    const sint32 numeroElement,
                                                                    const bool inIsDeclaredUnused,
                                                                    const bool inUsed) :
mKey (clef),
mEntryIndex (numeroElement),
champNature (nature),
mIsDeclaredUnused (inIsDeclaredUnused) {
  mInfPtr = (element_type *) NULL ;
  mSupPtr = (element_type *) NULL ;
  mInfo = inInfo ;
  champUtilise = inUsed ;
  champEtat  = etat ;
  champChainageEtat = (agregatChainageEtat *) NULL ;
  mBalance = 0 ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cElementTableControlePhase <INFO>::~cElementTableControlePhase (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
  macroVoidPointer (champChainageEtat) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::cGalgasVariablesMap (void) {
  aListeSurcharges = (typeSurchargeTable *) NULL ;
  mRoot = (element_type *) NULL ;
  mListLength = 0 ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::~cGalgasVariablesMap (void) {
  drop_operation () ;
  macroVoidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::build (void) {
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::drop_operation (void) {
  mListLength = 0 ;
  macroMyDelete (mRoot, element_type) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::operator = (const cGalgasVariablesMap <INFO> & inOperand) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
cGalgasVariablesMap <INFO>::
cGalgasVariablesMap (const cGalgasVariablesMap <INFO> & inOperand) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
  aListeSurcharges = (typeSurchargeTable *) NULL ;
  mRoot = (element_type *) NULL ;
  mListLength = 0 ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::rotateLeft (element_type * & a) {
// faire la rotation 
  element_type * b = a->mSupPtr ;
  a->mSupPtr = b->mInfPtr ;
  b->mInfPtr = a;

// recalculer l'equilibrage 
  if (b->mBalance >= 0) {
    a->mBalance++ ;
  }else{
    a->mBalance += (sint16) (1 - b->mBalance) ;
  }
  if (a->mBalance > 0) {
    b->mBalance += (sint16) (a->mBalance + 1) ;
  }else{
    b->mBalance++ ;
  }
  a = b ;
} 

//---------------------------------------------------------------------

template <typename INFO>
void cGalgasVariablesMap <INFO>::rotateRight (element_type * & a) {
// faire la rotation 
  element_type * b = a->mInfPtr ;
  a->mInfPtr = b->mSupPtr ;
  b->mSupPtr = a ;
 
// recalculer l'equilibrage 
  if (b->mBalance > 0) {
    a->mBalance += (sint16) (-b->mBalance - 1) ;
  }else{
    a->mBalance-- ;
  } ;
  if (a->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += (sint16) (a->mBalance - 1) ;
  }
  a = b ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertInArgument (C_Lexique & inLexique,
                                                        const INFO & inInfo,
                                                        const GGS_lstring & clef,
                                                        const GGS_location & inLocation,
                                                        const char * messageErreurInsertion
                                                        COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreIn, etatValue, false, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertInOutArgument (C_Lexique & inLexique,
                                                           const INFO & inInfo,
                                                           const GGS_lstring & clef,
                                                           const GGS_location & inLocation,
                                                           const char * messageErreurInsertion
                                                           COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, false, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertUnusedInOutArgument (C_Lexique & inLexique,
                                                                 const INFO & inInfo,
                                                                 const GGS_lstring & clef,
                                                                 const GGS_location & inLocation,
                                                                 const char * messageErreurInsertion
                                                                 COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, true, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
 sint32 cGalgasVariablesMap <INFO>::insertOutArgument (C_Lexique & inLexique,
                                                          const INFO & inInfo,
                                                          const GGS_lstring & clef,
                                                          const GGS_location & inLocation,
                                                          const char * messageErreurInsertion
                                                          COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumParametreOut, etatNonValue, false, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertLocalVariable (C_Lexique & inLexique,
                                                           const INFO & inInfo,
                                                           const GGS_lstring & clef,
                                                           const GGS_location & inLocation,
                                                           const char * messageErreurInsertion
                                                           COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumVariableLocale, etatNonValue, false, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertConstInArgument (C_Lexique & inLexique,
                                                             const INFO & inInfo,
                                                             const GGS_lstring & clef,
                                                             const GGS_location & inLocation,
                                                             const char * messageErreurInsertion
                                                             COMMA_LOCATION_ARGS) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, false, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertUsedConstInArgument (C_Lexique & lexique_var_,
                                                             const INFO & inInfo,
                                                             const GGS_lstring & clef,
                                                             const GGS_location & inLocation,
                                                             const char * messageErreurInsertion
                                                             COMMA_LOCATION_ARGS) {
  return insertKey (lexique_var_, inInfo, enumConstanteLocale, etatValue, false, true, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertUnusedConstInArgument (C_Lexique & lexique_var_,
                                                                   const INFO & inInfo,
                                                                   const GGS_lstring & clef,
                                                                   const GGS_location & inLocation,
                                                                   const char * messageErreurInsertion
                                                                   COMMA_LOCATION_ARGS) {
  return insertKey (lexique_var_, inInfo, enumConstanteLocale, etatValue, true, false, clef, inLocation, messageErreurInsertion COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
sint32 cGalgasVariablesMap <INFO>::insertKey (C_Lexique & inLexique,
                                              const INFO & inInfo,
                                              const enumNatureEntite nature,
                                              const enumEtatVariable etat,
                                              const bool inIsDeclaredUnused,
                                              const bool inUsed,
                                              const GGS_lstring & inKey,
                                              const GGS_location & inLocation,
                                              const char * messageErreurInsertion
                                              COMMA_LOCATION_ARGS) {
  sint32 resultat = -1 ; // Erreur 'insertion incorrecte'
  if (isBuilt () && inKey.isBuilt ()) {
  //--- Realiser l'insertion
    bool insertionOk = false ;
    bool extension ;
    internalInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, inKey, mRoot, extension) ;
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
void cGalgasVariablesMap <INFO>::internalInsert (bool & insertionOk,
                                                       const INFO & inInfo,
                                                       const enumNatureEntite nature,
                                                       const enumEtatVariable etat,
                                                       const bool inIsDeclaredUnused,
                                                       const bool inUsed,
                                                       const GGS_lstring & clef,
                                                       element_type * & racine,
                                                       bool & extension) {
  if (racine == NULL) {
    macroMyNew (racine, element_type (inInfo, nature, etat, clef, mListLength, inIsDeclaredUnused, inUsed)) ;
    mListLength ++ ; 
    insertionOk = true ;
    extension = true ;
  }else{
    macroValidPointer (racine) ;
    const sint32 comparaison = racine->mKey.compareStringByLength (clef) ;
    if (comparaison > 0) {
      internalInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, clef, racine->mInfPtr, extension) ;
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
      internalInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, clef, racine->mSupPtr, extension) ;
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
chercherInterne (C_Lexique & inLexique,
                 element_type * & resultat,
                 const GGS_lstring & clef,
                 const char * messageErreurRecherche
                 COMMA_LOCATION_ARGS) {
  if (clef.isBuilt ()) {
  //--- Chercher d'abord dans la table designee par la racine
    resultat = mRoot ;
    bool found = false ;
    while ((resultat != NULL) && ! found) {
      macroValidPointer (resultat) ;
      const sint32 comparaison = resultat->mKey.compareStringByLength (clef) ;
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
      bool found = false ;
      while ((resultat != NULL) && ! found) {
        macroValidPointer (resultat) ;
        const sint32 comparaison = resultat->mKey.compareStringByLength (clef) ;
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
searchForReadOnlyAccess (C_Lexique & inLexique,
                         const GGS_lstring & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurPhase
                         COMMA_LOCATION_ARGS) {
  element_type * resultat = (element_type *) NULL ;
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
searchForDestructiveReadAccess (C_Lexique & inLexique,
                                const GGS_lstring & clef,
                                const GGS_location & inLocation,
                                const char * messageErreurPhase
                                COMMA_LOCATION_ARGS) {
	const char * messageErreurRecherche = "the '%' variable is not declared" ;
  element_type * resultat = (element_type *) NULL ;
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
searchForReadWriteAccess (C_Lexique & inLexique,
                          const GGS_lstring & clef,
                          const GGS_location & inLocation,
                          const char * messageErreurPhase
                          COMMA_LOCATION_ARGS) {
	const char * messageErreurRecherche = "the '%' variable is not declared" ;
  element_type * resultat = (element_type *) NULL ;
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
searchForWriteAccess (C_Lexique & inLexique,
                      const GGS_lstring & clef,
                      const GGS_location & inLocation,
                      const char * messageErreurPhase
                      COMMA_LOCATION_ARGS) {
	const char * messageErreurRecherche = "the '%' variable is not declared" ;
  element_type * resultat = (element_type *) NULL ;
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
void cGalgasVariablesMap <INFO>::prologue_verifyVariableUsing (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_verifyVariableUsing (C_Lexique & inLexique,
                                                                    const GGS_location & positionErreur
                                                                    COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::verificationRecursiveConsommation (C_Lexique & inLexique,
                                                                         element_type * element,
                                                                         const GGS_location & positionErreur
                                                                         COMMA_LOCATION_ARGS) {
  if (element != NULL) {
    macroValidPointer (element) ;
    verificationRecursiveConsommation (inLexique, element->mInfPtr, positionErreur COMMA_THERE) ;
    switch (element->champNature) {
    case enumParametreIn :  // Parametre formel en entree : doit etre consommee
     /* if (element->champEtat != etatDetruite) {
        C_String message ;
        message << "le parametre formel d'entree '" << element->mKey << "' n'est pas consomme a l'issue de la liste d'instructions precedente" ;
        positionErreur.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      } */
      break ;
    case enumVariableLocale : // variable locale : doit etre consommee
      /* if (element->champEtat == etatValue) {
        C_String message ;
        message << "la variable locale '" << element->mKey << "' n'est pas consomme a l'issue de la liste d'instructions precedente" ;
        positionErreur.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }else */ if (element->champEtat == etatNonValue) {
        C_String message ;
        message << "la variable locale '" << element->mKey << "' n'est pas utilisee dans la liste d'instructions precedente" ;
        positionErreur.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumConstanteLocale : // local constant : only verify a constant not declared as unused is effectivly used
      if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_String message ;
        message << "la constante locale '" << element->mKey << "' n'est pas utilisee et n'a pas ete declaree 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumParametreInOut : // Parametre formel en entree/sorie : doit etre valuee
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "le parametre formel d'entree/sortie '" << element->mKey << "' n'est pas value a l'issue de la liste d'instructions precedente" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }else if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_String message ;
        message << "le parametre formel d'entree/sortie '" << element->mKey << "' n'est pas utilise et n'a pas ete declare 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message COMMA_THERE) ;
      }
      break ;
    case enumParametreOut : // Parametre formel de sortie : doit etre valuee
      if (element->champEtat != etatValue) {
        C_String message ;
        message << "le parametre formel de sortie '" << element->mKey << "' n'est pas value a l'issue de la liste d'instructions precedente" ;
        positionErreur.signalSemanticError (inLexique, message COMMA_HERE) ;
      }
      break ;
    }
    verificationRecursiveConsommation (inLexique, element->mSupPtr, positionErreur COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::remettreVariablesDansEtatInitial (element_type * element) {
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
    case enumParametreInOut : // Parametre formel en entree/sorie : doit etre mis a value
      element->champEtat = etatValue ;
      break ;
    case enumParametreOut : // Parametre formel de sortie : doit etre mis a non value
      element->champEtat = etatNonValue ;
      break ;
    }
    remettreVariablesDansEtatInitial (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::surchargerEtatVariables (element_type * element) {
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
void cGalgasVariablesMap <INFO>::dechargerEtatVariables (element_type * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    dechargerEtatVariables (element->mInfPtr) ;
    macroValidPointer (element->champChainageEtat) ;
    element->champEtat = element->champChainageEtat->champEtatApres ;
    agregatChainageEtat * tempo = element->champChainageEtat->mNextItem ;
    macroMyDelete (element->champChainageEtat, agregatChainageEtat) ;
    element->champChainageEtat = tempo ;
    dechargerEtatVariables (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::initialiserChampEtatApres (element_type * element) {
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
void cGalgasVariablesMap <INFO>::verifierChampEtatApres (C_Lexique & inLexique,
                                                              element_type * element,
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
void cGalgasVariablesMap <INFO>::prologue_testBloc (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
  typeSurchargeTable * tempo = (typeSurchargeTable *) NULL ;
  macroMyNew (tempo, typeSurchargeTable) ;
  tempo->mNextItem = aListeSurcharges ;
  tempo->champTable = mRoot ;
  mRoot = (element_type *) NULL ;
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
void cGalgasVariablesMap <INFO>::epilogue_testBloc (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    dechargerEtatVariables (surchargeCourante->champTable) ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
  macroValidPointer (aListeSurcharges) ;
  mRoot = aListeSurcharges->champTable ;
  typeSurchargeTable * tempo = aListeSurcharges->mNextItem ;
  macroMyDelete (aListeSurcharges, typeSurchargeTable) ;
  aListeSurcharges = tempo ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_testPart (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_testPart (C_Lexique & inLexique,
                                                    const GGS_location & positionErreur COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
  macroMyDelete (mRoot, element_type) ;
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
                   "la branche precedente met la variable '", "' dans un etat different que la premiere branche") ;
      surchargeCourante = surchargeCourante->mNextItem ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_repeatBlock (C_Lexique & lexique COMMA_LOCATION_ARGS) {
  prologue_testBloc (lexique COMMA_THERE) ;
  prologue_testPart (lexique COMMA_THERE) ;
  GGS_location sansImportance ;
  epilogue_testPart (lexique, sansImportance COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_repeatBlock (C_Lexique & lexique COMMA_LOCATION_ARGS) {
  epilogue_testBloc (lexique COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_repeatPart (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_repeatPart (C_Lexique & inLexique,
                                                           const GGS_location & positionErreur COMMA_LOCATION_ARGS) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur COMMA_THERE) ;
  macroMyDelete (mRoot, element_type) ;
//--- Verification de l'etat des variables
  macroValidPointer (aListeSurcharges) ;
  aListeSurcharges->champCompteur ++ ;
//--- Verifier la concordance de l'etat des variables et du champ 'apres'
  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    verifierChampEtatApres (inLexique, surchargeCourante->champTable, positionErreur,
                 "la branche precedente change l'etat de la variable '", "'") ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::prologue_blocTestMethodeDouble (C_Lexique & COMMA_UNUSED_LOCATION_ARGS) {
  macroVoidPointer (aListeSurcharges) ;
  macroMyNew (aListeSurcharges, typeSurchargeTable) ;
  aListeSurcharges->champTable = mRoot ;
  mRoot = (element_type *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO>
void cGalgasVariablesMap <INFO>::epilogue_blocTestMethodeDouble (C_Lexique & inLexique,
                                                                      const GGS_location & positionErreur COMMA_LOCATION_ARGS) {
  macroValidPointer (aListeSurcharges) ;
  verificationRecursiveConsommation (inLexique, aListeSurcharges->champTable, positionErreur COMMA_THERE) ;
  macroMyDelete (mRoot, element_type) ;
  mRoot = aListeSurcharges->champTable ;
  macroMyDelete (aListeSurcharges, typeSurchargeTable) ;
  remettreVariablesDansEtatInitial (mRoot) ;
}

//---------------------------------------------------------------------------*

#endif
