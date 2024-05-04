#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                              const class GGS_string constinArgument1,
                                                              const class GGS_uint constinArgument2,
                                                              const class GGS_wrapperFileMap constinArgument3,
                                                              const class GGS_wrapperDirectoryMap constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const class GGS_string constinArgument0,
                                                              const class GGS_semanticDeclarationListForGeneration constinArgument1,
                                                              class GGS_stringlist & ioArgument2,
                                                              class GGS_stringlist & ioArgument3,
                                                              class GGS_stringset & ioArgument4,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (class Compiler * inCompiler,
                                                                                  const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                  const class GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (class Compiler * inCompiler,
                                                                                          const class GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const class GGS_usefulEntitiesGraph constinArgument0,
                                              const class GGS_lstringlist constinArgument1,
                                              const class GGS_string constinArgument2,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_afterNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_beforeNameForUsefulEntitiesGraph (const class GGS_location & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                       class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                       const class GGS_unifiedTypeMapEntry constinArgument2,
                                                                                                       const class GGS_analysisContext constinArgument3,
                                                                                                       class GGS_unifiedTypeMap & ioArgument4,
                                                                                                       class GGS_localVarManager & ioArgument5,
                                                                                                       const class GGS_lstring constinArgument6,
                                                                                                       const class GGS_lstring constinArgument7,
                                                                                                       const class GGS_actualOutputArgumentList constinArgument8,
                                                                                                       const class GGS_location constinArgument9,
                                                                                                       class GGS_unifiedTypeMapEntry & outArgument10,
                                                                                                       class GGS_unifiedTypeMapEntry & outArgument11,
                                                                                                       class GGS_semanticExpressionListForGeneration & outArgument12,
                                                                                                       class GGS_bool & outArgument13,
                                                                                                       class GGS__5B_unifiedTypeMapEntry_5D_ & outArgument14,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                           class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                           const class GGS_unifiedTypeMapEntry constinArgument2,
                                                                                           const class GGS_analysisContext constinArgument3,
                                                                                           class GGS_unifiedTypeMap & ioArgument4,
                                                                                           class GGS_localVarManager & ioArgument5,
                                                                                           const class GGS_lstring constinArgument6,
                                                                                           const class GGS_actualOutputArgumentList constinArgument7,
                                                                                           const class GGS_location constinArgument8,
                                                                                           class GGS_unifiedTypeMapEntry & outArgument9,
                                                                                           class GGS_lstring & outArgument10,
                                                                                           class GGS_semanticExpressionListForGeneration & outArgument11,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                               const class GGS_unifiedTypeMapEntry constinArgument1,
                                               const class GGS_location constinArgument2,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                   const class GGS_analysisContext constinArgument2,
                                                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                                                   const class GGS_semanticExpressionAST constinArgument4,
                                                                                                   const class GGS_semanticExpressionAST constinArgument5,
                                                                                                   const class GGS_fixitListAST constinArgument6,
                                                                                                   const class GGS_location constinArgument7,
                                                                                                   const class GGS_string constinArgument8,
                                                                                                   class GGS_localVarManager & ioArgument9,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument10,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument11,
                                                                                                   class GGS_fixitListForGeneration & outArgument12,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

