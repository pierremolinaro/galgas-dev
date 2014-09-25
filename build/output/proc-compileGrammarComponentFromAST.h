#ifndef proc_2D_compileGrammarComponentFromAST_1_DEFINED
#define proc_2D_compileGrammarComponentFromAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileGrammarComponentFromAST'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGrammarComponentFromAST (const class GALGAS_lstring constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_galgas_33_GrammarComponentListAST_2D_element constinArgument2,
                                             class GALGAS_parsedComponentStruct & ioArgument3,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

