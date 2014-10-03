#ifndef method_2D_semanticDeclarationForGeneration_2D_appendSpecificFiles_1_DEFINED
#define method_2D_semanticDeclarationForGeneration_2D_appendSpecificFiles_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendSpecificFiles'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const class GALGAS_string constinArgument0,
                                                                                              class GALGAS_stringset & ioArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificFiles (const int32_t inClassIndex,
                                              categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificFiles (const class cPtr_semanticDeclarationForGeneration * inObject,
                                             const GALGAS_string constin_inProductDirectory,
                                             GALGAS_stringset & io_ioAllProductFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

