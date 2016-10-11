#ifndef all_2D_declarations_2D__31__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-16.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'checkAssignmentTypeWithImplicitGetterCall'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypeWithImplicitGetterCall (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                        const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                        const class GALGAS_location constinArgument2,
                                                        class GALGAS_semanticExpressionForGeneration & ioArgument3,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixAndOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixAndOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkDiadicOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkDiadicOperator (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                  const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                  const class GALGAS_bool constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_location constinArgument4,
                                  class GALGAS_semanticExpressionForGeneration & ioArgument5,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixOrOperator'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixOrOperator (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixXorOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixXorOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'prefixNotOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_prefixNotOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'prefixTildeOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_prefixTildeOperator (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'optionNameForUsefulEntitiesGraph'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'functionNameForUsefulEntitiesGraph'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixAddOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixAddOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixSubOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixSubOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixMulOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixMulOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixDivOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixDivOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'infixModOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixModOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'prefixMinusOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_prefixMinusOperator (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'isComparable'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_isComparable (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'infixShiftOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_infixShiftOperator (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'templateInstructionListAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateInstructionListAnalysis (const class GALGAS_lstring constinArgument0,
                                              class GALGAS_usefulEntitiesGraph & ioArgument1,
                                              const class GALGAS_templateAnalysisContext constinArgument2,
                                              const class GALGAS_templateInstructionListAST constinArgument3,
                                              class GALGAS_templateInstructionListForGeneration & ioArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'templateCodeGenerationForListInstruction'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateCodeGenerationForListInstruction (const class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                       class GALGAS_string & ioArgument1,
                                                       class GALGAS_stringset & ioArgument2,
                                                       class GALGAS_uint & ioArgument3,
                                                       class GALGAS_stringset & ioArgument4,
                                                       class GALGAS_bool & ioArgument5,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildLexicalTypeMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'buildLexicalAttributeMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalAttributeMap (const class GALGAS_lexicalTypeMap constinArgument0,
                                       const class GALGAS_lexicalAttributeListAST constinArgument1,
                                       class GALGAS_lexicalAttributeMap & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalRoutineMap'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalRoutineMap (class GALGAS_lexicalRoutineMap & outArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalFunctionMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalFunctionMap (class GALGAS_lexicalFunctionMap & outArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'printPredefinedLexicalActions'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printPredefinedLexicalActions (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'lexiqueGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                          const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                          const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                          const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const class GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

#endif
