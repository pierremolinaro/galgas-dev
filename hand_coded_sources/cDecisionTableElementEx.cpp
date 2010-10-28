//---------------------------------------------------------------------------*
//                                                                           *
//     Class for SLR and LR1 grammar computations                            *
//                                                                           *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.                           *
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
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#include "cDecisionTableElementEx.h"

//---------------------------------------------------------------------------*
//                                                                           *
// L R 0    D E C I S I O N    T A B L E    E L E M E N T                    *
//                                                                           *
//---------------------------------------------------------------------------*

cDecisionTableElementEx::cDecisionTableElementEx (void) :
mParameter (0),
mDecision (kUndefinedState) {
}

//---------------------------------------------------------------------------*

cDecisionTableElementEx::
cDecisionTableElementEx (const cDecisionTableElementEx & inSource) :
mParameter (inSource.mParameter),
mDecision (inSource.mDecision) {
}

//---------------------------------------------------------------------------*

cDecisionTableElementEx::
cDecisionTableElementEx (const PMSInt32 inParameter, const enumDecision inDecision) :
mParameter (inParameter),
mDecision (inDecision) {
}

//---------------------------------------------------------------------------*

cDecisionTableElementEx cDecisionTableElementEx::
shiftDecision (const PMSInt32 inNextState) {
  cDecisionTableElementEx d (inNextState, kDecisionShift) ;
  return d ;
}

//---------------------------------------------------------------------------*

cDecisionTableElementEx cDecisionTableElementEx::
reduceDecision (const PMSInt32 inReduceProduction) {
  cDecisionTableElementEx d (inReduceProduction, kDecisionReduce) ;
  return d ;
}

//---------------------------------------------------------------------------*

cDecisionTableElementEx cDecisionTableElementEx::acceptDecision (void) {
  cDecisionTableElementEx d (0, kDecisionAccept) ;
  return d ;
}

//---------------------------------------------------------------------------*
