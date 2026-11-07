#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

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
//Routine 'compileSemanticDeclarationsGalgas&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F__3F__3F__21__21__21_ (class GGS_lstringlist & ioArgument0,
                                                                                class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                const class GGS_string constinArgument2,
                                                                                const class GGS_location constinArgument3,
                                                                                const class GGS_galgasDeclarationAST constinArgument4,
                                                                                class GGS_semanticContext & outArgument5,
                                                                                class GGS_unifiedTypeMap & outArgument6,
                                                                                class GGS__5B_semanticDeclarationForGeneration_5D_ & outArgument7,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypes function_buildPredefinedTypes (const class GGS_unifiedTypeMap & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (class GGS_semanticDeclarationListAST & ioArgument0,
                                                class GGS_lstringlist & ioArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext??!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__21__21__21_ (const class GGS_galgasDeclarationAST constinArgument0,
                                                             const class GGS_location constinArgument1,
                                                             class GGS_semanticContext & outArgument2,
                                                             class GGS_unifiedTypeMap & outArgument3,
                                                             class GGS_semanticDeclarationListAST & outArgument4,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                      const class GGS_string constinArgument1,
                                                                                      const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                                      class GGS_stringlist & ioArgument3,
                                                                                      class GGS_stringlist & ioArgument4,
                                                                                      class GGS_stringlist & ioArgument5,
                                                                                      class GGS_stringset & ioArgument6,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                   const class GGS_string constinArgument1,
                                                                                   const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                                   class GGS_stringlist & ioArgument3,
                                                                                   class GGS_stringset & ioArgument4,
                                                                                   class GGS_stringlist & ioArgument5,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                 const class GGS_string constinArgument1,
                                                                 const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                 class GGS_stringlist & ioArgument3,
                                                                 class GGS_stringset & ioArgument4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                  const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument1,
                                                  class GGS_stringset & ioArgument2,
                                                  class GGS_stringlist & ioArgument3,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument2,
                                                                  class GGS_stringlist & ioArgument3,
                                                                  class GGS_stringset & ioArgument4,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                   const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument1,
                                                   class GGS_stringset & ioArgument2,
                                                   class GGS_stringlist & ioArgument3,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const class GGS_headerCompositionMap constinArgument0,
                                              const class GGS_string constinArgument1,
                                              const class GGS_string constinArgument2,
                                              class GGS_headerRepartitionMap & ioArgument3,
                                              class GGS_string & ioArgument4,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'definitionGroupAmount'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint function_definitionGroupAmount (class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkBigInteger'
//
//--------------------------------------------------------------------------------------------------

void routine_checkBigInteger (class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayUnicodeLexicalTestFunctions'
//
//--------------------------------------------------------------------------------------------------

void routine_displayUnicodeLexicalTestFunctions (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject??'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_ (const class GGS_lstring constinArgument0,
                                             const class GGS_string constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject???'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F__3F__3F_ (const class GGS_lstring constinArgument0,
                                         const class GGS_string constinArgument1,
                                         const class GGS_galgas_33_ProjectComponentAST constinArgument2,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_typeDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate typeDump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (class Compiler * inCompiler,
                                                                    const class GGS_string & in_PROJECT_5F_NAME,
                                                                    const class GGS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                    const class GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                    const class GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_linkForType (const class GGS_string & constinArgument0,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const class GGS_galgasGUIComponentListAST constinArgument0,
                                                                  const class GGS_semanticContext constinArgument1,
                                                                  class GGS_optionComponentMapForGeneration & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (class GGS_lstringlist & ioArgument0,
                                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                    const class GGS_prologueEpilogueList constinArgument2,
                                                                                    const class GGS_programRuleList constinArgument3,
                                                                                    const class GGS_prologueEpilogueList constinArgument4,
                                                                                    const class GGS_semanticContext constinArgument5,
                                                                                    class GGS_unifiedTypeMap & ioArgument6,
                                                                                    const class GGS_string constinArgument7,
                                                                                    class GGS_programComponentForGeneration & outArgument8,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const class GGS_galgas_33_SyntaxComponentListAST constinArgument0,
                                                          const class GGS_syntaxExtensions constinArgument1,
                                                          class GGS_semanticDeclarationListAST & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (class GGS_unifiedTypeMap & ioArgument0,
                                                              const class GGS_semanticDeclarationListAST constinArgument1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName??????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (const class GGS_unifiedTypeMap constinArgument0,
                                                                                                                const class GGS_string constinArgument1,
                                                                                                                const class GGS_string constinArgument2,
                                                                                                                const class GGS_optionComponentMapForGeneration constinArgument3,
                                                                                                                const class GGS_stringlist constinArgument4,
                                                                                                                const class GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument5,
                                                                                                                const class GGS_programRuleList constinArgument6,
                                                                                                                const class GGS_galgas_33_ProjectComponentAST constinArgument7,
                                                                                                                const class GGS_string constinArgument8,
                                                                                                                const class GGS_string constinArgument9,
                                                                                                                const class GGS_stringlist constinArgument10,
                                                                                                                const class GGS_stringlist constinArgument11,
                                                                                                                const class GGS_stringlist constinArgument12,
                                                                                                                class Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_swift (const class GGS_optionComponentMapForGeneration constinArgument0,
                                                                      const class GGS_string constinArgument1,
                                                                      const class GGS_bool constinArgument2,
                                                                      class GGS_stringlist & ioArgument3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const class GGS_galgasGUIComponentListAST_2E_element constinArgument0,
                                                       const class GGS_semanticContext constinArgument1,
                                                       class GGS_optionComponentMapForGeneration & ioArgument2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (class Compiler * inCompiler,
                                                                                        const class GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const class GGS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                       class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                       const class GGS_analysisContext constinArgument2,
                                                                                                       class GGS_unifiedTypeMap & ioArgument3,
                                                                                                       const class GGS_bool constinArgument4,
                                                                                                       const class GGS_terminalMap constinArgument5,
                                                                                                       const class GGS_string constinArgument6,
                                                                                                       const class GGS_nonterminalMap constinArgument7,
                                                                                                       const class GGS_string constinArgument8,
                                                                                                       const class GGS_syntaxInstructionList constinArgument9,
                                                                                                       const class GGS_location constinArgument10,
                                                                                                       const class GGS_stringset constinArgument11,
                                                                                                       class GGS_localVarManager & ioArgument12,
                                                                                                       class GGS_uint & ioArgument13,
                                                                                                       class GGS_semanticInstructionListForGeneration & outArgument14,
                                                                                                       class Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_compareSyntaxSignature (const class GGS_semanticInstructionListForGeneration & constinArgument0,
                                                const class GGS_semanticInstructionListForGeneration & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_bool constinArgument2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (class GGS_instanceMethodMap & ioArgument0,
                                                                                                                 class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                 const class GGS_string constinArgument2,
                                                                                                                 const class GGS_string constinArgument3,
                                                                                                                 const class GGS_string constinArgument4,
                                                                                                                 const class GGS_bool constinArgument5,
                                                                                                                 class Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_bool constinArgument5,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                    class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                    const class GGS_string constinArgument2,
                                                                                                                                                    const class GGS_string constinArgument3,
                                                                                                                                                    const class GGS_string constinArgument4,
                                                                                                                                                    const class GGS_string constinArgument5,
                                                                                                                                                    const class GGS_bool constinArgument6,
                                                                                                                                                    class Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                               class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                               const class GGS_string constinArgument2,
                                                                                                                                               const class GGS_string constinArgument3,
                                                                                                                                               const class GGS_string constinArgument4,
                                                                                                                                               const class GGS_string constinArgument5,
                                                                                                                                               const class GGS_bool constinArgument6,
                                                                                                                                               class Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                      class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                      const class GGS_string constinArgument2,
                                                                                                                      const class GGS_string constinArgument3,
                                                                                                                      const class GGS_string constinArgument4,
                                                                                                                      const class GGS_string constinArgument5,
                                                                                                                      const class GGS_string constinArgument6,
                                                                                                                      const class GGS_string constinArgument7,
                                                                                                                      const class GGS_bool constinArgument8,
                                                                                                                      class Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                              class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                              const class GGS_string constinArgument2,
                                                                                                                              const class GGS_string constinArgument3,
                                                                                                                              const class GGS_string constinArgument4,
                                                                                                                              const class GGS_bool constinArgument5,
                                                                                                                              class Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                const class GGS_string constinArgument2,
                                                                                                                                                const class GGS_string constinArgument3,
                                                                                                                                                const class GGS_string constinArgument4,
                                                                                                                                                const class GGS_string constinArgument5,
                                                                                                                                                const class GGS_string constinArgument6,
                                                                                                                                                const class GGS_bool constinArgument7,
                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                        class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                        const class GGS_string constinArgument2,
                                                                                                                        const class GGS_string constinArgument3,
                                                                                                                        const class GGS_string constinArgument4,
                                                                                                                        const class GGS_string constinArgument5,
                                                                                                                        const class GGS_bool constinArgument6,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                                                                                                          class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                                                                                                          const class GGS_string constinArgument2,
                                                                                                                                                                                                                          const class GGS_string constinArgument3,
                                                                                                                                                                                                                          const class GGS_string constinArgument4,
                                                                                                                                                                                                                          const class GGS_string constinArgument5,
                                                                                                                                                                                                                          const class GGS_string constinArgument6,
                                                                                                                                                                                                                          const class GGS_string constinArgument7,
                                                                                                                                                                                                                          const class GGS_string constinArgument8,
                                                                                                                                                                                                                          const class GGS_string constinArgument9,
                                                                                                                                                                                                                          const class GGS_bool constinArgument10,
                                                                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                     class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                     const class GGS_string constinArgument2,
                                                                                                                                     const class GGS_string constinArgument3,
                                                                                                                                     const class GGS_string constinArgument4,
                                                                                                                                     const class GGS_string constinArgument5,
                                                                                                                                     const class GGS_string constinArgument6,
                                                                                                                                     const class GGS_string constinArgument7,
                                                                                                                                     const class GGS_bool constinArgument8,
                                                                                                                                     class Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (class GGS_getterMap & ioArgument0,
                                                                                                                                   class GGS_unifiedTypeMap & ioArgument1,
                                                                                                                                   const class GGS_string constinArgument2,
                                                                                                                                   const class GGS_string constinArgument3,
                                                                                                                                   const class GGS_string constinArgument4,
                                                                                                                                   const class GGS_string constinArgument5,
                                                                                                                                   const class GGS_string constinArgument6,
                                                                                                                                   const class GGS_string constinArgument7,
                                                                                                                                   const class GGS_string constinArgument8,
                                                                                                                                   const class GGS_string constinArgument9,
                                                                                                                                   const class GGS_bool constinArgument10,
                                                                                                                                   class Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                 class GGS_getterMap & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class Compiler * inCompiler,
                                                                                        const class GGS_string & in_COMPONENT_5F_NAME,
                                                                                        const class GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const class GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const class GGS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const class GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_prologueEpilogueList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                    class GGS_usefulEntitiesGraph & ioArgument1,
                                                                    const class GGS_analysisContext constinArgument2,
                                                                    class GGS_unifiedTypeMap & ioArgument3,
                                                                    const class GGS_programRuleList constinArgument4,
                                                                    class GGS_programListForGeneration & ioArgument5,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (class GGS_lstringlist & ioArgument0,
                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                   const class GGS_analysisContext constinArgument2,
                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                   const class GGS_prologueEpilogueList constinArgument4,
                                                                   class GGS_programListForGeneration & ioArgument5,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const class GGS_bool constinArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_location constinArgument2,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument4,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class Compiler * inCompiler,
                                                                               const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class Compiler * inCompiler,
                                                                                         const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftUI'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (class Compiler * inCompiler,
                                                                                      const class GGS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                      const class GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                      const class GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const class GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const class GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
                                                                                      COMMA_LOCATION_ARGS) ;

