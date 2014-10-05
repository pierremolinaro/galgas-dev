#ifndef method_2D_semanticDeclarationForGeneration_2D_appendSpecificImplementation_1_DEFINED
#define method_2D_semanticDeclarationForGeneration_2D_appendSpecificImplementation_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@semanticDeclarationForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                       const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                       class GALGAS_stringset & ioArgument1,
                                                                                                       class GALGAS_string & outArgument2,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificImplementation (const int32_t inClassIndex,
                                                       categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificImplementation (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                      const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                      GALGAS_stringset & io_ioInclusionSet,
                                                      GALGAS_string & out_outImplementation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

