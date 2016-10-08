#ifndef all_2D_declarations_2D__32__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'generatePredefinedTypeFiles'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePredefinedTypeFiles (const class GALGAS_string constinArgument0,
                                          const class GALGAS_semanticDeclarationListForGeneration constinArgument1,
                                          class GALGAS_stringlist & ioArgument2,
                                          class GALGAS_stringlist & ioArgument3,
                                          class GALGAS_stringset & ioArgument4,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'semanticFileGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                     const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendPredefinedListTypeAST'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                          const class GALGAS_string constinArgument1,
                                          class GALGAS_lstringlist & ioArgument2,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'insertInUsefulnessEntities'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_insertInUsefulnessEntities (class GALGAS_lstringlist & ioArgument0,
                                         const class GALGAS_string constinArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2StringListTypeAST'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_StringListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                    class GALGAS_lstringlist & ioArgument1,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2LStringListTypeAST'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_LStringListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                     class GALGAS_lstringlist & ioArgument1,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendStructASTForTypeWithLocation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForTypeWithLocation (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class GALGAS_lstringlist & ioArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendStructASTForRangeType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForRangeType (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                          class GALGAS_lstringlist & ioArgument1,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'appendPredefinedTypesASTs'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedTypesASTs (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                        class GALGAS_lstringlist & ioArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkUsefulEntities'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkUsefulEntities (const class GALGAS_usefulEntitiesGraph constinArgument0,
                                  const class GALGAS_lstringlist constinArgument1,
                                  const class GALGAS_string constinArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'afterNameForUsefulEntitiesGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const class GALGAS_location & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'beforeNameForUsefulEntitiesGraph'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const class GALGAS_location & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'rootRuleNameForUsefulEntitiesGraph'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_lstring constinArgument0,
                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                               const class GALGAS_analysisContext constinArgument2,
                                               const class GALGAS_semanticExpressionAST constinArgument3,
                                               const class GALGAS_semanticExpressionAST constinArgument4,
                                               const class GALGAS_fixitListAST constinArgument5,
                                               const class GALGAS_location constinArgument6,
                                               const class GALGAS_string constinArgument7,
                                               class GALGAS_variableMap & ioArgument8,
                                               class GALGAS_semanticExpressionForGeneration & outArgument9,
                                               class GALGAS_semanticExpressionForGeneration & outArgument10,
                                               class GALGAS_fixitListForGeneration & outArgument11,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

#endif
