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
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
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

#ifndef TABLE_METHODES_A_IMPLEMENTER_DEFINIE
#define TABLE_METHODES_A_IMPLEMENTER_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas-utilities/C_Lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe element table 'cElementTableMethodesAimplementer'           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cTableMethodesAimplementer ;

template <typename INFO> class cElementTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO> cElement ;
  private : cElementTableMethodesAimplementer <INFO> * mNextItem ;
  public : cElementTableMethodesAimplementer <INFO> * mInfPtr ;
  public : cElementTableMethodesAimplementer <INFO> * mSupPtr ;
  public : GGS_lstring mKey ;
  public : INFO mInfo ;
  public : const bool champEstAbstraite ;
  public : const PMSInt32 mEntryIndex ;
  public : inline cElement * nextObject (void) const { return mNextItem ; }
  public : cElementTableMethodesAimplementer (const INFO & info,
                                              const GGS_lstring & clef,
                                              const PMSInt32 numeroElement,
                                              const bool estAbstraite) ;
  public : ~cElementTableMethodesAimplementer (void) ;

//--- Protection contre la duplication
  private : cElementTableMethodesAimplementer (const cElementTableMethodesAimplementer <INFO> &) ;
  private : cElementTableMethodesAimplementer <INFO> & operator = (const cElementTableMethodesAimplementer <INFO> &) ;
  friend class cTableMethodesAimplementer <INFO> ;

} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO> cElement ;
  public : cElementTableMethodesAimplementer <INFO> * mRoot ;
  public : cElementTableMethodesAimplementer <INFO> * mFirstItem ;
  public : cElementTableMethodesAimplementer <INFO> * mLastItem ;
  private : PMSInt32 mListLength ;
  public : PMSInt32 count (void) const ;
  public : PMSInt32 * mReferenceCountPtr ;

  public : cTableMethodesAimplementer (void) ; // Default Constructor
  public : virtual ~cTableMethodesAimplementer (void) ;

//--- Gerer la duplication
  public : cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO> &) ; // Copy constructor
  public : cTableMethodesAimplementer <INFO> & operator = (const cTableMethodesAimplementer <INFO> &) ; // Assignment operator

  public : bool isBuilt (void) const ;
  public : void build (void) ;
  public : void drop (void) ;
  protected : void insulateMap (void) ;

  public : PMSInt32 insertAbstract (C_Compiler & inLexique,
                                  const INFO & info,
                                  const GGS_lstring & clef,
                                  const GGS_location & inLocation,
                                  const char * messageErreurInsertion
                                  COMMA_LOCATION_ARGS) ;

  public : PMSInt32 insertNotAbstract (C_Compiler & inLexique,
                                     const INFO & info,
                                     const GGS_lstring & clef,
                                     const GGS_location & inLocation,
                                     const char * messageErreurInsertion
                                     COMMA_LOCATION_ARGS) ;

  private : void internalRecursiveInsert (const INFO & info,
                                 const GGS_lstring & clef,
                                 PMSInt32 & numero, // renvoie -1 si erreur
                                 const bool estAbstraite,
                                 cElementTableMethodesAimplementer <INFO> * & racine) ;
} ;

//---------------------------------------------------------------------------*

#endif
