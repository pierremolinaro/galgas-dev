#ifndef method_2D_semanticDeclarationAST_2D_enterInSemanticContext_1_DEFINED
#define method_2D_semanticDeclarationAST_2D_enterInSemanticContext_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@semanticDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                       const class GALGAS_categoryMethodMapForBuildingContext constinArgument0,
                                                                                       const class GALGAS_categoryReaderMapForBuildingContext constinArgument1,
                                                                                       const class GALGAS_categoryModifierMapForBuildingContext constinArgument2,
                                                                                       class GALGAS_semanticContext & ioArgument3,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const class cPtr_semanticDeclarationAST * inObject,
                                                const GALGAS_categoryMethodMapForBuildingContext constin_inCategoryMethodMapForBuildingContext,
                                                const GALGAS_categoryReaderMapForBuildingContext constin_inCategoryReaderMapForBuildingContext,
                                                const GALGAS_categoryModifierMapForBuildingContext constin_inCategoryModifierMapForBuildingContext,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

