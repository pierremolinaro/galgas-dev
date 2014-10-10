#ifndef all_2D_declarations_2D__32__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-19.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Reader '@unifiedTypeMap-proxy baseType'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy categoryReader_baseType (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@unifiedTypeMap-proxy addHeaderFileName1'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                           class GALGAS_stringset & io_ioInclusions,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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

#endif
