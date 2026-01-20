//--------------------------------------------------------------------------------------------------
//
//  Class for SLR and LR1 grammar computations
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

#include "DecisionTableElement.h"

//--------------------------------------------------------------------------------------------------
//
// L R 0    D E C I S I O N    T A B L E    E L E M E N T                                        
//
//--------------------------------------------------------------------------------------------------

DecisionTableElement::DecisionTableElement (void) :
mParameter (0),
mDecision (kUndefinedState) {
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement::DecisionTableElement (const DecisionTableElement & inSource) :
mParameter (inSource.mParameter),
mDecision (inSource.mDecision) {
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement & DecisionTableElement::operator = (const DecisionTableElement & inSource) {
  mParameter = inSource.mParameter ;
  mDecision = inSource.mDecision ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement::DecisionTableElement (const int32_t inParameter, const enumDecision inDecision) :
mParameter (inParameter),
mDecision (inDecision) {
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement DecisionTableElement::shiftDecision (const int32_t inNextState) {
  DecisionTableElement d (inNextState, kDecisionShift) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement DecisionTableElement::reduceDecision (const int32_t inReduceProduction) {
  DecisionTableElement d (inReduceProduction, kDecisionReduce) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------

DecisionTableElement DecisionTableElement::acceptDecision (void) {
  DecisionTableElement d (0, kDecisionAccept) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------
