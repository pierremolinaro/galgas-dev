#ifndef getter_2D_abstractLexicalRuleAST_2D_generateCocoaCode_1_DEFINED
#define getter_2D_abstractLexicalRuleAST_2D_generateCocoaCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@abstractLexicalRuleAST generateCocoaCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                                 class GALGAS_string inArgument0,
                                                                                                 class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaCode (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                          GALGAS_string in_inScannerClassName,
                                                          GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

