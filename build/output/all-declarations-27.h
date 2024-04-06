#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const class GALGAS_string & constinArgument0,
                                                                                             const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const class GALGAS_wrapperFileMap constinArgument0,
                                                                     const class GALGAS_wrapperDirectoryMap constinArgument1,
                                                                     class GALGAS_stringlist & ioArgument2,
                                                                     class GALGAS_stringlist & ioArgument3,
                                                                     class GALGAS_stringlist & ioArgument4,
                                                                     class GALGAS_stringlist & ioArgument5,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const class GALGAS_string constinArgument0,
                                                              const class GALGAS_string constinArgument1,
                                                              const class GALGAS_uint constinArgument2,
                                                              const class GALGAS_wrapperFileMap constinArgument3,
                                                              const class GALGAS_wrapperDirectoryMap constinArgument4,
                                                              class GALGAS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const class GALGAS_string constinArgument0,
                                                              const class GALGAS_semanticDeclarationListForGeneration constinArgument1,
                                                              class GALGAS_stringlist & ioArgument2,
                                                              class GALGAS_stringlist & ioArgument3,
                                                              class GALGAS_stringset & ioArgument4,
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

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (class Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                     const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (class Compiler * inCompiler,
                                                                                             const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
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

