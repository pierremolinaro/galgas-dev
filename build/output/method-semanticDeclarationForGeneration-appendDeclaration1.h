#ifndef method_2D_semanticDeclarationForGeneration_2D_appendDeclaration_31__1_DEFINED
#define method_2D_semanticDeclarationForGeneration_2D_appendDeclaration_31__1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                class GALGAS_stringset & ioArgument0,
                                                                                                class GALGAS_string & outArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_31_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_31_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

