//---------------------------------------------------------------------------*
//                                                                           *
//  Generic map used for GALGAS variables (handles read/write access)        *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybern�tique de Nantes*
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

#include "cGalgasVariablesMap.h"
#include <stdlib.h>

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY>::cElementTableControlePhase (const INFO & inInfo,
                                                                    const enumNatureEntite nature,
                                                                    const enumEtatVariable etat,
                                                                    const KEY & clef,
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

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY>::~cElementTableControlePhase (void) {
  macroMyDelete (mInfPtr, element_type) ;
  macroMyDelete (mSupPtr, element_type) ;
  macroVoidPointer (champChainageEtat) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cGalgasVariablesMap <INFO, KEY>::cGalgasVariablesMap (void) {
  aListeSurcharges = (typeSurchargeTable *) NULL ;
  mRoot = (element_type *) NULL ;
  mListLength = 0 ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cGalgasVariablesMap <INFO, KEY>::~cGalgasVariablesMap (void) {
  drop_operation () ;
  macroVoidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::drop_operation (void) {
  mListLength = 0 ;
  macroMyDelete (mRoot, element_type) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::operator = (const cGalgasVariablesMap <INFO, KEY> & inOperand) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
  drop_operation () ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cGalgasVariablesMap <INFO, KEY>::
cGalgasVariablesMap (const cGalgasVariablesMap <INFO, KEY> & inOperand) {
  if (inOperand.mListLength > 0) {
    printf ("--- FATAL ERROR AT LINE %d, SOURCE %s ---\n", __LINE__, __FILE__) ;
    exit (1) ;
  }
  aListeSurcharges = (typeSurchargeTable *) NULL ;
  mRoot = (element_type *) NULL ;
  mListLength = 0 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        'new' constructor                                                  *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cGalgasVariablesMap <INFO, KEY> cGalgasVariablesMap <INFO, KEY>::
constructor_empty (void) {
  return cGalgasVariablesMap <INFO, KEY> () ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::rotateLeft (element_type * & a) {
// faire la rotation 
  element_type * b = a->mSupPtr ;
  a->mSupPtr = b->mInfPtr ;
  b->mInfPtr = a;

// recalculer l'�quilibrage 
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::rotateRight (element_type * & a) {
// faire la rotation 
  element_type * b = a->mInfPtr ;
  a->mInfPtr = b->mSupPtr ;
  b->mSupPtr = a ;
 
// recalculer l'�quilibrage 
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

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertInArgument (C_lexique & inLexique,
                                                        const INFO & inInfo,
                                                        const KEY & clef,
                                                        const GGS_location & inLocation,
                                                        const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumParametreIn, etatValue, false, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertInOutArgument (C_lexique & inLexique,
                                                           const INFO & inInfo,
                                                           const KEY & clef,
                                                           const GGS_location & inLocation,
                                                           const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, false, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertUnusedInOutArgument (C_lexique & inLexique,
                                                                 const INFO & inInfo,
                                                                 const KEY & clef,
                                                                 const GGS_location & inLocation,
                                                                 const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumParametreInOut, etatValue, true, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
 sint32 cGalgasVariablesMap <INFO, KEY>::insertOutArgument (C_lexique & inLexique,
                                                          const INFO & inInfo,
                                                          const KEY & clef,
                                                          const GGS_location & inLocation,
                                                          const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumParametreOut, etatNonValue, false, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertLocalVariable (C_lexique & inLexique,
                                                           const INFO & inInfo,
                                                           const KEY & clef,
                                                           const GGS_location & inLocation,
                                                           const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumVariableLocale, etatNonValue, false, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertConstInArgument (C_lexique & inLexique,
                                                             const INFO & inInfo,
                                                             const KEY & clef,
                                                             const GGS_location & inLocation,
                                                             const char * messageErreurInsertion) {
  return insertKey (inLexique, inInfo, enumConstanteLocale, etatValue, false, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertUsedConstInArgument (C_lexique & lexique_var_,
                                                             const INFO & inInfo,
                                                             const KEY & clef,
                                                             const GGS_location & inLocation,
                                                             const char * messageErreurInsertion) {
  return insertKey (lexique_var_, inInfo, enumConstanteLocale, etatValue, false, true, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertUnusedConstInArgument (C_lexique & lexique_var_,
                                                                   const INFO & inInfo,
                                                                   const KEY & clef,
                                                                   const GGS_location & inLocation,
                                                                   const char * messageErreurInsertion) {
  return insertKey (lexique_var_, inInfo, enumConstanteLocale, etatValue, true, false, clef, inLocation, messageErreurInsertion) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
sint32 cGalgasVariablesMap <INFO, KEY>::insertKey (C_lexique & inLexique,
                                              const INFO & inInfo,
                                              const enumNatureEntite nature,
                                              const enumEtatVariable etat,
                                              const bool inIsDeclaredUnused,
                                              const bool inUsed,
                                              const KEY & inKey,
                                              const GGS_location & inLocation,
                                              const char * messageErreurInsertion) {
  sint32 resultat = -1 ; // Erreur 'insertion incorrecte'
  if (isBuilt () && inInfo.isBuilt () && inKey.isBuilt ()) {
  //--- R�aliser l'insertion
    bool insertionOk = false ;
    bool extension ;
    internalInsert (insertionOk, inInfo, nature, etat, inIsDeclaredUnused, inUsed, inKey, mRoot, extension) ;
    if (insertionOk) {
      resultat = mListLength - 1 ;
    }else{ // Rechercher une occurrence '%%', afin de la remplacer par la clef
      inLocation.semanticErrorForMap (inLexique, messageErreurInsertion, inKey) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::internalInsert (bool & insertionOk,
                                                       const INFO & inInfo,
                                                       const enumNatureEntite nature,
                                                       const enumEtatVariable etat,
                                                       const bool inIsDeclaredUnused,
                                                       const bool inUsed,
                                                       const KEY & clef,
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::
chercherInterne (C_lexique & inLexique,
                 element_type * & resultat,
                 const KEY & clef,
                 const char * messageErreurRecherche) {
  if (clef.isBuilt ()) {
  //--- Chercher d'abord dans la table d�sign�e par la racine
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
  //--- Si pas trouv�, search dans les tables surcharg�es
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
      surchargeCourante = surchargeCourante->getNextItem () ;
    }
  //--- Pas trouv� : erreur de recherche
    if (resultat == NULL) {
      clef.semanticErrorForMap (inLexique, messageErreurRecherche, clef) ;
    }else if (resultat->mIsDeclaredUnused) {  //--- Check the variable is not declared as unused
      C_string message ;
      message << "The '" << clef << "' entity has been declared as 'unused'" ;
      clef.signalSemanticWarning (inLexique, message) ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY> * cGalgasVariablesMap <INFO, KEY>::
searchForReadOnlyAccess (C_lexique & inLexique,
                         const KEY & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurRecherche,
                         const char * messageErreurPhase) {
  element_type * resultat = (element_type *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche) ;
  if (resultat != NULL) { // Symbole trouv�
    macroValidPointer (resultat) ;
    if (resultat->champEtat == etatValue) {
      resultat->champUtilise = true ;
    }else{
      inLocation.semanticErrorForMap (inLexique, messageErreurPhase, clef) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY> * cGalgasVariablesMap <INFO, KEY>::
searchForDestructiveReadAccess (C_lexique & inLexique,
                                const KEY & clef,
                                const GGS_location & inLocation,
                                const char * messageErreurRecherche,
                                const char * messageErreurPhase) {
  element_type * resultat = (element_type *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche) ;
  if (resultat != NULL) { // Symbole trouv�
    macroValidPointer (resultat) ;
    if ((resultat->champEtat == etatValue) 
        && (resultat->champNature != enumConstanteLocale)) {
      resultat->champEtat = etatDetruite ;
      resultat->champUtilise = true ;
    }else{
      inLocation.semanticErrorForMap (inLexique, messageErreurPhase, clef) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY> * cGalgasVariablesMap <INFO, KEY>::
searchForReadWriteAccess (C_lexique & inLexique,
                          const KEY & clef,
                          const GGS_location & inLocation,
                          const char * messageErreurRecherche,
                          const char * messageErreurPhase) {
  element_type * resultat = (element_type *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche) ;
  if (resultat != NULL) { // Symbole trouv�
    macroValidPointer (resultat) ;
    if ((resultat->champEtat == etatValue)
        && (resultat->champNature != enumConstanteLocale)) {
      resultat->champUtilise = true ;
    }else{
      inLocation.semanticErrorForMap (inLexique, messageErreurPhase, clef) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
cElementTableControlePhase <INFO, KEY> * cGalgasVariablesMap <INFO, KEY>::
searchForWriteAccess (C_lexique & inLexique,
                      const KEY & clef,
                      const GGS_location & inLocation,
                      const char * messageErreurRecherche,
                      const char * messageErreurPhase) {
  element_type * resultat = (element_type *) NULL ;
  chercherInterne (inLexique, resultat, clef, messageErreurRecherche) ;
  if (resultat != NULL) { // Symbole trouv�
    macroValidPointer (resultat) ;
    if (resultat->champNature != enumConstanteLocale) {
      resultat->champEtat = etatValue ;
      resultat->champUtilise = true ;
    }else{
/*    if ((resultat->champEtat == etatNonValue) || (resultat->champEtat == etatDetruite)) {
      resultat->champEtat = etatValue ;
      resultat->champUtilise = true ;
    }else{*/
      inLocation.semanticErrorForMap (inLexique, messageErreurPhase, clef) ;
    }
  }
  return resultat ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_verifyVariableUsing (C_lexique &) {
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_verifyVariableUsing (C_lexique & inLexique,
                                                                    const GGS_location & positionErreur) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::verificationRecursiveConsommation (C_lexique & inLexique,
                                                                         element_type * element,
                                                                         const GGS_location & positionErreur) {
  if (element != NULL) {
    macroValidPointer (element) ;
    verificationRecursiveConsommation (inLexique, element->mInfPtr, positionErreur) ;
    switch (element->champNature) {
    case enumParametreIn :  // Param�tre formel en entr�e : doit �tre consomm�e
     /* if (element->champEtat != etatDetruite) {
        C_string message ;
        message << "le param�tre formel d'entr�e '" << element->mKey << "' n'est pas consomm� � l'issue de la liste d'instructions pr�c�dente" ;
        positionErreur.signalSemanticWarning (inLexique, message) ;
      } */
      break ;
    case enumVariableLocale : // variable locale : doit �tre consomm�e
      /* if (element->champEtat == etatValue) {
        C_string message ;
        message << "la variable locale '" << element->mKey << "' n'est pas consomm� � l'issue de la liste d'instructions pr�c�dente" ;
        positionErreur.signalSemanticWarning (inLexique, message) ;
      }else */ if (element->champEtat == etatNonValue) {
        C_string message ;
        message << "la variable locale '" << element->mKey << "' n'est pas utilis�e dans la liste d'instructions pr�c�dente" ;
        positionErreur.signalSemanticWarning (inLexique, message) ;
      }
      break ;
    case enumConstanteLocale : // local constant : only verify a constant not declared as unused is effectivly used
      if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_string message ;
        message << "la constante locale '" << element->mKey << "' n'est pas utilis�e et n'a pas �t� d�clar�e 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message) ;
      }
      break ;
    case enumParametreInOut : // Param�tre formel en entr�e/sorie : doit �tre valu�e
      if (element->champEtat != etatValue) {
        C_string message ;
        message << "le param�tre formel d'entr�e/sortie '" << element->mKey << "' n'est pas valu� � l'issue de la liste d'instructions pr�c�dente" ;
        positionErreur.signalSemanticError (inLexique, message) ;
      }else if ((! element-> mIsDeclaredUnused) && (! element->champUtilise)) {
        C_string message ;
        message << "le param�tre formel d'entr�e/sortie '" << element->mKey << "' n'est pas utilis� et n'a pas �t� d�clare 'unused'" ;
        element->mKey.signalSemanticWarning (inLexique, message) ;
      }
      break ;
    case enumParametreOut : // Param�tre formel de sortie : doit �tre valu�e
      if (element->champEtat != etatValue) {
        C_string message ;
        message << "le param�tre formel de sortie '" << element->mKey << "' n'est pas valu� � l'issue de la liste d'instructions pr�c�dente" ;
        positionErreur.signalSemanticError (inLexique, message) ;
      }
      break ;
    }
    verificationRecursiveConsommation (inLexique, element->mSupPtr, positionErreur) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::remettreVariablesDansEtatInitial (element_type * element) {
  if (element != NULL) {
    macroValidPointer (element) ;
    remettreVariablesDansEtatInitial (element->mInfPtr) ;
    switch (element->champNature) {
    case enumParametreIn :  // Param�tre formel en entr�e : doit �tre mis � valu�
      element->champEtat = etatValue ;
      break ;
    case enumVariableLocale : // variable locale : il ne doit pas en avoir
      M_assert (false, "Pr�sence d'une variable locale !", 0, 0) ;
      break ;
    case enumConstanteLocale : // constante locale (non modifiable) : il ne doit pas en avoir
      M_assert (false, "Pr�sence d'une constante locale !", 0, 0) ;
      break ;
    case enumParametreInOut : // Param�tre formel en entr�e/sorie : doit �tre mis � valu�
      element->champEtat = etatValue ;
      break ;
    case enumParametreOut : // Param�tre formel de sortie : doit �tre mis � non valu�
      element->champEtat = etatNonValue ;
      break ;
    }
    remettreVariablesDansEtatInitial (element->mSupPtr) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::surchargerEtatVariables (element_type * element) {
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::dechargerEtatVariables (element_type * element) {
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::initialiserChampEtatApres (element_type * element) {
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::verifierChampEtatApres (C_lexique & inLexique,
                                                              element_type * element,
                                       const GGS_location & positionErreur,
                                       const char * message1,
                                       const char * message2) {
  if (element != NULL) {
    macroValidPointer (element) ;
    verifierChampEtatApres (inLexique, element->mInfPtr, positionErreur, message1, message2) ;
    macroValidPointer (element->champChainageEtat) ;
    if (element->champChainageEtat->champEtatApres != element->champEtat) {
      C_string message ;
      message << message1 << element->mKey << message2 ;
      positionErreur.signalSemanticError (inLexique, message) ;
    }
    element->champEtat = element->champChainageEtat->champEtatAvant ;
    verifierChampEtatApres (inLexique, element->mSupPtr, positionErreur, message1, message2) ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_testBloc (C_lexique &) {
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_testBloc (C_lexique &) {
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

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_testPart (C_lexique &) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_testPart (C_lexique & inLexique,
                                                         const GGS_location & positionErreur) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur) ;
  macroMyDelete (mRoot, element_type) ;
//--- V�rification de l'�tat des variables
  macroValidPointer (aListeSurcharges) ;
  aListeSurcharges->champCompteur ++ ;
  if (aListeSurcharges->champCompteur == 1) {
  //--- Initialiser les champs 'apr�s'
    typeSurchargeTable * surchargeCourante = aListeSurcharges ;
    while (surchargeCourante != NULL) {
      macroValidPointer (surchargeCourante) ;
      initialiserChampEtatApres (surchargeCourante->champTable) ;
      surchargeCourante = surchargeCourante->mNextItem ;
    }
  }else{
  //--- V�rifier la concordance de l'�tat des variables et du champ 'apr�s'
    typeSurchargeTable * surchargeCourante = aListeSurcharges ;
    while (surchargeCourante != NULL) {
      macroValidPointer (surchargeCourante) ;
      verifierChampEtatApres (inLexique, surchargeCourante->champTable, positionErreur,
                   "la branche pr�c�dente met la variable '", "' dans un �tat diff�rent que la premi�re branche") ;
      surchargeCourante = surchargeCourante->mNextItem ;
    }
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_repeatBlock (C_lexique & lexique) {
  prologue_testBloc (lexique) ;
  prologue_testPart (lexique) ;
  GGS_location sansImportance ;
  epilogue_testPart (lexique, sansImportance) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_repeatBlock (C_lexique & lexique) {
  epilogue_testBloc (lexique) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_repeatPart (C_lexique &) {
  macroValidPointer (aListeSurcharges) ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_repeatPart (C_lexique & inLexique,
                                                           const GGS_location & positionErreur) {
  verificationRecursiveConsommation (inLexique, mRoot, positionErreur) ;
  macroMyDelete (mRoot, element_type) ;
//--- V�rification de l'�tat des variables
  macroValidPointer (aListeSurcharges) ;
  aListeSurcharges->champCompteur ++ ;
//--- V�rifier la concordance de l'�tat des variables et du champ 'apr�s'
  typeSurchargeTable * surchargeCourante = aListeSurcharges ;
  while (surchargeCourante != NULL) {
    macroValidPointer (surchargeCourante) ;
    verifierChampEtatApres (inLexique, surchargeCourante->champTable, positionErreur,
                 "la branche pr�c�dente change l'�tat de la variable '", "'") ;
    surchargeCourante = surchargeCourante->mNextItem ;
  }
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::prologue_blocTestMethodeDouble (C_lexique &) {
  macroVoidPointer (aListeSurcharges) ;
  macroMyNew (aListeSurcharges, typeSurchargeTable) ;
  aListeSurcharges->champTable = mRoot ;
  mRoot = (element_type *) NULL ;
}

//---------------------------------------------------------------------------*

template <typename INFO, typename KEY>
void cGalgasVariablesMap <INFO, KEY>::epilogue_blocTestMethodeDouble (C_lexique & inLexique,
                                                                      const GGS_location & positionErreur) {
  macroValidPointer (aListeSurcharges) ;
  verificationRecursiveConsommation (inLexique, aListeSurcharges->champTable, positionErreur) ;
  macroMyDelete (mRoot, element_type) ;
  mRoot = aListeSurcharges->champTable ;
  macroMyDelete (aListeSurcharges, typeSurchargeTable) ;
  remettreVariablesDansEtatInitial (mRoot) ;
}

//---------------------------------------------------------------------------*

#endif
