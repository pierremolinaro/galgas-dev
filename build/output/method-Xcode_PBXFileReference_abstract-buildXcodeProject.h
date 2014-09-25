#ifndef method_2D_Xcode_5F_PBXFileReference_5F_abstract_2D_buildXcodeProject_1_DEFINED
#define method_2D_Xcode_5F_PBXFileReference_5F_abstract_2D_buildXcodeProject_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@Xcode_PBXFileReference_abstract buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_Xcode_5F_PBXFileReference_5F_abstract_buildXcodeProject) (const class cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                                 class GALGAS_string & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildXcodeProject (const int32_t inClassIndex,
                                            categoryMethodSignature_Xcode_5F_PBXFileReference_5F_abstract_buildXcodeProject inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildXcodeProject (const class cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                           GALGAS_string & io_outString,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

