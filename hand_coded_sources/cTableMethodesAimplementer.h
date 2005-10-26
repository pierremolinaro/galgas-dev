//---------------------------------------------------------------------------*
//                                                                           *
//                     Tables g�n�riques de m�thodes                         *
//                                                                           *
//---------------------------------------------------------------------------*
//                                                                           *
//  La table g�n�rique 'cTableMethodesAimplementer' r�alise :                *
//     - l'insertion des symboles, avec d�clenchement d'erreur si le symbole *
//       est d�j� dans la table ; l'ordre d'insertion est m�moris� dans une  *
//       liste cha�n�e ;                                                     * 
//     - la recherche des symbole, avec d�clenchement d'erreur si le symbole *
//       n'est pas dans la table ;                                           *
//                                                                           *
//---------------------------------------------------------------------------*
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

#ifndef TABLE_METHODES_A_IMPLEMENTER_DEFINIE
#define TABLE_METHODES_A_IMPLEMENTER_DEFINIE

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//        classe �l�ment table 'cElementTableMethodesAimplementer'           *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cTableMethodesAimplementer ;

template <typename INFO> class cElementTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO> element_type ;
  private : cElementTableMethodesAimplementer <INFO> * mNextItem ;
  public : cElementTableMethodesAimplementer <INFO> * mInfPtr ;
  public : cElementTableMethodesAimplementer <INFO> * mSupPtr ;
  public : GGS_lstring mKey ;
  public : INFO mInfo ;
  public : const bool champEstAbstraite ;
  public : const sint32 mEntryIndex ;
  public : inline element_type * nextObject (void) const { return mNextItem ; }
  public : cElementTableMethodesAimplementer (const INFO & info,
                                              const GGS_lstring & clef,
                                              const sint32 numeroElement,
                                              const bool estAbstraite) ;
  public : ~cElementTableMethodesAimplementer (void) ;

//--- Protection contre la duplication
  private : cElementTableMethodesAimplementer (const cElementTableMethodesAimplementer <INFO> &) ;
  private : void operator = (const cElementTableMethodesAimplementer <INFO> &) ;
  friend class cTableMethodesAimplementer <INFO> ;

} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Table 'cTableMethodesAimplementer'                    *
//                                                                           *
//---------------------------------------------------------------------------*

template <typename INFO> class cTableMethodesAimplementer {
  public : typedef cElementTableMethodesAimplementer <INFO> element_type ;
  public : cElementTableMethodesAimplementer <INFO> * mRoot ;
  public : cElementTableMethodesAimplementer <INFO> * mFirstItem ;
  public : cElementTableMethodesAimplementer <INFO> * mLastItem ;
  private : sint32 mListLength ;
  public : inline sint32 count (void) const {
    return mListLength ;
  }
  public : sint32 * mReferenceCountPtr ;

  public : cTableMethodesAimplementer (void) ; // Default Constructor
  public : virtual ~cTableMethodesAimplementer (void) ;

//--- G�rer la duplication
  public : cTableMethodesAimplementer (const cTableMethodesAimplementer <INFO> &) ; // Copy constructor
  public : void operator = (const cTableMethodesAimplementer <INFO> &) ; // Assignment operator

  public : inline virtual bool isBuilt (void) const {
    return mReferenceCountPtr != NULL ;
  }
  public : void build (void) ;
  public : void drop_operation (void) ;
  protected : void insulateMap (void) ;

  public : sint32 insertAbstract (C_Lexique & inLexique,
                                  const INFO & info,
                                  const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                  const char * messageErreurInsertion) ;

  public : sint32 insertNotAbstract (C_Lexique & inLexique,
                                     const INFO & info,
                                     const GGS_lstring & clef,
                                         const GGS_location & inLocation,
                                     const char * messageErreurInsertion) ;

  private : void internalInsert (const INFO & info,
                                 const GGS_lstring & clef,
                                 sint32 & numero, // renvoie -1 si erreur
                                 const bool estAbstraite,
                                 cElementTableMethodesAimplementer <INFO> * & racine) ;
} ;

//---------------------------------------------------------------------------*

#endif
