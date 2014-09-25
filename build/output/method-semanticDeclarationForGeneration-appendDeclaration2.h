#ifndef method_2D_semanticDeclarationForGeneration_2D_appendDeclaration_32__1_DEFINED
#define method_2D_semanticDeclarationForGeneration_2D_appendDeclaration_32__1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                const class GALGAS_bool constinArgument0,
                                                                                                const class GALGAS_string constinArgument1,
                                                                                                class GALGAS_stringset & ioArgument2,
                                                                                                class GALGAS_string & outArgument3,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_32_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_32_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                               const GALGAS_bool constin_inGenerateForGalgas_33_,
                                               const GALGAS_string constin_inOutputDirectory,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

