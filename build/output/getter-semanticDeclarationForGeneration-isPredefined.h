#ifndef getter_2D_semanticDeclarationForGeneration_2D_isPredefined_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_isPredefined_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@semanticDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticDeclarationForGeneration_isPredefined) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isPredefined (const int32_t inClassIndex,
                                       categoryReaderSignature_semanticDeclarationForGeneration_isPredefined inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isPredefined (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

