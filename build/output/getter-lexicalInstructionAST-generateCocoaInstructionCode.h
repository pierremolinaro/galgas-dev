//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         File 'getter-lexicalInstructionAST-generateCocoaInstructionCode.h'                          *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef getter_2D_lexicalInstructionAST_2D_generateCocoaInstructionCode_1_DEFINED
#define getter_2D_lexicalInstructionAST_2D_generateCocoaInstructionCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@lexicalInstructionAST generateCocoaInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                           class GALGAS_string inArgument0,
                                                                                                           class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                       categoryReaderSignature_lexicalInstructionAST_generateCocoaInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     GALGAS_string in_inScannerClassName,
                                                                     GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

