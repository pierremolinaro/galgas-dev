#ifndef getter_2D_lexicalInstructionAST_2D_generateInstructionCode_1_DEFINED
#define getter_2D_lexicalInstructionAST_2D_generateInstructionCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalInstructionAST_generateInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                      class GALGAS_string inArgument0,
                                                                                                      class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateInstructionCode (const int32_t inClassIndex,
                                                  categoryReaderSignature_lexicalInstructionAST_generateInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                GALGAS_string in_inScannerClassName,
                                                                GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

