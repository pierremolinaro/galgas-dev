#ifndef method_2D_semanticDeclarationAST_2D_addAssociatedElement_1_DEFINED
#define method_2D_semanticDeclarationAST_2D_addAssociatedElement_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@semanticDeclarationAST addAssociatedElement'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_addAssociatedElement) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                     class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addAssociatedElement (const int32_t inClassIndex,
                                               categoryMethodSignature_semanticDeclarationAST_addAssociatedElement inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addAssociatedElement (const class cPtr_semanticDeclarationAST * inObject,
                                              GALGAS_semanticDeclarationListAST & io_ioSemanticDeclarationList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

