#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'kForbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_kForbiddenKeysForStruct (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeOptionalTypeName (const class GGS_string & constinArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeEmbeddedElementTypeName (const class GGS_string & constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedElementTypeLName (const class GGS_lstring & constinArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'kForbiddenKeysForMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_kForbiddenKeysForMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const class GGS_lstring constinArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const class GGS_string constinArgument0,
                                                                              const class GGS_string constinArgument1,
                                                                              const class GGS_wrapperExtensionMap constinArgument2,
                                                                              const class GGS_wrapperExtensionMap constinArgument3,
                                                                              class GGS_wrapperFileMap & outArgument4,
                                                                              class GGS_wrapperDirectoryMap & outArgument5,
                                                                              class GGS_u_33__32_ & ioArgument6,
                                                                              class GGS_u_33__32_ & ioArgument7,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const class GGS_lstring constinArgument0,
                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                      const class GGS_templateAnalysisContext constinArgument2,
                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                      const class GGS__5B_templateInstructionAST_5D_ constinArgument4,
                                                                      class GGS__5B_templateInstructionForGeneration_5D_ & ioArgument5,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const class GGS_wrapperFileMap constinArgument0,
                                                                     const class GGS_wrapperDirectoryMap constinArgument1,
                                                                     class GGS__5B_string_5D_ & ioArgument2,
                                                                     class GGS__5B_string_5D_ & ioArgument3,
                                                                     class GGS__5B_string_5D_ & ioArgument4,
                                                                     class GGS__5B_string_5D_ & ioArgument5,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                              const class GGS_string constinArgument1,
                                                              const class GGS_u_33__32_ constinArgument2,
                                                              const class GGS_wrapperFileMap constinArgument3,
                                                              const class GGS_wrapperDirectoryMap constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const class GGS__5B_templateInstructionForGeneration_5D_ constinArgument0,
                                                                               class GGS_string & ioArgument1,
                                                                               class GGS_stringset & ioArgument2,
                                                                               class GGS_u_33__32_ & ioArgument3,
                                                                               class GGS_stringset & ioArgument4,
                                                                               class GGS_bool & ioArgument5,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const class GGS_string constinArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const class GGS_string constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

