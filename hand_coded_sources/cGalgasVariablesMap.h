//---------------------------------------------------------------------------*
//                                                                           *
//  Generic map used for GALGAS variables (handles read/write access)        *
//                                                                           *
//  Copyright (C) 1999, ..., 2006 Pierre Molinaro.                           *
//                                                                           *
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

#ifndef TABLE_AVEC_CONTROLE_PHASE_DEFINIE
#define TABLE_AVEC_CONTROLE_PHASE_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*

#include <string.h>

//---------------------------------------------------------------------------*
//                                                                           *
//       Enumeration definissant les differentes natures d'une variable      *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumNatureEntite {enumParametreIn,  // Parametre formel en entree
                       enumConstanteLocale, // constante locale (non modifiable)
                       enumVariableLocale, // variable locale
                       enumParametreInOut, // Parametre formel en entree/sorie
                       enumParametreOut, // Parametre formel de sortie
                       enumPropertyOut, // Propriete devant etre definie
                       enumEntityAttribute, // An instance of entity attribute
                       enumSingleEntity, // An instance of entity
                       enumListOfEntities} ; // An instance of a list of entity instances

//---------------------------------------------------------------------------*
//                                                                           *
//       Enumeration definissant les differentes etats d'une variable        *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumEtatVariable {etatNonValue, etatValue, etatDetruite} ;

//---------------------------------------------------------------------------*
//                                                                           *
//       Enumeration definissant les differents acces a une variable         *
//                                                                           *
//---------------------------------------------------------------------------*

enum enumAccesVariable {ecriture, lectureSeule, lectureDestructive, lectureEcriture} ;

//---------------------------------------------------------------------------*
//                                                                           *
//        classe permettant de realiser un chainage de l'etat d'une variable  *
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
//        classe element table 'cElementTableControlePhase'                  *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cGalgasVariablesMap ;

