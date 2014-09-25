#ifndef proc_2D_analyzeFunctionBody_1_DEFINED
#define proc_2D_analyzeFunctionBody_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const class GALGAS_analysisContext constinArgument0,
                                  const class GALGAS_formalInputParameterListAST constinArgument1,
                                  const class GALGAS_typedAttributeList constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_semanticInstructionListAST constinArgument4,
                                  const class GALGAS_lstring constinArgument5,
                                  const class GALGAS_lstring constinArgument6,
                                  const class GALGAS_location constinArgument7,
                                  class GALGAS_formalInputParameterListForGeneration & outArgument8,
                                  class GALGAS_unifiedTypeMapProxy & outArgument9,
                                  class GALGAS_string & outArgument10,
                                  class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

