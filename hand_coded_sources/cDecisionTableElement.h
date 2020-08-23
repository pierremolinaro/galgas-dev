//----------------------------------------------------------------------------------------------------------------------
//
//     Class for SLR and LR1 grammar computations                                                
//
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.
//
//  e-mail : pcmolinaro@free.fr
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_machine.h"

//----------------------------------------------------------------------------------------------------------------------

class cDecisionTableElement {
  private : int32_t mParameter ;
  public : inline int32_t parameter (void) const { return mParameter ; }

  public : typedef enum {kUndefinedState, kDecisionShift, kDecisionReduce, kDecisionAccept} enumDecision ;
  private : enumDecision mDecision ;
  public : inline enumDecision decision (void) const { return mDecision ; }

  public : inline bool isInUndefinedState (void) const {
    return mDecision == kUndefinedState ;
  }

  public : cDecisionTableElement (void) ;

  public : cDecisionTableElement (const cDecisionTableElement & inSource) ;

  public : cDecisionTableElement & operator = (const cDecisionTableElement & inSource) ;

  private : cDecisionTableElement (const int32_t inParameter, const enumDecision inDecision) ;
  
  public : static cDecisionTableElement shiftDecision (const int32_t inNextState) ;

  public : static cDecisionTableElement reduceDecision (const int32_t inReduceProduction) ;

  public : static cDecisionTableElement acceptDecision (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
