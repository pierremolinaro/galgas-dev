//-----------------------------------------------------------------------------*
//                                                                             *
//     Class for SLR and LR1 grammar computations                            *
//                                                                             *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//   more details.                                                           *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef C_DECISION_TABLE_ELEMENT_DEFINED
#define C_DECISION_TABLE_ELEMENT_DEFINED

//-----------------------------------------------------------------------------*

#include "utilities/M_machine.h"

//-----------------------------------------------------------------------------*

class cDecisionTableElement {
  private : PMSInt32 mParameter ;
  public : inline PMSInt32 parameter (void) const { return mParameter ; }

  public : typedef enum {kUndefinedState, kDecisionShift, kDecisionReduce, kDecisionAccept} enumDecision ;
  private : enumDecision mDecision ;
  public : inline enumDecision decision (void) const { return mDecision ; }

  public : inline bool isInUndefinedState (void) const {
    return mDecision == kUndefinedState ;
  }

  public : cDecisionTableElement (void) ;

  public : cDecisionTableElement (const cDecisionTableElement & inSource) ;

  private : cDecisionTableElement (const PMSInt32 inParameter, const enumDecision inDecision) ;
  
  public : static cDecisionTableElement shiftDecision (const PMSInt32 inNextState) ;

  public : static cDecisionTableElement reduceDecision (const PMSInt32 inReduceProduction) ;

  public : static cDecisionTableElement acceptDecision (void) ;
} ;

//-----------------------------------------------------------------------------*

#endif
