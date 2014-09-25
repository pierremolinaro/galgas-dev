#ifndef method_2D_templateInstructionForGeneration_2D_templateCodeGeneration_1_DEFINED
#define method_2D_templateInstructionForGeneration_2D_templateCodeGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration) (const class cPtr_templateInstructionForGeneration * inObject,
                                                                                                 class GALGAS_string & ioArgument0,
                                                                                                 class GALGAS_stringset & ioArgument1,
                                                                                                 class GALGAS_uint & ioArgument2,
                                                                                                 class GALGAS_stringset & ioArgument3,
                                                                                                 class GALGAS_bool & ioArgument4,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                 categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateCodeGeneration (const class cPtr_templateInstructionForGeneration * inObject,
                                                GALGAS_string & io_ioGeneratedCode,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_uint & io_ioTemporaryVariableIndex,
                                                GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                GALGAS_bool & io_ioUseColumnMarker,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

