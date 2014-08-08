//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Class for SLR and LR1 grammar computations                            *
//                                                                                                                     *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//   more details.                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "cDecisionTableElement.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// L R 0    D E C I S I O N    T A B L E    E L E M E N T                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement::cDecisionTableElement (void) :
mParameter (0),
mDecision (kUndefinedState) {
}

//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement::
cDecisionTableElement (const cDecisionTableElement & inSource) :
mParameter (inSource.mParameter),
mDecision (inSource.mDecision) {
}

//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement::
cDecisionTableElement (const int32_t inParameter, const enumDecision inDecision) :
mParameter (inParameter),
mDecision (inDecision) {
}

//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement cDecisionTableElement::
shiftDecision (const int32_t inNextState) {
  cDecisionTableElement d (inNextState, kDecisionShift) ;
  return d ;
}

//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement cDecisionTableElement::
reduceDecision (const int32_t inReduceProduction) {
  cDecisionTableElement d (inReduceProduction, kDecisionReduce) ;
  return d ;
}

//---------------------------------------------------------------------------------------------------------------------*

cDecisionTableElement cDecisionTableElement::acceptDecision (void) {
  cDecisionTableElement d (0, kDecisionAccept) ;
  return d ;
}

//---------------------------------------------------------------------------------------------------------------------*
