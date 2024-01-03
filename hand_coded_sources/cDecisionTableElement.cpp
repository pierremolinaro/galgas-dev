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

#include "cDecisionTableElement.h"

//--------------------------------------------------------------------------------------------------
//
// L R 0    D E C I S I O N    T A B L E    E L E M E N T                                        
//
//--------------------------------------------------------------------------------------------------

cDecisionTableElement::cDecisionTableElement (void) :
mParameter (0),
mDecision (kUndefinedState) {
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement::cDecisionTableElement (const cDecisionTableElement & inSource) :
mParameter (inSource.mParameter),
mDecision (inSource.mDecision) {
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement & cDecisionTableElement::operator = (const cDecisionTableElement & inSource) {
  mParameter = inSource.mParameter ;
  mDecision = inSource.mDecision ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement::cDecisionTableElement (const int32_t inParameter, const enumDecision inDecision) :
mParameter (inParameter),
mDecision (inDecision) {
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement cDecisionTableElement::shiftDecision (const int32_t inNextState) {
  cDecisionTableElement d (inNextState, kDecisionShift) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement cDecisionTableElement::reduceDecision (const int32_t inReduceProduction) {
  cDecisionTableElement d (inReduceProduction, kDecisionReduce) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------

cDecisionTableElement cDecisionTableElement::acceptDecision (void) {
  cDecisionTableElement d (0, kDecisionAccept) ;
  return d ;
}

//--------------------------------------------------------------------------------------------------
