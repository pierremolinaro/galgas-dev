#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                   const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                   const class GALGAS_location constinArgument2,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_lstring constinArgument0,
                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                               const class GALGAS_analysisContext constinArgument2,
                                               class GALGAS_unifiedTypeMap & ioArgument3,
                                               const class GALGAS_semanticExpressionAST constinArgument4,
                                               const class GALGAS_semanticExpressionAST constinArgument5,
                                               const class GALGAS_fixitListAST constinArgument6,
                                               const class GALGAS_location constinArgument7,
                                               const class GALGAS_string constinArgument8,
                                               class GALGAS_localVarManager & ioArgument9,
                                               class GALGAS_semanticExpressionForGeneration & outArgument10,
                                               class GALGAS_semanticExpressionForGeneration & outArgument11,
                                               class GALGAS_fixitListForGeneration & outArgument12,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const class GALGAS_lstring constinArgument0,
                                        class GALGAS_usefulEntitiesGraph & ioArgument1,
                                        const class GALGAS_analysisContext constinArgument2,
                                        class GALGAS_unifiedTypeMap & ioArgument3,
                                        class GALGAS_localVarManager & ioArgument4,
                                        const class GALGAS_semanticExpressionAST constinArgument5,
                                        const class GALGAS_lstring constinArgument6,
                                        const class GALGAS_optionalMethodActualArgumentList constinArgument7,
                                        class GALGAS_ifTestListForGeneration & ioArgument8,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