template <typename INFO> class cElementTableControlePhase {
  public : typedef cElementTableControlePhase <INFO> element_type ;
//--- Protection contre la duplication 
  private : cElementTableControlePhase (cElementTableControlePhase <INFO> &) ;
  private : void operator = (cElementTableControlePhase <INFO> &) ;

//--- Attributs
  public : cElementTableControlePhase <INFO> * mInfPtr ;
  public : cElementTableControlePhase <INFO> * mSupPtr ;
  public : const GGS_lstring mKey ;
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
                                       const GGS_lstring & clef,
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

template <typename INFO> class classeSurchargeTableControlePhase {
//--- Interdire la duplication
  private : classeSurchargeTableControlePhase (classeSurchargeTableControlePhase <INFO> &) ;
  private : void operator = (classeSurchargeTableControlePhase <INFO> &) ;
//--- Attributs
  private : classeSurchargeTableControlePhase <INFO> * mNextItem ;
  public : cElementTableControlePhase <INFO> * champTable ;
  public : sint16 champCompteur ;
  public : inline classeSurchargeTableControlePhase <INFO> * nextObject (void) const { return mNextItem ; }
//--- Constructeur (pas de destructeur)
  public : classeSurchargeTableControlePhase (void) {
    mNextItem = (classeSurchargeTableControlePhase <INFO> *) NULL ;
    champTable = (cElementTableControlePhase <INFO> *) NULL ;
    champCompteur = 0 ;
  }
  friend class cGalgasVariablesMap <INFO> ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cGalgasVariablesMap'                           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cGalgasVariablesMap {
  public : typedef cElementTableControlePhase <INFO> element_type ;
  public : typedef classeSurchargeTableControlePhase <INFO> typeSurchargeTable ;
  public : element_type * _mRoot ;
  public : typeSurchargeTable * aListeSurcharges ;
  private : sint32 mListLength ;
  public : inline sint32 count (void) const {
    return mListLength ;
  }

//--- No copy
  public : cGalgasVariablesMap (const cGalgasVariablesMap <INFO> &) ;
  public : void operator = (const cGalgasVariablesMap <INFO> &) ;

//--- Constructor and destructor
  public : cGalgasVariablesMap (void) ; // Default Constructor
  public : virtual ~cGalgasVariablesMap (void) ;

//--- Drop operation
  public : void _drop_operation (void) ;
  public : void build (void) ;

//--- Reader 'hasKey"
  public : GGS_bool reader_hasKey (C_Lexique & inLexique,
                                   const GGS_string & inKey
                                   COMMA_LOCATION_ARGS) const ;

//--- This kind of map is always built
  public : inline bool _isBuilt (void) const { return true ; }

//--- Insertion Methods
  public : sint32 insertEntityAttributeLocalVariable (C_Lexique & inLexique,
                                                      const INFO & info,
                                                      const GGS_lstring & clef,
                                                      const GGS_location & inLocation,
                                                      const char * messageErreurInsertion
                                                      COMMA_LOCATION_ARGS) ;

  public : sint32 insertSingleEntityLocalVariable (C_Lexique & inLexique,
                                                   const INFO & info,
                                                   const GGS_lstring & clef,
                                                   const GGS_location & inLocation,
                                                   const char * messageErreurInsertion
                                                   COMMA_LOCATION_ARGS) ;

  public : sint32 insertListOfEntitiesLocalVariable (C_Lexique & inLexique,
                                                     const INFO & info,
                                                     const GGS_lstring & clef,
                                                     const GGS_location & inLocation,
                                                     const char * messageErreurInsertion
                                                     COMMA_LOCATION_ARGS) ;

  public : sint32 insertInArgument (C_Lexique & inLexique,
                                    const INFO & info,
                                    const GGS_lstring & clef,
                                    const GGS_location & inLocation,
                                    const char * messageErreurInsertion
                                    COMMA_LOCATION_ARGS) ;

  public : sint32 insertUnusedInArgument (C_Lexique & inLexique,
                                          const INFO & info,
                                          const GGS_lstring & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurInsertion
                                          COMMA_LOCATION_ARGS) ;

  public : sint32 insertOutProperty (C_Lexique & inLexique,
                                     const INFO & info,
                                     const GGS_lstring & clef,
                                     const GGS_location & inLocation,
                                     const char * messageErreurInsertion
                                     COMMA_LOCATION_ARGS) ;

  public : sint32 insertInOutArgument (C_Lexique & inLexique,
                                     const INFO & info,
                                     const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                     const char * messageErreurInsertion
                                     COMMA_LOCATION_ARGS) ;

  public : sint32 insertUsedInOutArgument (C_Lexique & inLexique,
                                           const INFO & info,
                                           const GGS_lstring & clef,
                                           const GGS_location & inLocation,
                                           const char * messageErreurInsertion
                                           COMMA_LOCATION_ARGS) ;

  public : sint32 insertUnusedInOutArgument (C_Lexique & inLexique,
                                           const INFO & info,
                                           const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                           const char * messageErreurInsertion
                                           COMMA_LOCATION_ARGS) ;

  public : sint32 insertOutArgument (C_Lexique & inLexique,
                                   const INFO & info,
                                   const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                   const char * messageErreurInsertion
                                   COMMA_LOCATION_ARGS) ;

  public : sint32 insertConstInArgument (C_Lexique & inLexique,
                                       const INFO & info,
                                       const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                       const char * messageErreurInsertion
                                       COMMA_LOCATION_ARGS) ;

  public : sint32 insertUsedConstInArgument (C_Lexique & inLexique,
                                           const INFO & info,
                                           const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                           const char * messageErreurInsertion
                                           COMMA_LOCATION_ARGS) ;

  public : sint32 insertUnusedConstInArgument (C_Lexique & inLexique,
                                             const INFO & info,
                                             const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                             const char * messageErreurInsertion
                                             COMMA_LOCATION_ARGS) ;

  public : sint32 insertLocalVariable (C_Lexique & inLexique,
                                     const INFO & info,
                                     const GGS_lstring & clef,
                                      const GGS_location & inLocation,
                                     const char * messageErreurInsertion
                                     COMMA_LOCATION_ARGS) ;


//--- Search methods
  private : void chercherInterne (C_Lexique & inLexique,
                                  element_type * & resultat,
                                  const GGS_lstring & clef,
                                  const char * messageErreurRecherche
                                  COMMA_LOCATION_ARGS) ;

  public : element_type * searchForReadOnlyAccess (C_Lexique & inLexique,
                                         const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                         const char * messageErreurPhase
                                         COMMA_LOCATION_ARGS) ;

  public : element_type * searchForDestructiveReadAccess (C_Lexique & inLexique,
                                                const GGS_lstring & clef,
                                                const GGS_location & inLocation,
                                                const char * messageErreurPhase
                                                COMMA_LOCATION_ARGS) ;

  public : element_type * searchForReadWriteAccess (C_Lexique & inLexique,
                                          const GGS_lstring & clef,
                                          const GGS_location & inLocation,
                                          const char * messageErreurPhase
                                          COMMA_LOCATION_ARGS) ;

  public : element_type * searchForWriteAccess (C_Lexique & inLexique,
                                      const GGS_lstring & clef,
                                      const GGS_location & inLocation,
                                      const char * messageErreurPhase
                                      COMMA_LOCATION_ARGS) ;

//--- Methodes de bloc pour verifier l'etat des variables
  public : void prologue_verifyVariableUsing (C_Lexique & COMMA_LOCATION_ARGS) ;
  public : void epilogue_verifyVariableUsing (C_Lexique &,
                                              const GGS_location & COMMA_LOCATION_ARGS) ;

//--- Methodes de bloc pour l'instruction test et choix
  public : void prologue_testBloc (C_Lexique & COMMA_LOCATION_ARGS) ;
  public : void epilogue_testBloc (C_Lexique & COMMA_LOCATION_ARGS) ;

//--- Methodes de bloc pour chaque branche de l'instruction test et choix
  public : void prologue_testPart (C_Lexique & COMMA_LOCATION_ARGS) ;
  public : void epilogue_testPart (C_Lexique &,
                                   const GGS_location & COMMA_LOCATION_ARGS) ;

//--- Methodes de bloc pour chaque instruction repeter
  public : void prologue_repeatBlock (C_Lexique & COMMA_LOCATION_ARGS) ;
  public : void epilogue_repeatBlock (C_Lexique & COMMA_LOCATION_ARGS) ;

//--- Methodes de bloc pour chaque branche de l'instruction repeter
  public : void prologue_repeatPart (C_Lexique & COMMA_LOCATION_ARGS) ;
  public : void epilogue_repeatPart (C_Lexique &,
                                     const GGS_location & COMMA_LOCATION_ARGS) ;

//--- Methodes internes privees
  private : sint32 insertKey (C_Lexique & inLexique,
                         const INFO & info,
                         const enumNatureEntite nature,
                         const enumEtatVariable etat,
                         const bool inIsDeclaredUnused,
                         const bool inUsed,
                         const GGS_lstring & clef,
                         const GGS_location & inLocation,
                         const char * messageErreurInsertion
                         COMMA_LOCATION_ARGS) ;

  private : void internalInsert (bool & insertionOk ,
                                 const INFO & info,
                                 const enumNatureEntite nature,
                                 const enumEtatVariable etat,
                                 const bool inIsDeclaredUnused,
                                 const bool inUsed,
                                 const GGS_lstring & clef,
                                 element_type * & racine,
                                 bool & extension) ;

  private : void verificationRecursiveConsommation (C_Lexique & inLexique,
                                                    element_type * element,
                                                    const GGS_location & positionErreur
                                                    COMMA_LOCATION_ARGS) ;
  
  private : void remettreVariablesDansEtatInitial (element_type * element) ;
  
  private : void surchargerEtatVariables (element_type * element) ;
  
  private : void dechargerEtatVariables (element_type * element) ;
  
  private : void initialiserChampEtatApres (element_type * element) ;
  
  private : void verifierChampEtatApres (C_Lexique & inLexique,
                                         element_type * element,
                                         const GGS_location & positionErreur,
                                         const char * message1,
                                         const char * message2) ;

//--- Methodes statiques privees pour equilibrer l'arbre binaire
  private : static void rotateRight (element_type * & a) ;
  private : static void rotateLeft (element_type * & a) ;
} ;

//---------------------------------------------------------------------------*

#endif
