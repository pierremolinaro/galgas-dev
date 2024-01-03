//--------------------------------------------------------------------------------------------------
//
//     Class for SLR and LR1 grammar computations                                                
//
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "M_machine.h"

//--------------------------------------------------------------------------------------------------

class cDecisionTableElement {
  private: int32_t mParameter ;
  public: inline int32_t parameter (void) const { return mParameter ; }

  public: typedef enum {kUndefinedState, kDecisionShift, kDecisionReduce, kDecisionAccept} enumDecision ;
  private: enumDecision mDecision ;
  public: inline enumDecision decision (void) const { return mDecision ; }

  public: inline bool isInUndefinedState (void) const {
    return mDecision == kUndefinedState ;
  }

  public: cDecisionTableElement (void) ;

  public: cDecisionTableElement (const cDecisionTableElement & inSource) ;

  public: cDecisionTableElement & operator = (const cDecisionTableElement & inSource) ;

  private: cDecisionTableElement (const int32_t inParameter, const enumDecision inDecision) ;
  
  public: static cDecisionTableElement shiftDecision (const int32_t inNextState) ;

  public: static cDecisionTableElement reduceDecision (const int32_t inReduceProduction) ;

  public: static cDecisionTableElement acceptDecision (void) ;
} ;

//--------------------------------------------------------------------------------------------------
