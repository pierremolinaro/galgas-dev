/*
 *  enterPragma.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 04/04/11.
 *  Copyright 2011 IRCCyN. All rights reserved.
 *
 */

//---------------------------------------------------------------------------*

#include "semanticInstructionsAnalysis.h"
#include "C_Compiler.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                           Routine 'enterPragma'                           *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_enterPragma (const GALGAS_lstring inPragmaName,
                          const GALGAS_lstring inPragmaArgument,
                          C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  inCompiler->enterPragma (inPragmaName, inPragmaArgument COMMA_THERE) ;
}

//---------------------------------------------------------------------------*
