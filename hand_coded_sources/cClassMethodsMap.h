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

#ifndef TABLE_METHODES_UTILISABLES_DEFINIE
#define TABLE_METHODES_UTILISABLES_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*

class C_TextFileWrite ;

//---------------------------------------------------------------------------*
//                                                                           *
//        classe ÈlÈment table 'cElementTableMethodesUtilisables'            *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cClassMethodsMap ;

template <typename INFO, typename KEY> class cElementTableMethodesUtilisables {
  public : typedef cElementTableMethodesUtilisables <INFO, KEY> element_type ;
//--- Attributs
  private : element_type * mNextItem ;
  public : element_type * mInfPtr ;
  public : element_type * mSupPtr ;
  public : KEY mKey ;
  public : INFO mInfo ;
  public : bool champEstAbstraite ;
  public : const sint32 mEntryIndex ;
  public : inline element_type * getNextItem (void) const { return mNextItem ; }

//--- Constructeur et destructeur
  public : cElementTableMethodesUtilisables (const INFO & info,
                                             const KEY & clef,
                                             const sint32 numeroElement,
                                             const bool estAbstraite) ;
  public : ~cElementTableMethodesUtilisables (void) ;

//--- Protection contre la duplication
  private : void operator = (const element_type &) ;
  private : cElementTableMethodesUtilisables (const element_type &) ;
  friend class cClassMethodsMap <INFO, KEY> ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cClassMethodsMap'                              *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cClassMethodsMap {
  public : typedef cElementTableMethodesUtilisables <INFO, KEY> element_type ;
  public : element_type * mRoot ;
  private : element_type * mFirstItem ;
  public : element_type * mLastItem ;
  private : sint32 mListLength ;
  public : inline element_type * getFirstItem (void) const { return mFirstItem ; }
  public : inline sint32 count (void) const {
    return mListLength ;
  }
  private : sint32 * mReferenceCountPtr ;

  public : cClassMethodsMap (void) ; // Default Constructor
  public : virtual ~cClassMethodsMap (void) ;

//--- Gérer la duplication
  public : cClassMethodsMap (const cClassMethodsMap <INFO, KEY> &) ; // Copy constructor
  public : void operator = (const cClassMethodsMap <INFO, KEY> &) ; // Assignment operator

  public : inline bool isBuilt (void) const {
    return mReferenceCountPtr != NULL ;
  }
  
  public : void drop_operation (void) ;

//--- Handle 'new' constructor
  public : static cClassMethodsMap <INFO, KEY> constructor_empty (void) ;

//--- Method for searching
  public : element_type * searchKey (C_Lexique & inLexique,
                                  const KEY & inKey,
                                  const GGS_location & inLocation,
                                  const char * inSearchErrorMessage) ;
  public : element_type * searchForOverride (C_Lexique & inLexique,
                                  const KEY & inKey,
                                  const GGS_location & inLocation,
                                  const char * inSearchErrorMessage) ;

  public : sint32 insertAbstract (C_Lexique & inLexique,
                                  const INFO & info,
                                  const KEY & clef,
                                  const GGS_location & inLocation,
                                  const char * messageErreurInsertion) ;

  public : sint32 insertNotAbstract (C_Lexique & inLexique,
                                     const INFO & info,
                                     const KEY & clef,
                                     const GGS_location & inLocation,
                                     const char * messageErreurInsertion) ;

  protected : void insulateMap (void) ;

  protected : sint32 internalInsert (const INFO & info,
                                   const KEY & clef,
                                   const bool estAbstraite,
                                   element_type * & racine) ;

//--- Méthodes de bloc
  public : void prologue_definitionClasseNonAbstraite (C_Lexique &) {}
  public : void epilogue_definitionClasseNonAbstraite (C_Lexique &) ;
} ;

//---------------------------------------------------------------------------*

#endif
