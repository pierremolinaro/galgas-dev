#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                   const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                   const class GALGAS_location constinArgument2,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_lstring constinArgument0,
                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                               const class GALGAS_analysisContext constinArgument2,
                                               const class GALGAS_semanticExpressionAST constinArgument3,
                                               const class GALGAS_semanticExpressionAST constinArgument4,
                                               const class GALGAS_fixitListAST constinArgument5,
                                               const class GALGAS_location constinArgument6,
                                               const class GALGAS_string constinArgument7,
                                               class GALGAS_localVarManager & ioArgument8,
                                               class GALGAS_semanticExpressionForGeneration & outArgument9,
                                               class GALGAS_semanticExpressionForGeneration & outArgument10,
                                               class GALGAS_fixitListForGeneration & outArgument11,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const class GALGAS_lstring constinArgument0,
                                        class GALGAS_usefulEntitiesGraph & ioArgument1,
                                        const class GALGAS_analysisContext constinArgument2,
                                        class GALGAS_localVarManager & ioArgument3,
                                        const class GALGAS_semanticExpressionAST constinArgument4,
                                        const class GALGAS_lstring constinArgument5,
                                        const class GALGAS_optionalMethodActualArgumentList constinArgument6,
                                        class GALGAS_ifTestListForGeneration & ioArgument7,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

