#ifndef method_2D_semanticDeclarationAST_2D_enterDeclarationInGraph_1_DEFINED
#define method_2D_semanticDeclarationAST_2D_enterDeclarationInGraph_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category method '@semanticDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                        class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                        class GALGAS_categoryMethodMapForBuildingContext & ioArgument1,
                                                                                        class GALGAS_categoryReaderMapForBuildingContext & ioArgument2,
                                                                                        class GALGAS_categoryModifierMapForBuildingContext & ioArgument3,
                                                                                        class GALGAS_semanticDeclarationListAST & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterDeclarationInGraph (const int32_t inClassIndex,
                                                  categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterDeclarationInGraph (const class cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                 GALGAS_categoryMethodMapForBuildingContext & io_ioCategoryMethodMapForBuildingContext,
                                                 GALGAS_categoryReaderMapForBuildingContext & io_ioCategoryReaderMapForBuildingContext,
                                                 GALGAS_categoryModifierMapForBuildingContext & io_ioCategoryModifierMapForBuildingContext,
                                                 GALGAS_semanticDeclarationListAST & io_ioCategoryOverrideDefinitionList,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

