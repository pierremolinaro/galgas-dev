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

#ifndef TABLE_METHODES_A_IMPLEMENTER_DEFINIE
#define TABLE_METHODES_A_IMPLEMENTER_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas/C_lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe élément table 'cElementTableMethodesAimplementer'           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cTableMethodesAimplementer ;

template <typename INFO, typename KEY> class cElementTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO, KEY> element_type ;
  private : cElementTableMethodesAimplementer <INFO, KEY> * mNextItem ;
  public : cElementTableMethodesAimplementer <INFO, KEY> * mInfPtr ;
  public : cElementTableMethodesAimplementer <INFO, KEY> * mSupPtr ;
  public : KEY mKey ;
  public : INFO mInfo ;
  public : const bool champEstAbstraite ;
  public : const sint32 mEntryIndex ;
  public : inline element_type * getNextItem (void) const { return mNextItem ; }
  public : cElementTableMethodesAimplementer (const INFO & info,
                                              const KEY & clef,
                                              const sint32 numeroElement,
                                              const bool estAbstraite) ;
  public : ~cElementTableMethodesAimplementer (void) ;

//--- Protection contre la duplication
  private : cElementTableMethodesAimplementer (const cElementTableMethodesAimplementer <INFO, KEY> &) ;
  private : void operator = (const cElementTableMethodesAimplementer <INFO, KEY> &) ;
  friend class cTableMethodesAimplementer <INFO, KEY> ;

} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO, typename KEY> class cTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO, KEY> element_type ;
  public : cElementTableMethodesAimplementer <INFO, KEY> * mRoot ;
  public : cElementTableMethodesAimplementer <INFO, KEY> * mFirstItem ;
  public : cElementTableMethodesAimplementer <INFO, KEY> * mLastItem ;
  private : sint32 mListLength ;
  public : inline sint32 getCount (void) const {
    return mListLength ;
  }
  public : sint32 * mReferenceCountPtr ;

  public : cTableMethodesAimplementer (void) ; // Default Constructor
  public : virtual ~cTableMethodesAimplementer (void) ;

//--- Gérer la duplication
  public : cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO, KEY> &) ; // Copy constructor
  public : void operator = (const cTableMethodesAimplementer <INFO, KEY> &) ; // Assignment operator

  public : inline virtual bool isBuilt (void) const {
    return mReferenceCountPtr != NULL ;
  }
  public : void drop_operation (void) ;
  protected : void insulateMap (void) ;

//--- Handle 'new' constructor
  public : static cTableMethodesAimplementer <INFO, KEY> constructor_empty (void) ;

  public : sint32 insertAbstract (C_lexique & inLexique,
                                  const INFO & info,
                                  const KEY & clef,
                                  const char * messageErreurInsertion) ;

  public : sint32 insertNotAbstract (C_lexique & inLexique,
                                     const INFO & info,
                                     const KEY & clef,
                                     const char * messageErreurInsertion) ;

  private : void internalInsert (const INFO & info,
                                 const KEY & clef,
                                 sint32 & numero, // renvoie -1 si erreur
                                 const bool estAbstraite,
                                 cElementTableMethodesAimplementer <INFO, KEY> * & racine) ;
} ;

//---------------------------------------------------------------------------*

#endif
