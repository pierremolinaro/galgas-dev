#ifndef method_2D_abstractCollectionValueElementForGeneration_2D_generateCollectionElementCode_1_DEFINED
#define method_2D_abstractCollectionValueElementForGeneration_2D_generateCollectionElementCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode) (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                                   const class GALGAS_unifiedTypeMapProxy constinArgument0,
                                                                                                                   class GALGAS_string & ioArgument1,
                                                                                                                   class GALGAS_stringset & ioArgument2,
                                                                                                                   class GALGAS_uint & ioArgument3,
                                                                                                                   class GALGAS_stringset & ioArgument4,
                                                                                                                   const class GALGAS_string constinArgument5,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                        categoryMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCollectionElementCode (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                       const GALGAS_unifiedTypeMapProxy constin_inTargetType,
                                                       GALGAS_string & io_ioGeneratedCode,
                                                       GALGAS_stringset & io_ioInclusionSet,
                                                       GALGAS_uint & io_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                       const GALGAS_string constin_inCppTargetVar,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

