#ifndef method_2D_actualParameterForGeneration_2D_generateActualParameter_1_DEFINED
#define method_2D_actualParameterForGeneration_2D_generateActualParameter_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@actualParameterForGeneration generateActualParameter'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_actualParameterForGeneration_generateActualParameter) (const class cPtr_actualParameterForGeneration * inObject,
                                                                                              class GALGAS_stringset & ioArgument0,
                                                                                              class GALGAS_uint & ioArgument1,
                                                                                              class GALGAS_string & ioArgument2,
                                                                                              class GALGAS_stringlist & ioArgument3,
                                                                                              class GALGAS_stringlist & ioArgument4,
                                                                                              class GALGAS_stringset & ioArgument5,
                                                                                              class GALGAS_string & outArgument6,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateActualParameter (const int32_t inClassIndex,
                                                  categoryMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateActualParameter (const class cPtr_actualParameterForGeneration * inObject,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_string & io_ioImplementation,
                                                 GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                 GALGAS_stringlist & io_ioOutputVariableList,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_string & out_outCppName,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

