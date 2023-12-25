#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                  class GALGAS_lstringlist & ioArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const class GALGAS_usefulEntitiesGraph constinArgument0,
                                              const class GALGAS_lstringlist constinArgument1,
                                              const class GALGAS_string constinArgument2,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const class GALGAS_location & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const class GALGAS_location & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (const class GALGAS_lstring constinArgument0,
                                                                                                   class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                                   const class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                                                                   const class GALGAS_analysisContext constinArgument3,
                                                                                                   class GALGAS_unifiedTypeMap & ioArgument4,
                                                                                                   class GALGAS_localVarManager & ioArgument5,
                                                                                                   const class GALGAS_lstring constinArgument6,
                                                                                                   const class GALGAS_lstring constinArgument7,
                                                                                                   const class GALGAS_actualOutputExpressionList constinArgument8,
                                                                                                   const class GALGAS_location constinArgument9,
                                                                                                   class GALGAS_unifiedTypeMapEntry & outArgument10,
                                                                                                   class GALGAS_unifiedTypeMapEntry & outArgument11,
                                                                                                   class GALGAS_semanticExpressionListForGeneration & outArgument12,
                                                                                                   class GALGAS_bool & outArgument13,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                               const class GALGAS_location constinArgument2,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GALGAS_lstring constinArgument0,
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

