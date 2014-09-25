#ifndef getter_2D_semanticDeclarationForGeneration_2D_appendTypeGenericImplementation_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_appendTypeGenericImplementation_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendTypeGenericImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendTypeGenericImplementation (const int32_t inClassIndex,
                                                          categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

