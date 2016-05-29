#ifndef all_2D_declarations_2D__32__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__30__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension getter '@unifiedTypeMap-proxy baseType' (as function)                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_proxy extensionGetter_baseType (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName1'                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Abstract extension method '@actualParameterForGeneration generateActualParameter'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_actualParameterForGeneration_generateActualParameter) (const class cPtr_actualParameterForGeneration * inObject,
                                                                                               class GALGAS_stringset & ioArgument0,
                                                                                               class GALGAS_uint & ioArgument1,
                                                                                               class GALGAS_string & ioArgument2,
                                                                                               class GALGAS_stringlist & ioArgument3,
                                                                                               class GALGAS_stringlist & ioArgument4,
                                                                                               class GALGAS_stringset & ioArgument5,
                                                                                               class GALGAS_string & outArgument6,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (const class cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Extension setter '@XcodeProjectDescriptor addTIFF_file'                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Extension setter '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      class GALGAS_string & out_outRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Extension setter '@XcodeProjectDescriptor addInfoPlistFile'                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Extension setter '@XcodeProjectDescriptor addXIBFile'                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Extension setter '@XcodeProjectDescriptor addFrameworkFile'                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Extension setter '@XcodeProjectDescriptor addMFile'                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inFileName,
                               class GALGAS_string & out_outFileRef,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Extension setter '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inFileName,
                                class GALGAS_string & out_outFileRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Extension setter '@XcodeProjectDescriptor addCppFile'                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Extension setter '@XcodeProjectDescriptor addCFile'                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inFileName,
                               class GALGAS_string & out_outFileRef,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Extension setter '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Extension setter '@XcodeProjectDescriptor addBuildFile'                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inFileReference,
                                   const class GALGAS_string constin_inFileName,
                                   class GALGAS_string & out_outBuildRef,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Extension setter '@XcodeProjectDescriptor addICNS_file'                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

#endif
