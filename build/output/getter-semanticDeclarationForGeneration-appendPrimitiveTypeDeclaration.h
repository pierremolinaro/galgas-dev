#ifndef getter_2D_semanticDeclarationForGeneration_2D_appendPrimitiveTypeDeclaration_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_appendPrimitiveTypeDeclaration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendPrimitiveTypeDeclaration (const int32_t inClassIndex,
                                                         categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

