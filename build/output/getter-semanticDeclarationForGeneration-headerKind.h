#ifndef getter_2D_semanticDeclarationForGeneration_2D_headerKind_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_headerKind_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@semanticDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_headerKind (*categoryReaderSignature_semanticDeclarationForGeneration_headerKind) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerKind (const int32_t inClassIndex,
                                     categoryReaderSignature_semanticDeclarationForGeneration_headerKind inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerKind callCategoryReader_headerKind (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

