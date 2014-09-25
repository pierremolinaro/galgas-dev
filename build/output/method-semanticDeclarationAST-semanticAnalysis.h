#ifndef method_2D_semanticDeclarationAST_2D_semanticAnalysis_1_DEFINED
#define method_2D_semanticDeclarationAST_2D_semanticAnalysis_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@semanticDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_semanticAnalysis) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                 const class GALGAS_semanticContext constinArgument0,
                                                                                 const class GALGAS_predefinedTypes constinArgument1,
                                                                                 class GALGAS_semanticDeclarationSortedListForGeneration & ioArgument2,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_semanticDeclarationAST_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_semanticDeclarationAST * inObject,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          const GALGAS_predefinedTypes constin_inPredefinedTypes,
                                          GALGAS_semanticDeclarationSortedListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

