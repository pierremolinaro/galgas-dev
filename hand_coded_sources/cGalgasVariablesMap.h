//---------------------------------------------------------------------------*
//                                                                           *
//  Generic map used for GALGAS variables (handles read/write access)        *
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

#ifndef TABLE_AVEC_CONTROLE_PHASE_DEFINIE
#define TABLE_AVEC_CONTROLE_PHASE_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas/C_lexique.h"

//---------------------------------------------------------------------------*

#include <string.h>

//---------------------------------------------------------------------------*
//                                                                           *
//       Énumération définissant les différentes natures d'une variable      *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumNatureEntite {enumParametreIn,  // Paramètre formel en entrée
                       enumConstanteLocale, // constante locale (non modifiable)
                       enumVariableLocale, // variable locale
                       enumParametreInOut, // Paramètre formel en entrée/sorie
                       enumParametreOut} ; // Paramètre formel de sortie

//---------------------------------------------------------------------------*
//                                                                           *
//       Énumération définissant les différentes états d'une variable        *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumEtatVariable {etatNonValue, etatValue, etatDetruite} ;

//---------------------------------------------------------------------------*
//                                                                           *
//       Énumération définissant les différents accès à une variable         *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumAccesVariable {ecriture, lectureSeule, lectureDestructive, lectureEcriture} ;

//---------------------------------------------------------------------------*
//                                                                           *
//        classe permettant de réaliser un chaînage de l'état d'une variable  *
//                                                                           *
//---------------------------------------------------------------------------*

