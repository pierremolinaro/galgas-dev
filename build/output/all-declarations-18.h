#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRuleVertically'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                            const class GALGAS_string constin_inSyntaxCompnentName,
                                            class GALGAS_string & io_ioGeneratedCode,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_escapeForTex (const class GALGAS_string & constinArgument0,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

