#ifndef getter_2D_semanticDeclarationForGeneration_2D_implementationCppFileName_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_implementationCppFileName_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract category reader '@semanticDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_implementationCppFileName (const int32_t inClassIndex,
                                                    categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_implementationCppFileName (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