class agregatChainageEtat {
  public : agregatChainageEtat * mNextItem ;
  public : enumEtatVariable champEtatAvant ;
  public : enumEtatVariable champEtatApres ;
//--- Constructeur (pas de destructeur)
  public : inline agregatChainageEtat (const enumEtatVariable etat,
                                       agregatChainageEtat * suivant)
   : champEtatAvant (etat), champEtatApres (etat) {
    mNextItem = suivant ;
  }
//--- Protection contre la duplication 
  private : agregatChainageEtat (agregatChainageEtat &) ;
  private : void operator = (agregatChainageEtat &) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//        classe élément table 'cElementTableControlePhase'                  *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cGalgasVariablesMap ;

template <typename INFO, typename KEY> class cElementTableControlePhase {
  public : typedef cElementTableControlePhase <INFO, KEY> element_type ;
//--- Protection contre la duplication 
  private : cElementTableControlePhase (cElementTableControlePhase <INFO, KEY> &) ;
  private : void operator = (cElementTableControlePhase <INFO, KEY> &) ;

//--- Attributs
  public : cElementTableControlePhase <INFO, KEY> * mInfPtr ;
  public : cElementTableControlePhase <INFO, KEY> * mSupPtr ;
  public : const KEY mKey ;
  public : INFO mInfo ;
  public : const sint32 mEntryIndex ;
  public : agregatChainageEtat * champChainageEtat ;
  public : sint16 mBalance ;
  public : const enumNatureEntite champNature ;
  public : enumEtatVariable champEtat ;
  public : bool champUtilise ;
  public : const bool mIsDeclaredUnused ;
  
//--- Constructeur et destructeur
  public : cElementTableControlePhase (const INFO & info,
                                       const enumNatureEntite nature,
                                       const enumEtatVariable etat,
                                       const KEY & clef,
                                       const sint32 numeroElement,
                                       const bool inIsDeclaredUnused,
                                       const bool inUsed) ;
  public : virtual ~cElementTableControlePhase (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//             Surcharge de la table 'cGalgasVariablesMap'                   *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class classeSurchargeTableControlePhase {
//--- Interdire la duplication
  private : classeSurchargeTableControlePhase (classeSurchargeTableControlePhase <INFO, KEY> &) ;
  private : void operator = (classeSurchargeTableControlePhase <INFO, KEY> &) ;
//--- Attributs
  private : classeSurchargeTableControlePhase <INFO, KEY> * mNextItem ;
  public : cElementTableControlePhase <INFO, KEY> * champTable ;
  public : sint16 champCompteur ;
  public : inline classeSurchargeTableControlePhase <INFO, KEY> * getNextItem (void) const { return mNextItem ; }
//--- Constructeur (pas de destructeur)
  public : classeSurchargeTableControlePhase (void) {
    mNextItem = (classeSurchargeTableControlePhase <INFO, KEY> *) NULL ;
    champTable = (cElementTableControlePhase <INFO, KEY> *) NULL ;
    champCompteur = 0 ;
  }
  friend class cGalgasVariablesMap <INFO, KEY> ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cGalgasVariablesMap'                           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cGalgasVariablesMap {
  public : typedef cElementTableControlePhase <INFO, KEY> element_type ;
  public : typedef classeSurchargeTableControlePhase <INFO, KEY> typeSurchargeTable ;
  public : element_type * mRoot ;
  public : typeSurchargeTable * aListeSurcharges ;
  private : sint32 mListLength ;
  public : inline sint32 count (void) const {
    return mListLength ;
  }

//--- No copy
  public : cGalgasVariablesMap (const cGalgasVariablesMap <INFO, KEY> &) ;
  public : void operator = (const cGalgasVariablesMap <INFO, KEY> &) ;

//--- Constructor and destructor
  public : cGalgasVariablesMap (void) ; // Default Constructor
  public : virtual ~cGalgasVariablesMap (void) ;

//--- Drop operation
  public : void drop_operation (void) ;

//--- This kind of map is always built
  public : inline bool isBuilt (void) const { return true ; }

//--- Handle 'new' constructor
  public : static cGalgasVariablesMap <INFO, KEY> constructor_empty (void) ;

//--- Méthodes d'insertion
  public : sint32 insertInArgument (C_lexique & inLexique,
                                  const INFO & info,
                                  const KEY & clef,
                                         const GGS_location & inLocation,
                                  const char * messageErreurInsertion) ;

  public : sint32 insertInOutArgument (C_lexique & inLexique,
                                     const INFO & info,
                                     const KEY & clef,
                                         const GGS_location & inLocation,
                                     const char * messageErreurInsertion) ;

  public : sint32 insertUnusedInOutArgument (C_lexique & inLexique,
                                           const INFO & info,
                                           const KEY & clef,
                                         const GGS_location & inLocation,
                                           const char * messageErreurInsertion) ;

  public : sint32 insertOutArgument (C_lexique & inLexique,
                                   const INFO & info,
                                   const KEY & clef,
                                         const GGS_location & inLocation,
                                   const char * messageErreurInsertion) ;

  public : sint32 insertConstInArgument (C_lexique & inLexique,
                                       const INFO & info,
                                       const KEY & clef,
                                         const GGS_location & inLocation,
                                       const char * messageErreurInsertion) ;

  public : sint32 insertUsedConstInArgument (C_lexique & inLexique,
                                           const INFO & info,
                                           const KEY & clef,
                                         const GGS_location & inLocation,
                                           const char * messageErreurInsertion) ;

  public : sint32 insertUnusedConstInArgument (C_lexique & inLexique,
                                             const INFO & info,
                                             const KEY & clef,
                                         const GGS_location & inLocation,
                                             const char * messageErreurInsertion) ;

  public : sint32 insertLocalVariable (C_lexique & inLexique,
                                     const INFO & info,
                                     const KEY & clef,
                                      const GGS_location & inLocation,
                                     const char * messageErreurInsertion) ;


//--- Search methods
  private : void chercherInterne (C_lexique & inLexique,
                                  element_type * & resultat,
                                  const KEY & clef,
                                  const char * messageErreurRecherche) ;

  public : element_type * searchForReadOnlyAccess (C_lexique & inLexique,
                                         const KEY & clef,
                                         const GGS_location & inLocation,
                                         const char * messageErreurRecherche,
                                         const char * messageErreurPhase) ;

  public : element_type * searchForDestructiveReadAccess (C_lexique & inLexique,
                                                const KEY & clef,
                                                const GGS_location & inLocation,
                                                const char * messageErreurRecherche,
                                                const char * messageErreurPhase) ;

  public : element_type * searchForReadWriteAccess (C_lexique & inLexique,
                                          const KEY & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurRecherche,
                                          const char * messageErreurPhase) ;

  public : element_type * searchForWriteAccess (C_lexique & inLexique,
                                      const KEY & clef,
                                      const GGS_location & inLocation,
                                      const char * messageErreurRecherche,
                                      const char * messageErreurPhase) ;

//--- Méthodes de bloc pour vérifier l'état des variables
  public : void prologue_verifyVariableUsing (C_lexique &) ;
  public : void epilogue_verifyVariableUsing (C_lexique &,
                                              const GGS_location &) ;

//--- Méthodes de bloc pour l'instruction test et choix
  public : void prologue_testBloc (C_lexique &) ;
  public : void epilogue_testBloc (C_lexique &) ;

//--- Méthodes de bloc pour chaque branche de l'instruction test et choix
  public : void prologue_testPart (C_lexique &) ;
  public : void epilogue_testPart (C_lexique &,
                                   const GGS_location &) ;

//--- Méthodes de bloc pour chaque instruction repeter
  public : void prologue_repeatBlock (C_lexique &) ;
  public : void epilogue_repeatBlock (C_lexique &) ;

//--- Méthodes de bloc pour chaque branche de l'instruction repeter
  public : void prologue_repeatPart (C_lexique &) ;
  public : void epilogue_repeatPart (C_lexique &,
                                     const GGS_location &) ;

//--- Méthodes de bloc pour chaque branche d'une méthode double
  public : void prologue_blocTestMethodeDouble (C_lexique &) ;
  public : void epilogue_blocTestMethodeDouble (C_lexique &,
                                                const GGS_location &) ;

//--- Méthodes internes privées
  private : sint32 insertKey (C_lexique & inLexique,
                         const INFO & info,
                         const enumNatureEntite nature,
                         const enumEtatVariable etat,
                         const bool inIsDeclaredUnused,
                         const bool inUsed,
                         const KEY & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurInsertion) ;

  private : void internalInsert (bool & insertionOk ,
                                 const INFO & info,
                                 const enumNatureEntite nature,
                                 const enumEtatVariable etat,
                                 const bool inIsDeclaredUnused,
                                 const bool inUsed,
                                 const KEY & clef,
                                 element_type * & racine,
                                 bool & extension) ;

  private : void verificationRecursiveConsommation (C_lexique & inLexique,
                                                    element_type * element,
                                                    const GGS_location & positionErreur) ;
  
  private : void remettreVariablesDansEtatInitial (element_type * element) ;
  
  private : void surchargerEtatVariables (element_type * element) ;
  
  private : void dechargerEtatVariables (element_type * element) ;
  
  private : void initialiserChampEtatApres (element_type * element) ;
  
  private : void verifierChampEtatApres (C_lexique & inLexique,
                                         element_type * element,
                                         const GGS_location & positionErreur,
                                         const char * message1,
                                         const char * message2) ;

//--- Méthodes statiques privées pour équilibrer l'arbre binaire
  private : static void rotateRight (element_type * & a) ;
  private : static void rotateLeft (element_type * & a) ;
} ;

//---------------------------------------------------------------------------*

#endif
