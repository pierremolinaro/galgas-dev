#ifndef getter_2D_semanticDeclarationForGeneration_2D_hasCppHeaderFile_1_DEFINED
#define getter_2D_semanticDeclarationForGeneration_2D_hasCppHeaderFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category reader '@semanticDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_hasCppHeaderFile (const int32_t inClassIndex,
                                           categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_hasCppHeaderFile (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

