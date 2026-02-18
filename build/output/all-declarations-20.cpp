#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 122)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 123)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileReference,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 132)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssignOperation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 133)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS_stringlist constinArgument_inSourceList,
                                    const GGS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 146)) ;
  }
  GGS_string var_buildPhaseRef_5737 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5737, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 147)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5832 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5832, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 149)) ;
  }
  GGS_string var_buildConfigurationRef_5894 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5894, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 150)) ;
  }
  GGS_string var_frameworkBuildRef_5952 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5952, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 151)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssignOperation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5737, var_buildConfigurationListRef_5832, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5894, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_5952  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 152)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS_stringlist constinArgument_inSourceList,
                                   const GGS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GGS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GGS_stringlist constinArgument_inDependentTargetRefList,
                                   const GGS__32_stringlist constinArgument_inProductCopyList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 178)) ;
  }
  GGS_string var_buildPhaseRef_6995 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_6995, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 179)) ;
  }
  GGS_string var_targetRef_7045 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_7045, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 180)) ;
  }
  GGS_string var_buildConfigurationListRef_7091 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_7091, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 181)) ;
  }
  GGS_string var_buildConfigurationRef_7153 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_7153, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 182)) ;
  }
  GGS_string var_frameworkBuildRef_7211 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_7211, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 183)) ;
  }
  GGS_string var_resourceBuildRef_7265 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_7265, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 184)) ;
  }
  GGS__32_stringlist var_dependentTargets_7302 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_7332 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_7332.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_7405 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_7405, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 187)) ;
    }
    var_dependentTargets_7302.addAssignOperation (var_dependencyBuildRef_7405, enumerator_7332.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 188)) ;
    enumerator_7332.gotoNextObject () ;
  }
  GGS_stringlist var_resourceFileBuildRefs_7498 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__32_stringlist enumerator_7557 (constinArgument_inProductCopyList) ;
  while (enumerator_7557.hasCurrentObject ()) {
    GGS_string var_buildRef_7662 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7557.current_mValue_30_ (HERE), enumerator_7557.current_mValue_31_ (HERE), var_buildRef_7662, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 192)) ;
    }
    var_resourceFileBuildRefs_7498.addAssignOperation (var_buildRef_7662  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 193)) ;
    enumerator_7557.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssignOperation (var_targetRef_7045, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_6995, var_buildConfigurationListRef_7091, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_7153, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_7211, var_dependentTargets_7302, var_resourceBuildRef_7265, var_resourceFileBuildRefs_7498  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS_stringlist constinArgument_inChildrenRefs,
                               GGS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 221)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 224)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 227)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 229)) ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 230)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS_stringlist & ioArgument_ioCFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                        GGS_string & outArgument_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 248)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 251)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 254)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 256)) ;
  }
  GGS_stringlist var_childrenRefs_9912 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringset enumerator_9938 (constinArgument_inFileNames) ;
  while (enumerator_9938.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 260)).objectCompare (GGS_string ("c"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_string var_cFileRef_10050 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_9938.current_key (HERE), var_cFileRef_10050, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 261)) ;
        }
        var_childrenRefs_9912.addAssignOperation (var_cFileRef_10050  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 262)) ;
        GGS_string var_buildRef_10171 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_10050, enumerator_9938.current_key (HERE), var_buildRef_10171, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 263)) ;
        }
        ioArgument_ioCFileBuildRefs.addAssignOperation (var_buildRef_10171  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 264)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 265)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_string var_cppFileRef_10315 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_9938.current_key (HERE), var_cppFileRef_10315, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 266)) ;
          }
          var_childrenRefs_9912.addAssignOperation (var_cppFileRef_10315  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 267)) ;
          GGS_string var_buildRef_10442 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_10315, enumerator_9938.current_key (HERE), var_buildRef_10442, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 268)) ;
          }
          ioArgument_ioCppFileBuildRefs.addAssignOperation (var_buildRef_10442  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 269)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 270)).objectCompare (GGS_string ("h"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_headerFileRef_10589 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_9938.current_key (HERE), var_headerFileRef_10589, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 271)) ;
            }
            var_childrenRefs_9912.addAssignOperation (var_headerFileRef_10589  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 272)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 273)).objectCompare (GGS_string ("framework"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_string var_framework_5F_FileRef_10751 ;
              {
              extensionSetter_addFrameworkFile (ioObject, enumerator_9938.current_key (HERE), var_framework_5F_FileRef_10751, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 274)) ;
              }
              GGS_string var_buildRef_10858 ;
              {
              extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10751, enumerator_9938.current_key (HERE), var_buildRef_10858, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 275)) ;
              }
              var_childrenRefs_9912.addAssignOperation (var_framework_5F_FileRef_10751  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 276)) ;
              ioArgument_ioFrameWorkFileBuildRefs.addAssignOperation (var_buildRef_10858  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 277)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 278)).objectCompare (GGS_string ("plist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_resource_5F_FileRef_11059 ;
                {
                extensionSetter_addInfoPlistFile (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11059, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 279)) ;
                }
                var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11059  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 280)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 281)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GGS_string var_resource_5F_FileRef_11215 ;
                  {
                  extensionSetter_addXIBFile (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11215, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 282)) ;
                  }
                  var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11215  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 283)) ;
                  GGS_string var_buildRef_11360 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11215, enumerator_9938.current_key (HERE), var_buildRef_11360, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 284)) ;
                  }
                  ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11360  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 285)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 286)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_string var_resource_5F_FileRef_11514 ;
                    {
                    extensionSetter_addTIFF_5F_file (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11514, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 287)) ;
                    }
                    var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11514  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 288)) ;
                    GGS_string var_buildRef_11659 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11514, enumerator_9938.current_key (HERE), var_buildRef_11659, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 289)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11659  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 290)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 291)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      GGS_string var_resource_5F_FileRef_11813 ;
                      {
                      extensionSetter_addICNS_5F_file (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11813, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 292)) ;
                      }
                      var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11813  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 293)) ;
                      GGS_string var_buildRef_11958 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11813, enumerator_9938.current_key (HERE), var_buildRef_11958, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 294)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11958  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 295)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GalgasBool test_14 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_14) {
                      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas", 296)).objectCompare (GGS_string ("swift"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_14) {
                        GGS_string var_swiftFileRef_12113 ;
                        {
                        extensionSetter_addSwiftFile (ioObject, enumerator_9938.current_key (HERE), var_swiftFileRef_12113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 297)) ;
                        }
                        GGS_string var_buildRef_12210 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_swiftFileRef_12113, enumerator_9938.current_key (HERE), var_buildRef_12210, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 298)) ;
                        }
                        var_childrenRefs_9912.addAssignOperation (var_swiftFileRef_12113  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 299)) ;
                        ioArgument_ioSwiftFileBuildRefs.addAssignOperation (var_buildRef_12210  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 300)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_14) {
                      GenericArray <FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas", 302)), GGS_string ("unhandled extension for file '").add_operation (enumerator_9938.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 302)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 302)), fixItArray15  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 302)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9938.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_9912  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 305)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.addAssignOperation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 312)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS_stringlist constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 319)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GGS_XcodeProjectDescriptor & ioObject,
                                      GGS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas", 379)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas", 379)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 379)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 380)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas", 382)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas", 382)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 382)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 383)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GGS_XcodeProjectDescriptor inObject,
                                     const GGS_string constinArgument_inPath,
                                     const GGS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_XcodeProjectDescriptor temp_0 = inObject ;
  const GGS_XcodeProjectDescriptor temp_1 = inObject ;
  const GGS_XcodeProjectDescriptor temp_2 = inObject ;
  const GGS_XcodeProjectDescriptor temp_3 = inObject ;
  const GGS_XcodeProjectDescriptor temp_4 = inObject ;
  const GGS_XcodeProjectDescriptor temp_5 = inObject ;
  const GGS_XcodeProjectDescriptor temp_6 = inObject ;
  const GGS_XcodeProjectDescriptor temp_7 = inObject ;
  const GGS_XcodeProjectDescriptor temp_8 = inObject ;
  const GGS_XcodeProjectDescriptor temp_9 = inObject ;
  const GGS_XcodeProjectDescriptor temp_10 = inObject ;
  const GGS_XcodeProjectDescriptor temp_11 = inObject ;
  const GGS_XcodeProjectDescriptor temp_12 = inObject ;
  const GGS_XcodeProjectDescriptor temp_13 = inObject ;
  const GGS_XcodeProjectDescriptor temp_14 = inObject ;
  const GGS_XcodeProjectDescriptor temp_15 = inObject ;
  const GGS_XcodeProjectDescriptor temp_16 = inObject ;
  const GGS_XcodeProjectDescriptor temp_17 = inObject ;
  const GGS_XcodeProjectDescriptor temp_18 = inObject ;
  const GGS_XcodeProjectDescriptor temp_19 = inObject ;
  const GGS_XcodeProjectDescriptor temp_20 = inObject ;
  const GGS_XcodeProjectDescriptor temp_21 = inObject ;
  const GGS_XcodeProjectDescriptor temp_22 = inObject ;
  GGS_string var_contents_17960 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCFileList (), temp_7.readProperty_mCppFileList (), temp_8.readProperty_m_5F_Swift_5F_FileList (), temp_9.readProperty_m_5F_M_5F_FileList (), temp_10.readProperty_m_5F_MM_5F_FileList (), temp_11.readProperty_mFrameworkFileList (), temp_12.readProperty_mHeaderFileList (), temp_13.readProperty_mInfoPlistFileList (), temp_14.readProperty_mTIFF_5F_fileList (), temp_15.readProperty_mICNS_5F_fileList (), temp_16.readProperty_mXIB_5F_fileList (), temp_17.readProperty_mBuildFileList (), temp_18.readProperty_mDefaultConfigurationRef (), temp_19.readProperty_mDefaultConfigurationSettingList (), temp_20.readProperty_mProjectBuildConfigurationRef (), temp_21.readProperty_mApplicationBundleName (), temp_22.readProperty_mProjectName () COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 454))) ;
  GGS_string var_projectCoreFile_18682 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 479)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    GGS_bool test_24 = var_projectCoreFile_18682.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas", 480)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas", 480)) ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      test_24 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas", 480)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas", 480)) ;
    }
    GGS_bool test_25 = test_24 ;
    if (GalgasBool::boolTrue != test_25.boolEnum ()) {
      test_25 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 480)).objectCompare (var_contents_17960)) ;
    }
    test_23 = test_25.boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      GGS_bool joker_18941 ; // Joker input parameter
      var_contents_17960.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18941, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 481)) ;
      var_contents_17960.method_makeDirectoryAndWriteToFile (var_projectCoreFile_18682, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 482)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mNonterminalSymbolName,
                  const GGS_uint & in_mNonterminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_nonTerminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_nonTerminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mNonterminalSymbolName, in_mNonterminalSymbolIndex, inCompiler) ;
  const GGS_nonTerminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                           const GGS_lstring & in_mNonterminalSymbolName,
                                                           const GGS_uint & in_mNonterminalSymbolIndex,
                                                           Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonTerminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                              const GGS_lstring & in_mNonterminalSymbolName,
                                                                                              const GGS_uint & in_mNonterminalSymbolIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonTerminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

void cPtr_nonTerminalInstructionForGrammarAnalysis::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@nonTerminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nonTerminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonTerminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mNonterminalSymbolName, mProperty_mNonterminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonTerminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalSymbolName.printNonNullClassInstanceProperties ("mNonterminalSymbolName") ;
    mProperty_mNonterminalSymbolIndex.printNonNullClassInstanceProperties ("mNonterminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ("nonTerminalInstructionForGrammarAnalysis",
                                                                                             & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  const GGS_nonTerminalInstructionForGrammarAnalysis * p = (const GGS_nonTerminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (void) :
mProperty_mLeftNonterminalSymbol (),
mProperty_mLeftNonterminalSymbolIndex (),
mProperty_mInstructionList (),
mProperty_mProductionIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) :
mProperty_mLeftNonterminalSymbol (inSource.mProperty_mLeftNonterminalSymbol),
mProperty_mLeftNonterminalSymbolIndex (inSource.mProperty_mLeftNonterminalSymbolIndex),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mProductionIndex (inSource.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element & GGS_productionRuleListForGrammarAnalysis_2E_element::operator = (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mLeftNonterminalSymbol = inSource.mProperty_mLeftNonterminalSymbol ;
  mProperty_mLeftNonterminalSymbolIndex = inSource.mProperty_mLeftNonterminalSymbolIndex ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mProductionIndex = inSource.mProperty_mProductionIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element GGS_productionRuleListForGrammarAnalysis_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                               const GGS_uint & in_mProductionIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeftNonterminalSymbol = in_mLeftNonterminalSymbol ;
  result.mProperty_mLeftNonterminalSymbolIndex = in_mLeftNonterminalSymbolIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mProductionIndex = in_mProductionIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_uint & inOperand1,
                                                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                          const GGS_uint & inOperand3) :
mProperty_mLeftNonterminalSymbol (inOperand0),
mProperty_mLeftNonterminalSymbolIndex (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mProductionIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_productionRuleListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mLeftNonterminalSymbol.isValid () && mProperty_mLeftNonterminalSymbolIndex.isValid () && mProperty_mInstructionList.isValid () && mProperty_mProductionIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mLeftNonterminalSymbol.drop () ;
  mProperty_mLeftNonterminalSymbolIndex.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mProductionIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @productionRuleListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductionIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @productionRuleListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ("productionRuleListForGrammarAnalysis.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_productionRuleListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_productionRuleListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_productionRuleListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element GGS_productionRuleListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis_2E_element result ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element * p = (const GGS_productionRuleListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_productionRuleListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const GGS_string constinArgument_inSyntaxComponentName,
                                            GGS_string & ioArgument_ioGeneratedCode,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_currentNode_6877 = GGS_string ("P0start") ;
  GGS_rowList var_rowArray_6916 = GGS_rowList::init (inCompiler COMMA_HERE) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_0 = inObject ;
  UpEnumerator_range enumerator_6970 (GGS_range (GGS_uint (uint32_t (1U)), temp_0.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 173)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 173)))) ;
  while (enumerator_6970.hasCurrentObject ()) {
    GGS__32_stringlist temp_1 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 174)) ;
    temp_1.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string::makeEmptyString (), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 174)) ;
    var_rowArray_6916.addAssignOperation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 174)) ;
    enumerator_6970.gotoNextObject () ;
  }
  GGS__32_stringlist temp_2 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 176)) ;
  temp_2.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_currentNode_6877, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 176)) ;
  var_rowArray_6916.addAssignOperation (temp_2  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 176)) ;
  GGS_string var_arrows_7081 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_7107 = GGS_string ("--") ;
  GGS_uint var_unusedMaxUsedRowIndex_7137 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_uint var_row_7179 = temp_3.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 180)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_4 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_7220 (temp_4.readProperty_mInstructionList ()) ;
  while (enumerator_7220.hasCurrentObject ()) {
    var_row_7179.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 182)) ;
    GGS_uint var_column_7288 = GGS_uint (uint32_t (1U)) ;
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_7220.current_mInstruction (HERE).ptr (), var_rowArray_6916, var_row_7179, var_column_7288, var_currentNode_6877, var_arrowStyle_7107, var_arrows_7081, var_unusedMaxUsedRowIndex_7137, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 184)) ;
    enumerator_7220.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_7655 ;
  {
  extensionSetter_appendRow (var_rowArray_6916, GGS_string ("[lastPoint] ()"), var_row_7179, GGS_uint (uint32_t (2U)), var_lastNodeName_7655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 196)) ;
  }
  var_arrows_7081.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_6877, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 197)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 197)).add_operation (var_lastNodeName_7655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 197)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 197)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_5 = inObject ;
  GGS_location var_loc_7775 = temp_5.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 200)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 201)).add_operation (function_escapeForTex (var_loc_7775.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 203)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 203)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 202)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 203)).add_operation (function_escapeForTex (var_loc_7775.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 204)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 204)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 204)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 205)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 200)) ;
  DownEnumerator_rowList enumerator_8181 (var_rowArray_6916) ;
  while (enumerator_8181.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 209)) ;
    UpEnumerator__32_stringlist enumerator_8253 (enumerator_8181.current_columns (HERE)) ;
    while (enumerator_8253.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_8253.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 212)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_8253.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 214)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 214)).add_operation (enumerator_8253.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 214)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 214)) ;
      }
      enumerator_8253.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 217)) ;
    enumerator_8181.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_7081, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 222)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (cPtr_semanticInstructionAST * inObject,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_enterInstructionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (void) :
mProperty_featureName (),
mProperty_featureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_galgasQualifiedFeature & inSource) :
mProperty_featureName (inSource.mProperty_featureName),
mProperty_featureValue (inSource.mProperty_featureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature & GGS_galgasQualifiedFeature::operator = (const GGS_galgasQualifiedFeature & inSource) {
  mProperty_featureName = inSource.mProperty_featureName ;
  mProperty_featureValue = inSource.mProperty_featureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::init_21__21_ (const GGS_lstring & in_featureName,
                                                                     const GGS_lstring & in_featureValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_featureName = in_featureName ;
  result.mProperty_featureValue = in_featureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1) :
mProperty_featureName (inOperand0),
mProperty_featureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasQualifiedFeature::isValid (void) const {
  return mProperty_featureName.isValid () && mProperty_featureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::drop (void) {
  mProperty_featureName.drop () ;
  mProperty_featureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasQualifiedFeature:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_featureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_featureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasQualifiedFeature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasQualifiedFeature ("galgasQualifiedFeature",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasQualifiedFeature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasQualifiedFeature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasQualifiedFeature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasQualifiedFeature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  const GGS_galgasQualifiedFeature * p = (const GGS_galgasQualifiedFeature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasQualifiedFeature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasQualifiedFeature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (void) :
mProperty_mProjectSourceList (),
mProperty_mToolCppSourceList (),
mProperty_mMajorVersion (),
mProperty_mMinorVersion (),
mProperty_mRevisionVersion (),
mProperty_mGenerationFeatureList (),
mProperty_mQualifiedFeatureList (),
mProperty_mTargetName (),
mProperty_mEndOfSourceFile () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) :
mProperty_mProjectSourceList (inSource.mProperty_mProjectSourceList),
mProperty_mToolCppSourceList (inSource.mProperty_mToolCppSourceList),
mProperty_mMajorVersion (inSource.mProperty_mMajorVersion),
mProperty_mMinorVersion (inSource.mProperty_mMinorVersion),
mProperty_mRevisionVersion (inSource.mProperty_mRevisionVersion),
mProperty_mGenerationFeatureList (inSource.mProperty_mGenerationFeatureList),
mProperty_mQualifiedFeatureList (inSource.mProperty_mQualifiedFeatureList),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mEndOfSourceFile (inSource.mProperty_mEndOfSourceFile) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST & GGS_galgas_33_ProjectComponentAST::operator = (const GGS_galgas_33_ProjectComponentAST & inSource) {
  mProperty_mProjectSourceList = inSource.mProperty_mProjectSourceList ;
  mProperty_mToolCppSourceList = inSource.mProperty_mToolCppSourceList ;
  mProperty_mMajorVersion = inSource.mProperty_mMajorVersion ;
  mProperty_mMinorVersion = inSource.mProperty_mMinorVersion ;
  mProperty_mRevisionVersion = inSource.mProperty_mRevisionVersion ;
  mProperty_mGenerationFeatureList = inSource.mProperty_mGenerationFeatureList ;
  mProperty_mQualifiedFeatureList = inSource.mProperty_mQualifiedFeatureList ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mEndOfSourceFile = inSource.mProperty_mEndOfSourceFile ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (const GGS_stringlist & in_mProjectSourceList,
                                                                                                               const GGS_stringlist & in_mToolCppSourceList,
                                                                                                               const GGS_lbigint & in_mMajorVersion,
                                                                                                               const GGS_lbigint & in_mMinorVersion,
                                                                                                               const GGS_lbigint & in_mRevisionVersion,
                                                                                                               const GGS_lstringlist & in_mGenerationFeatureList,
                                                                                                               const GGS__5B_galgasQualifiedFeature_5D_ & in_mQualifiedFeatureList,
                                                                                                               const GGS_lstring & in_mTargetName,
                                                                                                               const GGS_location & in_mEndOfSourceFile,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectSourceList = in_mProjectSourceList ;
  result.mProperty_mToolCppSourceList = in_mToolCppSourceList ;
  result.mProperty_mMajorVersion = in_mMajorVersion ;
  result.mProperty_mMinorVersion = in_mMinorVersion ;
  result.mProperty_mRevisionVersion = in_mRevisionVersion ;
  result.mProperty_mGenerationFeatureList = in_mGenerationFeatureList ;
  result.mProperty_mQualifiedFeatureList = in_mQualifiedFeatureList ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mEndOfSourceFile = in_mEndOfSourceFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_stringlist & inOperand0,
                                                                      const GGS_stringlist & inOperand1,
                                                                      const GGS_lbigint & inOperand2,
                                                                      const GGS_lbigint & inOperand3,
                                                                      const GGS_lbigint & inOperand4,
                                                                      const GGS_lstringlist & inOperand5,
                                                                      const GGS__5B_galgasQualifiedFeature_5D_ & inOperand6,
                                                                      const GGS_lstring & inOperand7,
                                                                      const GGS_location & inOperand8) :
mProperty_mProjectSourceList (inOperand0),
mProperty_mToolCppSourceList (inOperand1),
mProperty_mMajorVersion (inOperand2),
mProperty_mMinorVersion (inOperand3),
mProperty_mRevisionVersion (inOperand4),
mProperty_mGenerationFeatureList (inOperand5),
mProperty_mQualifiedFeatureList (inOperand6),
mProperty_mTargetName (inOperand7),
mProperty_mEndOfSourceFile (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_ProjectComponentAST::isValid (void) const {
  return mProperty_mProjectSourceList.isValid () && mProperty_mToolCppSourceList.isValid () && mProperty_mMajorVersion.isValid () && mProperty_mMinorVersion.isValid () && mProperty_mRevisionVersion.isValid () && mProperty_mGenerationFeatureList.isValid () && mProperty_mQualifiedFeatureList.isValid () && mProperty_mTargetName.isValid () && mProperty_mEndOfSourceFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::drop (void) {
  mProperty_mProjectSourceList.drop () ;
  mProperty_mToolCppSourceList.drop () ;
  mProperty_mMajorVersion.drop () ;
  mProperty_mMinorVersion.drop () ;
  mProperty_mRevisionVersion.drop () ;
  mProperty_mGenerationFeatureList.drop () ;
  mProperty_mQualifiedFeatureList.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mEndOfSourceFile.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3ProjectComponentAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolCppSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMajorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRevisionVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerationFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifiedFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3ProjectComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ("galgas3ProjectComponentAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_ProjectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_ProjectComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_ProjectComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  const GGS_galgas_33_ProjectComponentAST * p = (const GGS_galgas_33_ProjectComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_ProjectComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3ProjectComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_galgas3ProjectGrammar [] = {
// At index 0 : <project_header>, in file 'galgas3ProjectSyntax.ggs', line 60
  TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_project) // $project$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 11 : <project_component_start_symbol>, in file 'galgas3ProjectSyntax.ggs', line 78
, TOP_DOWN_NONTERMINAL (0) // <project_header>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 16 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_END_PRODUCTION ()
// At index 17 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault) // $%quietOutputByDefault$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp) // $%MacSwiftApp$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 23 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx) // $%makefile-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix) // $%makefile-unix$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 29 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx) // $%makefile-x86linux32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 32 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx) // $%makefile-x86linux64-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx) // $%makefile-arm64-linux-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx) // $%makefile-win32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 41 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows) // $%codeblocks-windows$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 44 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_) // $%codeblocks-linux32$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 47 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_) // $%codeblocks-linux64$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 50 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase) // $%applicationBundleBase$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 55 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_libpmAtPath) // $%libpmAtPath$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 60 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_macCodeSign) // $%macCodeSign$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 65 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (1) // <project_component_start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_galgas3ProjectGrammar [18] = {
 {"<project_header>", "galgas3ProjectSyntax", 0}, // at index 0
 {"<project_component_start_symbol>", "galgas3ProjectSyntax", 11}, // at index 1
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 16}, // at index 2
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 17}, // at index 3
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 20}, // at index 4
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 23}, // at index 5
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 26}, // at index 6
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 29}, // at index 7
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 32}, // at index 8
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 35}, // at index 9
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 38}, // at index 10
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 41}, // at index 11
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 44}, // at index 12
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 47}, // at index 13
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 50}, // at index 14
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 55}, // at index 15
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 60}, // at index 16
 {"<>", "", 65} // at index 17
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_galgas3ProjectGrammar [18] = {
0, // index 0 : <project_header>, in file 'galgas3ProjectSyntax.ggs', line 60
11, // index 1 : <project_component_start_symbol>, in file 'galgas3ProjectSyntax.ggs', line 78
16, // index 2 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
17, // index 3 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
20, // index 4 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
23, // index 5 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
26, // index 6 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
29, // index 7 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
32, // index 8 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
35, // index 9 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
38, // index 10 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
41, // index 11 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
44, // index 12 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
47, // index 13 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
50, // index 14 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
55, // index 15 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
60, // index 16 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
65 // index 17 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_galgas3ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_33_ProjectSyntax_0>
17, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_galgas3ProjectGrammar [] = {
// At index 0 : <project_header> only one production, no choice
  -1,
// At index 1 : <project_component_start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 2 : <select_galgas_33_ProjectSyntax_0>
Lexique_galgasScanner_33_::kToken__7D_, -1, // Choice 1
Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault, -1, // Choice 2
Lexique_galgasScanner_33_::kToken__25_MacSwiftApp, -1, // Choice 3
Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx, -1, // Choice 4
Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix, -1, // Choice 5
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, -1, // Choice 6
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, -1, // Choice 7
Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, -1, // Choice 8
Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx, -1, // Choice 9
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows, -1, // Choice 10
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_, -1, // Choice 11
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_, -1, // Choice 12
Lexique_galgasScanner_33_::kToken__25_applicationBundleBase, -1, // Choice 13
Lexique_galgasScanner_33_::kToken__25_libpmAtPath, -1, // Choice 14
Lexique_galgasScanner_33_::kToken__25_macCodeSign, -1, // Choice 15
  -1,
// At index 33 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_galgas3ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_33_ProjectSyntax_0>
33, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          'project_header' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing(inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_header_ (GGS_lbigint & parameter_1,
                                GGS_lbigint & parameter_2,
                                GGS_lbigint & parameter_3,
                                GGS_lstring & parameter_4,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_header_i0_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'project_component_start_symbol' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing(inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_ (const GGS_lstring parameter_1,
                                GGS_galgas_33_ProjectComponentAST & parameter_2,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_(parameter_1, parameter_2, inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
    if (ok) {
      cGrammar_galgas_33_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                      gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_galgas_33_ProjectGrammar grammar ;
        grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_galgas_33_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_galgas_33_ProjectSyntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_galgas_33_ProjectGrammar::select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// @typePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typePredefinedTypeAST::objectCompare (const GGS_typePredefinedTypeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST::GGS_typePredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typePredefinedTypeAST GGS_typePredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_typePredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_typePredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->typePredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_typePredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::
typePredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST::GGS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typePredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @typePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

void cPtr_typePredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@typePredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typePredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typePredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typePredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typePredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ("typePredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST GGS_typePredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePredefinedTypeAST result ;
  const GGS_typePredefinedTypeAST * p = (const GGS_typePredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typePredefinedTypeAST_2E_weak::objectCompare (const GGS_typePredefinedTypeAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST_2E_weak::GGS_typePredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST_2E_weak & GGS_typePredefinedTypeAST_2E_weak::operator = (const GGS_typePredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST_2E_weak::GGS_typePredefinedTypeAST_2E_weak (const GGS_typePredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST_2E_weak GGS_typePredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typePredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST GGS_typePredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_typePredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_typePredefinedTypeAST * p = (cPtr_typePredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typePredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST GGS_typePredefinedTypeAST_2E_weak::bang_typePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typePredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typePredefinedTypeAST) ;
      result = GGS_typePredefinedTypeAST ((cPtr_typePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typePredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2E_weak ("typePredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePredefinedTypeAST_2E_weak GGS_typePredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePredefinedTypeAST_2E_weak result ;
  const GGS_typePredefinedTypeAST_2E_weak * p = (const GGS_typePredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST::objectCompare (const GGS_mapDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST::GGS_mapDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mMapTypeName,
                                                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                   const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                   const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                   const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                   const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                   const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                   const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GGS_bool & in_equatable,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GGS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lstring & in_mMapTypeName,
                                                                                     const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                                     const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                                     const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                                     const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                                     const GGS_bool & in_equatable,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST::GGS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapDeclarationAST::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                                const GGS_lstring & in_mMapTypeName,
                                                const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                const GGS_insertSetterListAST & in_mInsertSetterList,
                                                const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                const GGS_bool & in_equatable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@mapDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mInsertOrReplaceDeclarationListAST.printNonNullClassInstanceProperties ("mInsertOrReplaceDeclarationListAST") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST result ;
  const GGS_mapDeclarationAST * p = (const GGS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapTypeForGeneration::objectCompare (const GGS_mapTypeForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                  const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                  const GGS_lstring & in_mMapTypeName,
                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                  const GGS_insertSetterListAST & in_mInsertSetterList,
                                                  const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                  const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                  const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                  const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                  const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                  const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                       const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                       const GGS_lstring & in_mMapTypeName,
                                                                       const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                       const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                       const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                       const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                       const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                       const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                       const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                       const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapTypeForGeneration::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GGS_lstring & in_mMapTypeName,
                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                      const GGS_insertSetterListAST & in_mInsertSetterList,
                                                      const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                      const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                      const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                      const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@mapTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mHasInsertOrReplaceModifier.printNonNullClassInstanceProperties ("mHasInsertOrReplaceModifier") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration result ;
  const GGS_mapTypeForGeneration * p = (const GGS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST::objectCompare (const GGS_listDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST::GGS_listDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::
init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mListTypeName,
                                                          const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                          const GGS_bool & in_usefullList,
                                                          const GGS_bool & in_equatable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_listDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_listDeclarationAST (inCompiler COMMA_THERE)) ;
  object->listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable, inCompiler) ;
  const GGS_listDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::
listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mListTypeName,
                                                                             const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GGS_bool & in_usefullList,
                                                                             const GGS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST::GGS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_usefullList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_usefullList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mListTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_usefullList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@listDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_isPredefined, mProperty_mListTypeName, mProperty_mPropertyList, mProperty_usefullList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mListTypeName.printNonNullClassInstanceProperties ("mListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_usefullList.printNonNullClassInstanceProperties ("usefullList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @listDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST result ;
  const GGS_listDeclarationAST * p = (const GGS_listDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST::objectCompare (const GGS_dictDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST::GGS_dictDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mDictTypeName,
                                               const GGS_lstring & in_mKeyTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_dictDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable, inCompiler) ;
  const GGS_dictDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::
dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mDictTypeName,
                                                                  const GGS_lstring & in_mKeyTypeName,
                                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                  const GGS_bool & in_equatable,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST::GGS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dictDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mDictTypeName,
                                                  const GGS_lstring & in_mKeyTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dictDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_isPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mPropertyList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST result ;
  const GGS_dictDeclarationAST * p = (const GGS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictTypeForGeneration::objectCompare (const GGS_dictTypeForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::
init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                              const GGS_lstring & in_mDictTypeName,
                              const GGS_typedPropertyList & in_mTypedAttributeList,
                              const GGS_lstring & in_mKeyTypeName,
                              const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_dictTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_dictTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::
dictTypeForGeneration_init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                    const GGS_lstring & in_mDictTypeName,
                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                    const GGS_lstring & in_mKeyTypeName,
                                                    const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GGS_lstring & in_mDictTypeName,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        const GGS_lstring & in_mKeyTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dictTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration result ;
  const GGS_dictTypeForGeneration * p = (const GGS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeDeclarationAST::objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::
init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_arrayTypeName,
                                                        const GGS_lstring & in_elementTypeName,
                                                        const GGS_bool & in_isUsefull,
                                                        const GGS_bool & in_equatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, in_equatable, inCompiler) ;
  const GGS_arrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::
arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                                                const GGS_lstring & in_arrayTypeName,
                                                                                const GGS_lstring & in_elementTypeName,
                                                                                const GGS_bool & in_isUsefull,
                                                                                const GGS_bool & in_equatable,
                                                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (const cPtr_arrayTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_arrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_arrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_elementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_elementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_arrayTypeName,
                                                            const GGS_lstring & in_elementTypeName,
                                                            const GGS_bool & in_isUsefull,
                                                            const GGS_bool & in_equatable,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

void cPtr_arrayTypeDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_arrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeDeclarationAST (mProperty_isPredefined, mProperty_arrayTypeName, mProperty_elementTypeName, mProperty_isUsefull, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_arrayTypeName.printNonNullClassInstanceProperties ("arrayTypeName") ;
    mProperty_elementTypeName.printNonNullClassInstanceProperties ("elementTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ("arrayTypeDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_arrayTypeDeclarationAST result ;
  const GGS_arrayTypeDeclarationAST * p = (const GGS_arrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeNameFormalParameterNameList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_typeNameFormalParameterNameList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_typeNameFormalParameterNameList temp_0 = inObject ;
  UpEnumerator_typeNameFormalParameterNameList enumerator_11849 (temp_0) ;
  while (enumerator_11849.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_11849.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 313)) ;
    enumerator_11849.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationAST::objectCompare (const GGS_externTypeDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mExternTypeName,
                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                  const GGS_string & in_mCppClassCode,
                                                  const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                  const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                  const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                  const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList, inCompiler) ;
  const GGS_externTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::
externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mExternTypeName,
                                                                           const GGS_string & in_mCppPreDeclarationCode,
                                                                           const GGS_string & in_mCppClassCode,
                                                                           const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeDeclarationAST::readProperty_externTypeInitializerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_externTypeInitializerList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mExternTypeName,
                                                              const GGS_string & in_mCppPreDeclarationCode,
                                                              const GGS_string & in_mCppClassCode,
                                                              const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                              const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_externTypeInitializerList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_isPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_externTypeInitializerList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
    mProperty_externTypeInitializerList.printNonNullClassInstanceProperties ("externTypeInitializerList") ;
    mProperty_mExternTypeGetterList.printNonNullClassInstanceProperties ("mExternTypeGetterList") ;
    mProperty_mExternTypeSetterList.printNonNullClassInstanceProperties ("mExternTypeSetterList") ;
    mProperty_mExternTypeMethodList.printNonNullClassInstanceProperties ("mExternTypeMethodList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST result ;
  const GGS_externTypeDeclarationAST * p = (const GGS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolsetDeclarationAST::objectCompare (const GGS_boolsetDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::
init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mBoolsetTypeName,
                                             const GGS_lstringlist & in_mFlagList,
                                             const GGS_bool & in_isEquatable,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_boolsetDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_boolsetDeclarationAST (inCompiler COMMA_THERE)) ;
  object->boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (in_isPredefined, in_mBoolsetTypeName, in_mFlagList, in_isEquatable, inCompiler) ;
  const GGS_boolsetDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::
boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mBoolsetTypeName,
                                                                   const GGS_lstringlist & in_mFlagList,
                                                                   const GGS_bool & in_isEquatable,
                                                                   Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_boolsetDeclarationAST::readProperty_isEquatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_isEquatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_mBoolsetTypeName,
                                                        const GGS_lstringlist & in_mFlagList,
                                                        const GGS_bool & in_isEquatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@boolsetDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isEquatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_isPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList, mProperty_isEquatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mBoolsetTypeName.printNonNullClassInstanceProperties ("mBoolsetTypeName") ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
    mProperty_isEquatable.printNonNullClassInstanceProperties ("isEquatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolsetDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_boolsetDeclarationAST result ;
  const GGS_boolsetDeclarationAST * p = (const GGS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_weakReferenceDeclarationAST::objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mClassTypeName,
                                      const GGS_lstring & in_mWeakReferenceTypeName,
                                      const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                      const GGS_bool & in_mGenerateInSeparateFile,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_weakReferenceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_weakReferenceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mClassTypeName, in_mWeakReferenceTypeName, in_mSuperWeakReferenceTypeName, in_mGenerateInSeparateFile, inCompiler) ;
  const GGS_weakReferenceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::
weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mClassTypeName,
                                                                  const GGS_lstring & in_mWeakReferenceTypeName,
                                                                  const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_weakReferenceDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
}

//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mClassTypeName,
                                                                    const GGS_lstring & in_mWeakReferenceTypeName,
                                                                    const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@weakReferenceDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_isPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mGenerateInSeparateFile, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_weakReferenceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mWeakReferenceTypeName.printNonNullClassInstanceProperties ("mWeakReferenceTypeName") ;
    mProperty_mSuperWeakReferenceTypeName.printNonNullClassInstanceProperties ("mSuperWeakReferenceTypeName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @weakReferenceDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_weakReferenceDeclarationAST result ;
  const GGS_weakReferenceDeclarationAST * p = (const GGS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classDeclarationAST::objectCompare (const GGS_classDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST::GGS_classDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsAbstract,
                                                  const GGS_bool & in_mIsFinal,
                                                  const GGS_lstring & in_mClassTypeName,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_clonable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_classDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_classDeclarationAST (inCompiler COMMA_THERE)) ;
  object->classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsAbstract, in_mIsFinal, in_mClassTypeName, in_mSuperClassName, in_mGenerateInSeparateFile, in_mPropertyList, in_clonable, inCompiler) ;
  const GGS_classDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::
classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_mIsAbstract,
                                                                      const GGS_bool & in_mIsFinal,
                                                                      const GGS_lstring & in_mClassTypeName,
                                                                      const GGS_lstring & in_mSuperClassName,
                                                                      const GGS_bool & in_mGenerateInSeparateFile,
                                                                      const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                      const GGS_bool & in_clonable,
                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST::GGS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsFinal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsFinal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_clonable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_clonable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_bool & in_mIsAbstract,
                                                    const GGS_bool & in_mIsFinal,
                                                    const GGS_lstring & in_mClassTypeName,
                                                    const GGS_lstring & in_mSuperClassName,
                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                    const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                    const GGS_bool & in_clonable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@classDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsFinal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_clonable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_isPredefined, mProperty_mIsAbstract, mProperty_mIsFinal, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mGenerateInSeparateFile, mProperty_mPropertyList, mProperty_clonable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mIsFinal.printNonNullClassInstanceProperties ("mIsFinal") ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_clonable.printNonNullClassInstanceProperties ("clonable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classDeclarationAST result ;
  const GGS_classDeclarationAST * p = (const GGS_classDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeDeclarationAST::objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::
init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                            const GGS_lstring & in_optionalTypeName,
                                                                            const GGS_lstring & in_unwrappedTypeName,
                                                                            const GGS_bool & in_isUsefull,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, inCompiler) ;
  const GGS_optionalTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::
optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                                                       const GGS_lstring & in_optionalTypeName,
                                                                                                       const GGS_lstring & in_unwrappedTypeName,
                                                                                                       const GGS_bool & in_isUsefull,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (const cPtr_optionalTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_optionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_optionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_unwrappedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_unwrappedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_optionalTypeName,
                                                                  const GGS_lstring & in_unwrappedTypeName,
                                                                  const GGS_bool & in_isUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionalTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

void cPtr_optionalTypeDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_optionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionalTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeDeclarationAST (mProperty_isPredefined, mProperty_optionalTypeName, mProperty_unwrappedTypeName, mProperty_isUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_optionalTypeName.printNonNullClassInstanceProperties ("optionalTypeName") ;
    mProperty_unwrappedTypeName.printNonNullClassInstanceProperties ("unwrappedTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionalTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ("optionalTypeDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST result ;
  const GGS_optionalTypeDeclarationAST * p = (const GGS_optionalTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListDeclarationAST::objectCompare (const GGS_sortedListDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mSortedListTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_sortedListDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_sortedListDeclarationAST (inCompiler COMMA_THERE)) ;
  object->sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable, inCompiler) ;
  const GGS_sortedListDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::
sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mSortedListTypeName,
                                                                        const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                        const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                        const GGS_bool & in_equatable,
                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortedListDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mSortedListTypeName,
                                                              const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                              const GGS_bool & in_equatable,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_isPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSortedListTypeName.printNonNullClassInstanceProperties ("mSortedListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sortedListDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST result ;
  const GGS_sortedListDeclarationAST * p = (const GGS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structDeclarationAST::objectCompare (const GGS_structDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST::GGS_structDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::
init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                            const GGS_lstring & in_structTypeName,
                                                                                            const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                            const GGS_string & in_enumeratedElementTypeName,
                                                                                            const GGS_structComparison & in_comparison,
                                                                                            const GGS_bool & in_isUsefullStruct,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_structDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefullStruct, inCompiler) ;
  const GGS_structDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::
structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                                                 const GGS_lstring & in_structTypeName,
                                                                                                                 const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                                                 const GGS_string & in_enumeratedElementTypeName,
                                                                                                                 const GGS_structComparison & in_comparison,
                                                                                                                 const GGS_bool & in_isUsefullStruct,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST::GGS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structDeclarationAST::readProperty_structTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_structTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_structDeclarationAST::readProperty_enumeratedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_enumeratedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structDeclarationAST::readProperty_isUsefullStruct (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_isUsefullStruct ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_structTypeName,
                                                      const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                      const GGS_string & in_enumeratedElementTypeName,
                                                      const GGS_structComparison & in_comparison,
                                                      const GGS_bool & in_isUsefullStruct,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@structDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefullStruct.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_isPredefined, mProperty_structTypeName, mProperty_mStructurePropertyListAST, mProperty_enumeratedElementTypeName, mProperty_comparison, mProperty_isUsefullStruct, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_structTypeName.printNonNullClassInstanceProperties ("structTypeName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_enumeratedElementTypeName.printNonNullClassInstanceProperties ("enumeratedElementTypeName") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
    mProperty_isUsefullStruct.printNonNullClassInstanceProperties ("isUsefullStruct") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST result ;
  const GGS_structDeclarationAST * p = (const GGS_structDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationAST::objectCompare (const GGS_graphDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mGraphTypeName,
                                  const GGS_lstring & in_mAssociatedListTypeName,
                                  const GGS_graphInsertModifierList & in_mInsertModifierList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_mGraphTypeName,
                                                      const GGS_lstring & in_mAssociatedListTypeName,
                                                      const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList GGS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mGraphTypeName,
                                                    const GGS_lstring & in_mAssociatedListTypeName,
                                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGraphTypeName.printNonNullClassInstanceProperties ("mGraphTypeName") ;
    mProperty_mAssociatedListTypeName.printNonNullClassInstanceProperties ("mAssociatedListTypeName") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @graphDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationAST result ;
  const GGS_graphDeclarationAST * p = (const GGS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (void) :
mProperty_weakQualifier (),
mProperty_typeName (),
mProperty_valueName () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_associatedValue & inSource) :
mProperty_weakQualifier (inSource.mProperty_weakQualifier),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_valueName (inSource.mProperty_valueName) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue & GGS_associatedValue::operator = (const GGS_associatedValue & inSource) {
  mProperty_weakQualifier = inSource.mProperty_weakQualifier ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_valueName = inSource.mProperty_valueName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::init_21__21__21_ (const GGS_bool & in_weakQualifier,
                                                           const GGS_lstring & in_typeName,
                                                           const GGS_lstring & in_valueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakQualifier = in_weakQualifier ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_bool & inOperand0,
                                          const GGS_lstring & inOperand1,
                                          const GGS_lstring & inOperand2) :
mProperty_weakQualifier (inOperand0),
mProperty_typeName (inOperand1),
mProperty_valueName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValue::isValid (void) const {
  return mProperty_weakQualifier.isValid () && mProperty_typeName.isValid () && mProperty_valueName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::drop (void) {
  mProperty_weakQualifier.drop () ;
  mProperty_typeName.drop () ;
  mProperty_valueName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ("associatedValue",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_associatedValue result ;
  const GGS_associatedValue * p = (const GGS_associatedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumDeclarationAST::objectCompare (const GGS_enumDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_enumTypeName,
                                            const GGS_enumConstantList & in_mConstantList,
                                            const GGS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison, inCompiler) ;
  const GGS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS_enumConstantList & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_enumTypeName,
                                                  const GGS_enumConstantList & in_mConstantList,
                                                  const GGS_structComparison & in_comparison,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_mConstantList, mProperty_comparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_mConstantList.printNonNullClassInstanceProperties ("mConstantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  const GGS_enumDeclarationAST * p = (const GGS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) :
mProperty_mLogMessage (inSource.mProperty_mLogMessage),
mProperty_mLogExpression (inSource.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element & GGS_logListAST_2E_element::operator = (const GGS_logListAST_2E_element & inSource) {
  mProperty_mLogMessage = inSource.mProperty_mLogMessage ;
  mProperty_mLogExpression = inSource.mProperty_mLogExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::init_21__21_ (const GGS_lstring & in_mLogMessage,
                                                                   const GGS_semanticExpressionAST & in_mLogExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_logListAST_2E_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @logListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @logListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logListAST_2E_element ("logListAST.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  const GGS_logListAST_2E_element * p = (const GGS_logListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_switchExtractedValuesListAST_2E_element & inSource) :
mProperty_mExtractedValueTypeName (inSource.mProperty_mExtractedValueTypeName),
mProperty_mExtractedValueName (inSource.mProperty_mExtractedValueName),
mProperty_mMarkedAsUnused (inSource.mProperty_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element & GGS_switchExtractedValuesListAST_2E_element::operator = (const GGS_switchExtractedValuesListAST_2E_element & inSource) {
  mProperty_mExtractedValueTypeName = inSource.mProperty_mExtractedValueTypeName ;
  mProperty_mExtractedValueName = inSource.mProperty_mExtractedValueName ;
  mProperty_mMarkedAsUnused = inSource.mProperty_mMarkedAsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mExtractedValueTypeName,
                                                                                                           const GGS_lstring & in_mExtractedValueName,
                                                                                                           const GGS_bool & in_mMarkedAsUnused,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchExtractedValuesListAST_2E_element::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchExtractedValuesListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchExtractedValuesListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ("switchExtractedValuesListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchExtractedValuesListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchExtractedValuesListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchExtractedValuesListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  const GGS_switchExtractedValuesListAST_2E_element * p = (const GGS_switchExtractedValuesListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchExtractedValuesListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace & GGS_fixitElementForGeneration_2E_fixItReplace::operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ("fixitElementForGeneration.fixItReplace",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace * p = (const GGS_fixitElementForGeneration_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItReplace_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ("fixitElementForGeneration.fixItReplace?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore & GGS_fixitElementForGeneration_2E_fixItInsertBefore::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ("fixitElementForGeneration.fixItInsertBefore",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertBefore_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ("fixitElementForGeneration.fixItInsertBefore?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter & GGS_fixitElementForGeneration_2E_fixItInsertAfter::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ("fixitElementForGeneration.fixItInsertAfter",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertAfter_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ("fixitElementForGeneration.fixItInsertAfter?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (void) :
mProperty_varName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_endOfExp (),
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
mProperty_varName (inSource.mProperty_varName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp),
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp & GGS_ifExpressionKind_2E_letVarExp::operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) {
  mProperty_varName = inSource.mProperty_varName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::init_21__21__21__21__21_ (const GGS_lstring & in_varName,
                                                                                               const GGS_bool & in_isConstant,
                                                                                               const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_endOfExp,
                                                                                               const GGS_lstring & in_typeName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_semanticExpressionAST & inOperand2,
                                                                      const GGS_location & inOperand3,
                                                                      const GGS_lstring & inOperand4) :
mProperty_varName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_endOfExp (inOperand3),
mProperty_typeName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp::isValid (void) const {
  return mProperty_varName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_endOfExp.isValid () && mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::drop (void) {
  mProperty_varName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ("ifExpressionKind.letVarExp",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  const GGS_ifExpressionKind_2E_letVarExp * p = (const GGS_ifExpressionKind_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ("ifExpressionKind.letVarExp?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  const GGS_ifExpressionKind_2E_letVarExp_3F_ * p = (const GGS_ifExpressionKind_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular & GGS_ifTestForGeneration_2E_regular::operator = (const GGS_ifTestForGeneration_2E_regular & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.regular:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ("ifTestForGeneration.regular",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  const GGS_ifTestForGeneration_2E_regular * p = (const GGS_ifTestForGeneration_2E_regular *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_regular_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_regular () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ("ifTestForGeneration.regular?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  const GGS_ifTestForGeneration_2E_regular_3F_ * p = (const GGS_ifTestForGeneration_2E_regular_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (void) :
mProperty_targetVarCppName (),
mProperty_exp (),
mProperty_targetType (),
mProperty_testType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType),
mProperty_testType (inSource.mProperty_testType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp & GGS_ifTestForGeneration_2E_letVarExp::operator = (const GGS_ifTestForGeneration_2E_letVarExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  mProperty_testType = inSource.mProperty_testType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                 const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                 const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                 const GGS_unifiedTypeMapEntry & in_testType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  result.mProperty_testType = in_testType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_string & inOperand0,
                                                                            const GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_exp (inOperand1),
mProperty_targetType (inOperand2),
mProperty_testType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () && mProperty_testType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
  mProperty_testType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_testType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ("ifTestForGeneration.letVarExp",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  const GGS_ifTestForGeneration_2E_letVarExp * p = (const GGS_ifTestForGeneration_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ("ifTestForGeneration.letVarExp?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_letVarExp_3F_ * p = (const GGS_ifTestForGeneration_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (void) :
mProperty_targetVarCppName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_targetType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp & GGS_ifTestForGeneration_2E_optionalExp::operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                     const GGS_bool & in_isConstant,
                                                                                                     const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                     const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & inOperand0,
                                                                                const GGS_bool & inOperand1,
                                                                                const GGS_semanticExpressionForGeneration & inOperand2,
                                                                                const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_targetType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.optionalExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ("ifTestForGeneration.optionalExp",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  const GGS_ifTestForGeneration_2E_optionalExp * p = (const GGS_ifTestForGeneration_2E_optionalExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_optionalExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_optionalExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ("ifTestForGeneration.optionalExp?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_optionalExp_3F_ * p = (const GGS_ifTestForGeneration_2E_optionalExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) :
mProperty_mOptionalTypeName (inSource.mProperty_mOptionalTypeName),
mProperty_mDeclaredAsUnused (inSource.mProperty_mDeclaredAsUnused),
mProperty_mOptionalConstantName (inSource.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element & GGS_forInstructionEnumeratedObjectElementListAST_2E_element::operator = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) {
  mProperty_mOptionalTypeName = inSource.mProperty_mOptionalTypeName ;
  mProperty_mDeclaredAsUnused = inSource.mProperty_mDeclaredAsUnused ;
  mProperty_mOptionalConstantName = inSource.mProperty_mOptionalConstantName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                           const GGS_lstring & in_mOptionalConstantName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                                          const GGS_bool & inOperand1,
                                                                                                                          const GGS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectElementListAST_2E_element::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectElementListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ("forInstructionEnumeratedObjectElementListAST.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) :
mProperty_mEnumerationOrder (inSource.mProperty_mEnumerationOrder),
mProperty_mEnumeratedExpression (inSource.mProperty_mEnumeratedExpression),
mProperty_mEnumeratorCppName (inSource.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::operator = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) {
  mProperty_mEnumerationOrder = inSource.mProperty_mEnumerationOrder ;
  mProperty_mEnumeratedExpression = inSource.mProperty_mEnumeratedExpression ;
  mProperty_mEnumeratorCppName = inSource.mProperty_mEnumeratorCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mEnumerationOrder,
                                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                 const GGS_string & in_mEnumeratorCppName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                                                const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                const GGS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ("forInstructionEnumeratedObjectListForGeneration.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element * p = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (void) :
mProperty_lkey (),
mProperty_argumentTypeList (),
mProperty_valueType () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_subscriptMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_argumentTypeList (inSource.mProperty_argumentTypeList),
mProperty_valueType (inSource.mProperty_valueType) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element & GGS_subscriptMap_2E_element::operator = (const GGS_subscriptMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_argumentTypeList = inSource.mProperty_argumentTypeList ;
  mProperty_valueType = inSource.mProperty_valueType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_functionSignature & in_argumentTypeList,
                                                                           const GGS_unifiedTypeMapEntry & in_valueType,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_argumentTypeList = in_argumentTypeList ;
  result.mProperty_valueType = in_valueType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_functionSignature & inOperand1,
                                                          const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_argumentTypeList (inOperand1),
mProperty_valueType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_argumentTypeList.isValid () && mProperty_valueType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_argumentTypeList.drop () ;
  mProperty_valueType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @subscriptMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_argumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ("subscriptMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  const GGS_subscriptMap_2E_element * p = (const GGS_subscriptMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @subscriptMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::init_nil (void) {
  GGS_subscriptMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_subscriptMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ("subscriptMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element_3F_ result ;
  const GGS_subscriptMap_2E_element_3F_ * p = (const GGS_subscriptMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (const GGS_internalRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentMap (inSource.mProperty_mArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element & GGS_internalRoutineMap_2E_element::operator = (const GGS_internalRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentMap = inSource.mProperty_mArgumentMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_internalRoutineMap_2E_element GGS_internalRoutineMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_routineArgumentMap & in_mArgumentMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentMap = in_mArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_routineArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @internalRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @internalRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ("internalRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_internalRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_internalRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element GGS_internalRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element result ;
  const GGS_internalRoutineMap_2E_element * p = (const GGS_internalRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @internalRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_::GGS_internalRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_::GGS_internalRoutineMap_2E_element_3F_ (const GGS_internalRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_internalRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @internalRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ("internalRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_internalRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_internalRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  const GGS_internalRoutineMap_2E_element_3F_ * p = (const GGS_internalRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineSignature (),
mProperty_mIsFilePrivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (const GGS_routineArgumentMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineSignature (inSource.mProperty_mRoutineSignature),
mProperty_mIsFilePrivate (inSource.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element & GGS_routineArgumentMap_2E_element::operator = (const GGS_routineArgumentMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineSignature = inSource.mProperty_mRoutineSignature ;
  mProperty_mIsFilePrivate = inSource.mProperty_mIsFilePrivate ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineArgumentMap_2E_element GGS_routineArgumentMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                       const GGS_bool & in_mIsFilePrivate,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_formalParameterSignature & inOperand1,
                                                                      const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineSignature (inOperand1),
mProperty_mIsFilePrivate (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineSignature.isValid () && mProperty_mIsFilePrivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsFilePrivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineArgumentMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsFilePrivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ("routineArgumentMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineArgumentMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element GGS_routineArgumentMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element result ;
  const GGS_routineArgumentMap_2E_element * p = (const GGS_routineArgumentMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineArgumentMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_::GGS_routineArgumentMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_::GGS_routineArgumentMap_2E_element_3F_ (const GGS_routineArgumentMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap_2E_element_3F_::init_nil (void) {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineArgumentMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ("routineArgumentMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineArgumentMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  const GGS_routineArgumentMap_2E_element_3F_ * p = (const GGS_routineArgumentMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (const GGS_formalParameterListAST_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element & GGS_formalParameterListAST_2E_element::operator = (const GGS_formalParameterListAST_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterListAST_2E_element GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                       const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                       const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                       const GGS_lstring & in_mFormalArgumentName,
                                                                                                       const GGS_bool & in_mIsUnused,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_formalArgumentPassingModeAST & inOperand1,
                                                                              const GGS_lstring & inOperand2,
                                                                              const GGS_lstring & inOperand3,
                                                                              const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsUnused (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterListAST_2E_element ("formalParameterListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element GGS_formalParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_formalParameterListAST_2E_element result ;
  const GGS_formalParameterListAST_2E_element * p = (const GGS_formalParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused (),
mProperty_mIsConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (const GGS_formalInputParameterListAST_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused),
mProperty_mIsConstant (inSource.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element & GGS_formalInputParameterListAST_2E_element::operator = (const GGS_formalInputParameterListAST_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element GGS_formalInputParameterListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                                 const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                 const GGS_lstring & in_mFormalArgumentName,
                                                                                                                 const GGS_bool & in_mIsUnused,
                                                                                                                 const GGS_bool & in_mIsConstant,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2,
                                                                                        const GGS_bool & inOperand3,
                                                                                        const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () && mProperty_mIsConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
  mProperty_mIsConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterListAST_2E_element ("formalInputParameterListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element GGS_formalInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_formalInputParameterListAST_2E_element result ;
  const GGS_formalInputParameterListAST_2E_element * p = (const GGS_formalInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (void) :
mProperty_mActualSelector (),
mProperty_mInputParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (const GGS_actualInputParameterListAST_2E_element & inSource) :
mProperty_mActualSelector (inSource.mProperty_mActualSelector),
mProperty_mInputParameter (inSource.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element & GGS_actualInputParameterListAST_2E_element::operator = (const GGS_actualInputParameterListAST_2E_element & inSource) {
  mProperty_mActualSelector = inSource.mProperty_mActualSelector ;
  mProperty_mInputParameter = inSource.mProperty_mInputParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element GGS_actualInputParameterListAST_2E_element::init_21__21_ (const GGS_lstring & in_mActualSelector,
                                                                                                     const GGS_abstractInputParameter & in_mInputParameter,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mInputParameter = in_mInputParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_abstractInputParameter & inOperand1) :
mProperty_mActualSelector (inOperand0),
mProperty_mInputParameter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mInputParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mInputParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ("actualInputParameterListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element GGS_actualInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_actualInputParameterListAST_2E_element result ;
  const GGS_actualInputParameterListAST_2E_element * p = (const GGS_actualInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element & GGS_semanticInstructionListAST_2E_element::operator = (const GGS_semanticInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::init_21_ (const GGS_semanticInstructionAST & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ("semanticInstructionListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  const GGS_semanticInstructionListAST_2E_element * p = (const GGS_semanticInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (void) :
mProperty_mFormalTemplateSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) :
mProperty_mFormalTemplateSelector (inSource.mProperty_mFormalTemplateSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element & GGS_formalTemplateInputParameterListAST_2E_element::operator = (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) {
  mProperty_mFormalTemplateSelector = inSource.mProperty_mFormalTemplateSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element GGS_formalTemplateInputParameterListAST_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalTemplateSelector,
                                                                                                                             const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                             const GGS_lstring & in_mFormalArgumentName,
                                                                                                                             const GGS_bool & in_mIsUnused,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalTemplateSelector = in_mFormalTemplateSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                        const GGS_lstring & inOperand1,
                                                                                                        const GGS_lstring & inOperand2,
                                                                                                        const GGS_bool & inOperand3) :
mProperty_mFormalTemplateSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalTemplateInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalTemplateSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::drop (void) {
  mProperty_mFormalTemplateSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalTemplateInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalTemplateSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalTemplateInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ("formalTemplateInputParameterListAST.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalTemplateInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalTemplateInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalTemplateInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element GGS_formalTemplateInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST_2E_element result ;
  const GGS_formalTemplateInputParameterListAST_2E_element * p = (const GGS_formalTemplateInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalTemplateInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplatePath (),
mProperty_mFilewrapperTemplateFormalInputParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (const GGS_filewrapperTemplateListAST_2E_element & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplatePath (inSource.mProperty_mFilewrapperTemplatePath),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element & GGS_filewrapperTemplateListAST_2E_element::operator = (const GGS_filewrapperTemplateListAST_2E_element & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplatePath = inSource.mProperty_mFilewrapperTemplatePath ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element GGS_filewrapperTemplateListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mFilewrapperTemplateName,
                                                                                                       const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                                                       const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplatePath = in_mFilewrapperTemplatePath ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS_formalTemplateInputParameterListAST & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplatePath (inOperand1),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateListAST_2E_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplatePath.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ("filewrapperTemplateListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element GGS_filewrapperTemplateListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST_2E_element result ;
  const GGS_filewrapperTemplateListAST_2E_element * p = (const GGS_filewrapperTemplateListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfArgumentLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (const GGS_nonTerminalLabelListAST_2E_element & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mFormalArgumentList (inSource.mProperty_mFormalArgumentList),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element & GGS_nonTerminalLabelListAST_2E_element::operator = (const GGS_nonTerminalLabelListAST_2E_element & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mFormalArgumentList = inSource.mProperty_mFormalArgumentList ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                                 const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_formalParameterListAST & inOperand1,
                                                                                const GGS_location & inOperand2) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArgumentList (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ("nonTerminalLabelListAST.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element GGS_nonTerminalLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST_2E_element result ;
  const GGS_nonTerminalLabelListAST_2E_element * p = (const GGS_nonTerminalLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabels () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (const GGS_nonterminalDeclarationListAST_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mLabels (inSource.mProperty_mLabels) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element & GGS_nonterminalDeclarationListAST_2E_element::operator = (const GGS_nonterminalDeclarationListAST_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element GGS_nonterminalDeclarationListAST_2E_element::init_21__21_ (const GGS_lstring & in_mNonterminalName,
                                                                                                         const GGS_nonTerminalLabelListAST & in_mLabels,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mLabels = in_mLabels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_nonTerminalLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabels (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabels.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabels.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ("nonterminalDeclarationListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element GGS_nonterminalDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonterminalDeclarationListAST_2E_element result ;
  const GGS_nonterminalDeclarationListAST_2E_element * p = (const GGS_nonterminalDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArguments (),
mProperty_mEndOfArgumentLocation (),
mProperty_mSyntaxInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (const GGS_syntaxRuleLabelListAST_2E_element & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mFormalArguments (inSource.mProperty_mFormalArguments),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation),
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element & GGS_syntaxRuleLabelListAST_2E_element::operator = (const GGS_syntaxRuleLabelListAST_2E_element & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mFormalArguments = inSource.mProperty_mFormalArguments ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element GGS_syntaxRuleLabelListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                                       const GGS_formalParameterListAST & in_mFormalArguments,
                                                                                                       const GGS_location & in_mEndOfArgumentLocation,
                                                                                                       const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                       const GGS_location & in_mEndOfInstructionList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mFormalArguments = in_mFormalArguments ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_formalParameterListAST & inOperand1,
                                                                              const GGS_location & inOperand2,
                                                                              const GGS_syntaxInstructionList & inOperand3,
                                                                              const GGS_location & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArguments (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2),
mProperty_mSyntaxInstructionList (inOperand3),
mProperty_mEndOfInstructionList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxRuleLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArguments.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArguments.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxRuleLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArguments.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxRuleLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ("syntaxRuleLabelListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element GGS_syntaxRuleLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST_2E_element result ;
  const GGS_syntaxRuleLabelListAST_2E_element * p = (const GGS_syntaxRuleLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabelList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (const GGS_syntaxRuleListAST_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mLabelList (inSource.mProperty_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element & GGS_syntaxRuleListAST_2E_element::operator = (const GGS_syntaxRuleListAST_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mLabelList = inSource.mProperty_mLabelList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element GGS_syntaxRuleListAST_2E_element::init_21__21_ (const GGS_lstring & in_mNonterminalName,
                                                                                 const GGS_syntaxRuleLabelListAST & in_mLabelList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mLabelList = in_mLabelList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_syntaxRuleLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabelList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxRuleListAST_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabelList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabelList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxRuleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxRuleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ("syntaxRuleListAST.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element GGS_syntaxRuleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleListAST_2E_element result ;
  const GGS_syntaxRuleListAST_2E_element * p = (const GGS_syntaxRuleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mImportedLexiqueFilePath (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mImportedLexiqueFilePath (inSource.mProperty_mImportedLexiqueFilePath),
mProperty_mNonterminalDeclarationList (inSource.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inSource.mProperty_mRuleList),
mProperty_mHasTranslateFeature (inSource.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element & GGS_galgas_33_SyntaxComponentListAST_2E_element::operator = (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mImportedLexiqueFilePath = inSource.mProperty_mImportedLexiqueFilePath ;
  mProperty_mNonterminalDeclarationList = inSource.mProperty_mNonterminalDeclarationList ;
  mProperty_mRuleList = inSource.mProperty_mRuleList ;
  mProperty_mHasTranslateFeature = inSource.mProperty_mHasTranslateFeature ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element GGS_galgas_33_SyntaxComponentListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                                           const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                                           const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                                           const GGS_bool & in_mHasTranslateFeature,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mImportedLexiqueFilePath = in_mImportedLexiqueFilePath ;
  result.mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  result.mProperty_mRuleList = in_mRuleList ;
  result.mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_lstring & inOperand1,
                                                                                                  const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                                  const GGS_syntaxRuleListAST & inOperand3,
                                                                                                  const GGS_bool & inOperand4) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mImportedLexiqueFilePath (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_SyntaxComponentListAST_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mImportedLexiqueFilePath.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mImportedLexiqueFilePath.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3SyntaxComponentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ("galgas3SyntaxComponentListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element GGS_galgas_33_SyntaxComponentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST_2E_element result ;
  const GGS_galgas_33_SyntaxComponentListAST_2E_element * p = (const GGS_galgas_33_SyntaxComponentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mNonterminalDeclarationList (inSource.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inSource.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element & GGS_galgas_33_SyntaxExtensionListAST_2E_element::operator = (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mNonterminalDeclarationList = inSource.mProperty_mNonterminalDeclarationList ;
  mProperty_mRuleList = inSource.mProperty_mRuleList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                                   const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                                   const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  result.mProperty_mRuleList = in_mRuleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                                  const GGS_syntaxRuleListAST & inOperand2) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonterminalDeclarationList (inOperand1),
mProperty_mRuleList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_SyntaxExtensionListAST_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3SyntaxExtensionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxExtensionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2E_element ("galgas3SyntaxExtensionListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxExtensionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxExtensionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxExtensionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element GGS_galgas_33_SyntaxExtensionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST_2E_element result ;
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element * p = (const GGS_galgas_33_SyntaxExtensionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxExtensionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (void) :
mProperty_mSourceFileExtension (),
mProperty_mSourceFileHelp (),
mProperty_mSourceFileVariableName (),
mProperty_mSourceFileVariableNameIsUnused (),
mProperty_mReferenceGrammar (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (const GGS_programRuleList_2E_element & inSource) :
mProperty_mSourceFileExtension (inSource.mProperty_mSourceFileExtension),
mProperty_mSourceFileHelp (inSource.mProperty_mSourceFileHelp),
mProperty_mSourceFileVariableName (inSource.mProperty_mSourceFileVariableName),
mProperty_mSourceFileVariableNameIsUnused (inSource.mProperty_mSourceFileVariableNameIsUnused),
mProperty_mReferenceGrammar (inSource.mProperty_mReferenceGrammar),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element & GGS_programRuleList_2E_element::operator = (const GGS_programRuleList_2E_element & inSource) {
  mProperty_mSourceFileExtension = inSource.mProperty_mSourceFileExtension ;
  mProperty_mSourceFileHelp = inSource.mProperty_mSourceFileHelp ;
  mProperty_mSourceFileVariableName = inSource.mProperty_mSourceFileVariableName ;
  mProperty_mSourceFileVariableNameIsUnused = inSource.mProperty_mSourceFileVariableNameIsUnused ;
  mProperty_mReferenceGrammar = inSource.mProperty_mReferenceGrammar ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_programRuleList_2E_element GGS_programRuleList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mSourceFileExtension,
                                                                                                 const GGS_lstring & in_mSourceFileHelp,
                                                                                                 const GGS_lstring & in_mSourceFileVariableName,
                                                                                                 const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                                                                 const GGS_lstring & in_mReferenceGrammar,
                                                                                                 const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                                 const GGS_location & in_mEndOfInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programRuleList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSourceFileExtension = in_mSourceFileExtension ;
  result.mProperty_mSourceFileHelp = in_mSourceFileHelp ;
  result.mProperty_mSourceFileVariableName = in_mSourceFileVariableName ;
  result.mProperty_mSourceFileVariableNameIsUnused = in_mSourceFileVariableNameIsUnused ;
  result.mProperty_mReferenceGrammar = in_mReferenceGrammar ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1,
                                                                const GGS_lstring & inOperand2,
                                                                const GGS_bool & inOperand3,
                                                                const GGS_lstring & inOperand4,
                                                                const GGS_semanticInstructionListAST & inOperand5,
                                                                const GGS_location & inOperand6) :
mProperty_mSourceFileExtension (inOperand0),
mProperty_mSourceFileHelp (inOperand1),
mProperty_mSourceFileVariableName (inOperand2),
mProperty_mSourceFileVariableNameIsUnused (inOperand3),
mProperty_mReferenceGrammar (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfInstructionList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_programRuleList_2E_element::isValid (void) const {
  return mProperty_mSourceFileExtension.isValid () && mProperty_mSourceFileHelp.isValid () && mProperty_mSourceFileVariableName.isValid () && mProperty_mSourceFileVariableNameIsUnused.isValid () && mProperty_mReferenceGrammar.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::drop (void) {
  mProperty_mSourceFileExtension.drop () ;
  mProperty_mSourceFileHelp.drop () ;
  mProperty_mSourceFileVariableName.drop () ;
  mProperty_mSourceFileVariableNameIsUnused.drop () ;
  mProperty_mReferenceGrammar.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programRuleList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSourceFileExtension.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileHelp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileVariableName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReferenceGrammar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @programRuleList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList_2E_element ("programRuleList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programRuleList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programRuleList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programRuleList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element GGS_programRuleList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_programRuleList_2E_element result ;
  const GGS_programRuleList_2E_element * p = (const GGS_programRuleList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programRuleList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExtension () {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_equatableExtensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtension (inSource.mProperty_mExtension) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element & GGS_equatableExtensionMap_2E_element::operator = (const GGS_equatableExtensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtension = inSource.mProperty_mExtension ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_equatableComparableExtension & in_mExtension,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtension = in_mExtension ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_equatableComparableExtension & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtension (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtension.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtension.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @equatableExtensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtension.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ("equatableExtensionMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  const GGS_equatableExtensionMap_2E_element * p = (const GGS_equatableExtensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @equatableExtensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (const GGS_equatableExtensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::init_nil (void) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_equatableExtensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ("equatableExtensionMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  const GGS_equatableExtensionMap_2E_element_3F_ * p = (const GGS_equatableExtensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_isConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (const GGS_functionSignature_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_isConstant (inSource.mProperty_isConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element & GGS_functionSignature_2E_element::operator = (const GGS_functionSignature_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_functionSignature_2E_element GGS_functionSignature_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                         const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                         const GGS_string & in_mFormalArgumentName,
                                                                                         const GGS_bool & in_isConstant,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_isConstant = in_isConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_unifiedTypeMapEntry & inOperand1,
                                                                    const GGS_string & inOperand2,
                                                                    const GGS_bool & inOperand3) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_isConstant (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionSignature_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_isConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_isConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @functionSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionSignature_2E_element ("functionSignature.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element GGS_functionSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_functionSignature_2E_element result ;
  const GGS_functionSignature_2E_element * p = (const GGS_functionSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (const GGS_classFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inSource.mProperty_mReturnedType) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element & GGS_classFunctionMap_2E_element::operator = (const GGS_classFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mReturnedType = inSource.mProperty_mReturnedType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classFunctionMap_2E_element GGS_classFunctionMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_functionSignature & in_mArgumentTypeList,
                                                                                       const GGS_bool & in_mHasCompilerArgument,
                                                                                       const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mReturnedType = in_mReturnedType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_functionSignature & inOperand1,
                                                                  const GGS_bool & inOperand2,
                                                                  const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2),
mProperty_mReturnedType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element ("classFunctionMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element GGS_classFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element result ;
  const GGS_classFunctionMap_2E_element * p = (const GGS_classFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_::GGS_classFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_::GGS_classFunctionMap_2E_element_3F_ (const GGS_classFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_classFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ("classFunctionMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element_3F_ result ;
  const GGS_classFunctionMap_2E_element_3F_ * p = (const GGS_classFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (const GGS_initializerMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element & GGS_initializerMap_2E_element::operator = (const GGS_initializerMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_initializerMap_2E_element GGS_initializerMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_functionSignature & in_mArgumentTypeList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_initializerMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_functionSignature & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_initializerMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @initializerMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element ("initializerMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element GGS_initializerMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_initializerMap_2E_element result ;
  const GGS_initializerMap_2E_element * p = (const GGS_initializerMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @initializerMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_::GGS_initializerMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_::GGS_initializerMap_2E_element_3F_ (const GGS_initializerMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_ GGS_initializerMap_2E_element_3F_::init_nil (void) {
  GGS_initializerMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_initializerMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_initializerMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_initializerMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element_3F_ ("initializerMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_ GGS_initializerMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_initializerMap_2E_element_3F_ result ;
  const GGS_initializerMap_2E_element_3F_ * p = (const GGS_initializerMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (void) :
mProperty_mInputArgument (),
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (const GGS_optionalMethodSignature_2E_element & inSource) :
mProperty_mInputArgument (inSource.mProperty_mInputArgument),
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element & GGS_optionalMethodSignature_2E_element::operator = (const GGS_optionalMethodSignature_2E_element & inSource) {
  mProperty_mInputArgument = inSource.mProperty_mInputArgument ;
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element GGS_optionalMethodSignature_2E_element::init_21__21__21__21_ (const GGS_bool & in_mInputArgument,
                                                                                                     const GGS_lstring & in_mFormalSelector,
                                                                                                     const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                     const GGS_string & in_mFormalArgumentName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalMethodSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputArgument = in_mInputArgument ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (const GGS_bool & inOperand0,
                                                                                const GGS_lstring & inOperand1,
                                                                                const GGS_unifiedTypeMapEntry & inOperand2,
                                                                                const GGS_string & inOperand3) :
mProperty_mInputArgument (inOperand0),
mProperty_mFormalSelector (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalMethodSignature_2E_element::isValid (void) const {
  return mProperty_mInputArgument.isValid () && mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::drop (void) {
  mProperty_mInputArgument.drop () ;
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalMethodSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ("optionalMethodSignature.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalMethodSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalMethodSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalMethodSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element GGS_optionalMethodSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalMethodSignature_2E_element result ;
  const GGS_optionalMethodSignature_2E_element * p = (const GGS_optionalMethodSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalMethodSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mArgumentTypeList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType (),
mProperty_mQualifier (),
mProperty_mGetterNameThatObsoletesInvokationName () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (const GGS_getterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList),
mProperty_mDeclarationLocation (inSource.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inSource.mProperty_mReturnedType),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mGetterNameThatObsoletesInvokationName (inSource.mProperty_mGetterNameThatObsoletesInvokationName) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element & GGS_getterMap_2E_element::operator = (const GGS_getterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  mProperty_mDeclarationLocation = inSource.mProperty_mDeclarationLocation ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mReturnedType = inSource.mProperty_mReturnedType ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mGetterNameThatObsoletesInvokationName = inSource.mProperty_mGetterNameThatObsoletesInvokationName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_getterMap_2E_element GGS_getterMap_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_methodKind & in_mKind,
                                                                                         const GGS_functionSignature & in_mArgumentTypeList,
                                                                                         const GGS_location & in_mDeclarationLocation,
                                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                                         const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                                                                         const GGS_methodQualifier & in_mQualifier,
                                                                                         const GGS_string & in_mGetterNameThatObsoletesInvokationName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  result.mProperty_mDeclarationLocation = in_mDeclarationLocation ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mReturnedType = in_mReturnedType ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mGetterNameThatObsoletesInvokationName = in_mGetterNameThatObsoletesInvokationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_methodKind & inOperand1,
                                                    const GGS_functionSignature & inOperand2,
                                                    const GGS_location & inOperand3,
                                                    const GGS_bool & inOperand4,
                                                    const GGS_unifiedTypeMapEntry & inOperand5,
                                                    const GGS_methodQualifier & inOperand6,
                                                    const GGS_string & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mArgumentTypeList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mReturnedType (inOperand5),
mProperty_mQualifier (inOperand6),
mProperty_mGetterNameThatObsoletesInvokationName (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () && mProperty_mQualifier.isValid () && mProperty_mGetterNameThatObsoletesInvokationName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mGetterNameThatObsoletesInvokationName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @getterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGetterNameThatObsoletesInvokationName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @getterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element ("getterMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element GGS_getterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_getterMap_2E_element result ;
  const GGS_getterMap_2E_element * p = (const GGS_getterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @getterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_::GGS_getterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_::GGS_getterMap_2E_element_3F_ (const GGS_getterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap_2E_element_3F_::init_nil (void) {
  GGS_getterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_getterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @getterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ("getterMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_getterMap_2E_element_3F_ result ;
  const GGS_getterMap_2E_element_3F_ * p = (const GGS_getterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (const GGS_formalParameterSignature_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element & GGS_formalParameterSignature_2E_element::operator = (const GGS_formalParameterSignature_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterSignature_2E_element GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                       const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                       const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                       const GGS_string & in_mFormalArgumentName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                  const GGS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const GGS_string & inOperand3) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentPassingMode (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterSignature_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterSignature_2E_element ("formalParameterSignature.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalParameterSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element GGS_formalParameterSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_formalParameterSignature_2E_element result ;
  const GGS_formalParameterSignature_2E_element * p = (const GGS_formalParameterSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (const GGS_setterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element & GGS_setterMap_2E_element::operator = (const GGS_setterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_setterMap_2E_element GGS_setterMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_methodKind & in_mKind,
                                                                                 const GGS_formalParameterSignature & in_mParameterList,
                                                                                 const GGS_bool & in_mHasCompilerArgument,
                                                                                 const GGS_methodQualifier & in_mQualifier,
                                                                                 const GGS_string & in_mErrorMessage,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_setterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_methodKind & inOperand1,
                                                    const GGS_formalParameterSignature & inOperand2,
                                                    const GGS_bool & inOperand3,
                                                    const GGS_methodQualifier & inOperand4,
                                                    const GGS_string & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mHasCompilerArgument (inOperand3),
mProperty_mQualifier (inOperand4),
mProperty_mErrorMessage (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @setterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @setterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element ("setterMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element GGS_setterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_setterMap_2E_element result ;
  const GGS_setterMap_2E_element * p = (const GGS_setterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @setterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_::GGS_setterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_::GGS_setterMap_2E_element_3F_ (const GGS_setterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap_2E_element_3F_::init_nil (void) {
  GGS_setterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_setterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @setterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ("setterMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_setterMap_2E_element_3F_ result ;
  const GGS_setterMap_2E_element_3F_ * p = (const GGS_setterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (const GGS_instanceMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mDeclarationLocation (inSource.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element & GGS_instanceMethodMap_2E_element::operator = (const GGS_instanceMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mDeclarationLocation = inSource.mProperty_mDeclarationLocation ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instanceMethodMap_2E_element GGS_instanceMethodMap_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_methodKind & in_mKind,
                                                                                                     const GGS_formalParameterSignature & in_mParameterList,
                                                                                                     const GGS_location & in_mDeclarationLocation,
                                                                                                     const GGS_bool & in_mHasCompilerArgument,
                                                                                                     const GGS_methodQualifier & in_mQualifier,
                                                                                                     const GGS_string & in_mErrorMessage,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mDeclarationLocation = in_mDeclarationLocation ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_methodKind & inOperand1,
                                                                    const GGS_formalParameterSignature & inOperand2,
                                                                    const GGS_location & inOperand3,
                                                                    const GGS_bool & inOperand4,
                                                                    const GGS_methodQualifier & inOperand5,
                                                                    const GGS_string & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mQualifier (inOperand5),
mProperty_mErrorMessage (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instanceMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instanceMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ("instanceMethodMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanceMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanceMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanceMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element GGS_instanceMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element result ;
  const GGS_instanceMethodMap_2E_element * p = (const GGS_instanceMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanceMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @instanceMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_::GGS_instanceMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_::GGS_instanceMethodMap_2E_element_3F_ (const GGS_instanceMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap_2E_element_3F_::init_nil (void) {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_instanceMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instanceMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ("instanceMethodMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanceMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanceMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanceMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  const GGS_instanceMethodMap_2E_element_3F_ * p = (const GGS_instanceMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanceMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (void) :
mProperty_lkey (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (const GGS_classMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element & GGS_classMethodMap_2E_element::operator = (const GGS_classMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classMethodMap_2E_element GGS_classMethodMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_formalParameterSignature & in_mParameterList,
                                                                               const GGS_bool & in_mHasCompilerArgument,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_formalParameterSignature & inOperand1,
                                                              const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mParameterList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element ("classMethodMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element GGS_classMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element result ;
  const GGS_classMethodMap_2E_element * p = (const GGS_classMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_::GGS_classMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_::GGS_classMethodMap_2E_element_3F_ (const GGS_classMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap_2E_element_3F_::init_nil (void) {
  GGS_classMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ("classMethodMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element_3F_ result ;
  const GGS_classMethodMap_2E_element_3F_ * p = (const GGS_classMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (void) :
mProperty_typeEntry (),
mProperty_name (),
mProperty_initialization (),
mProperty_hasSetter (),
mProperty_hasSelector () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (const GGS_typedPropertyList_2E_element & inSource) :
mProperty_typeEntry (inSource.mProperty_typeEntry),
mProperty_name (inSource.mProperty_name),
mProperty_initialization (inSource.mProperty_initialization),
mProperty_hasSetter (inSource.mProperty_hasSetter),
mProperty_hasSelector (inSource.mProperty_hasSelector) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element & GGS_typedPropertyList_2E_element::operator = (const GGS_typedPropertyList_2E_element & inSource) {
  mProperty_typeEntry = inSource.mProperty_typeEntry ;
  mProperty_name = inSource.mProperty_name ;
  mProperty_initialization = inSource.mProperty_initialization ;
  mProperty_hasSetter = inSource.mProperty_hasSetter ;
  mProperty_hasSelector = inSource.mProperty_hasSelector ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typedPropertyList_2E_element GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (const GGS_unifiedTypeMapEntry & in_typeEntry,
                                                                                                                 const GGS_lstring & in_name,
                                                                                                                 const GGS_propertyInCollectionInitializationAST & in_initialization,
                                                                                                                 const GGS_bool & in_hasSetter,
                                                                                                                 const GGS_bool & in_hasSelector,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typedPropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeEntry = in_typeEntry ;
  result.mProperty_name = in_name ;
  result.mProperty_initialization = in_initialization ;
  result.mProperty_hasSetter = in_hasSetter ;
  result.mProperty_hasSelector = in_hasSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_propertyInCollectionInitializationAST & inOperand2,
                                                                    const GGS_bool & inOperand3,
                                                                    const GGS_bool & inOperand4) :
mProperty_typeEntry (inOperand0),
mProperty_name (inOperand1),
mProperty_initialization (inOperand2),
mProperty_hasSetter (inOperand3),
mProperty_hasSelector (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typedPropertyList_2E_element::isValid (void) const {
  return mProperty_typeEntry.isValid () && mProperty_name.isValid () && mProperty_initialization.isValid () && mProperty_hasSetter.isValid () && mProperty_hasSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::drop (void) {
  mProperty_typeEntry.drop () ;
  mProperty_name.drop () ;
  mProperty_initialization.drop () ;
  mProperty_hasSetter.drop () ;
  mProperty_hasSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typedPropertyList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialization.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSelector.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typedPropertyList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedPropertyList_2E_element ("typedPropertyList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedPropertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedPropertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedPropertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element GGS_typedPropertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedPropertyList_2E_element result ;
  const GGS_typedPropertyList_2E_element * p = (const GGS_typedPropertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedPropertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAccessControl (),
mProperty_mIsConstant (),
mProperty_mPropertyType () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAccessControl (inSource.mProperty_mAccessControl),
mProperty_mIsConstant (inSource.mProperty_mIsConstant),
mProperty_mPropertyType (inSource.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element & GGS_propertyMap_2E_element::operator = (const GGS_propertyMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAccessControl = inSource.mProperty_mAccessControl ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  mProperty_mPropertyType = inSource.mProperty_mPropertyType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_AccessControl & in_mAccessControl,
                                                                             const GGS_bool & in_mIsConstant,
                                                                             const GGS_unifiedTypeMapEntry & in_mPropertyType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessControl = in_mAccessControl ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_AccessControl & inOperand1,
                                                        const GGS_bool & inOperand2,
                                                        const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessControl (inOperand1),
mProperty_mIsConstant (inOperand2),
mProperty_mPropertyType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessControl.isValid () && mProperty_mIsConstant.isValid () && mProperty_mPropertyType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessControl.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mPropertyType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessControl.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ("propertyMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  const GGS_propertyMap_2E_element * p = (const GGS_propertyMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::init_nil (void) {
  GGS_propertyMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ("propertyMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element_3F_ result ;
  const GGS_propertyMap_2E_element_3F_ * p = (const GGS_propertyMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mAssociatedTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (const GGS_constantIndexMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mAssociatedTypeList (inSource.mProperty_mAssociatedTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element & GGS_constantIndexMap_2E_element::operator = (const GGS_constantIndexMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mAssociatedTypeList = inSource.mProperty_mAssociatedTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantIndexMap_2E_element GGS_constantIndexMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mIndex,
                                                                                   const GGS_associatedValueDescriptorList & in_mAssociatedTypeList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedTypeList = in_mAssociatedTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_associatedValueDescriptorList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mAssociatedTypeList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constantIndexMap_2E_element::objectCompare (const GGS_constantIndexMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociatedTypeList.objectCompare (inOperand.mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mAssociatedTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantIndexMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantIndexMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element ("constantIndexMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantIndexMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantIndexMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantIndexMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element GGS_constantIndexMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element result ;
  const GGS_constantIndexMap_2E_element * p = (const GGS_constantIndexMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantIndexMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constantIndexMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_::GGS_constantIndexMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_::GGS_constantIndexMap_2E_element_3F_ (const GGS_constantIndexMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap_2E_element_3F_::init_nil (void) {
  GGS_constantIndexMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantIndexMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constantIndexMap_2E_element_3F_::objectCompare (const GGS_constantIndexMap_2E_element_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantIndexMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ("constantIndexMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantIndexMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantIndexMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantIndexMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element_3F_ result ;
  const GGS_constantIndexMap_2E_element_3F_ * p = (const GGS_constantIndexMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantIndexMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_guiSimpleAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element & GGS_guiSimpleAttributeListAST_2E_element::operator = (const GGS_guiSimpleAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::init_21__21_ (const GGS_lstring & in_mKey,
                                                                                                 const GGS_lstring & in_mValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstring & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiSimpleAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiSimpleAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiSimpleAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ("guiSimpleAttributeListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiSimpleAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiSimpleAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiSimpleAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  const GGS_guiSimpleAttributeListAST_2E_element * p = (const GGS_guiSimpleAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiSimpleAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mAttributeName (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_guiCompoundAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element & GGS_guiCompoundAttributeListAST_2E_element::operator = (const GGS_guiCompoundAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mKey,
                                                                                                         const GGS_lstring & in_mAttributeName,
                                                                                                         const GGS_lstring & in_mValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2) :
mProperty_mKey (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCompoundAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mAttributeName.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCompoundAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCompoundAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ("guiCompoundAttributeListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCompoundAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCompoundAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCompoundAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  const GGS_guiCompoundAttributeListAST_2E_element * p = (const GGS_guiCompoundAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCompoundAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (void) :
mProperty_mTerminal (),
mProperty_mDisplayFlags () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_terminalLabelListAST_2E_element & inSource) :
mProperty_mTerminal (inSource.mProperty_mTerminal),
mProperty_mDisplayFlags (inSource.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element & GGS_terminalLabelListAST_2E_element::operator = (const GGS_terminalLabelListAST_2E_element & inSource) {
  mProperty_mTerminal = inSource.mProperty_mTerminal ;
  mProperty_mDisplayFlags = inSource.mProperty_mDisplayFlags ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::init_21__21_ (const GGS_lstring & in_mTerminal,
                                                                                       const GGS_uint & in_mDisplayFlags,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTerminal = in_mTerminal ;
  result.mProperty_mDisplayFlags = in_mDisplayFlags ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mTerminal (inOperand0),
mProperty_mDisplayFlags (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalLabelListAST_2E_element::isValid (void) const {
  return mProperty_mTerminal.isValid () && mProperty_mDisplayFlags.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::drop (void) {
  mProperty_mTerminal.drop () ;
  mProperty_mDisplayFlags.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDisplayFlags.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ("terminalLabelListAST.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  const GGS_terminalLabelListAST_2E_element * p = (const GGS_terminalLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (void) :
mProperty_mLexiqueFileName (),
mProperty_mLabels (),
mProperty_mSimpleAttributes (),
mProperty_mCompoundAttributes () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_withLexiqueListAST_2E_element & inSource) :
mProperty_mLexiqueFileName (inSource.mProperty_mLexiqueFileName),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mSimpleAttributes (inSource.mProperty_mSimpleAttributes),
mProperty_mCompoundAttributes (inSource.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element & GGS_withLexiqueListAST_2E_element::operator = (const GGS_withLexiqueListAST_2E_element & inSource) {
  mProperty_mLexiqueFileName = inSource.mProperty_mLexiqueFileName ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mSimpleAttributes = inSource.mProperty_mSimpleAttributes ;
  mProperty_mCompoundAttributes = inSource.mProperty_mCompoundAttributes ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLexiqueFileName,
                                                                                           const GGS_guiLabelListAST & in_mLabels,
                                                                                           const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                                           const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueFileName = in_mLexiqueFileName ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mSimpleAttributes = in_mSimpleAttributes ;
  result.mProperty_mCompoundAttributes = in_mCompoundAttributes ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_guiLabelListAST & inOperand1,
                                                                      const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                      const GGS_guiCompoundAttributeListAST & inOperand3) :
mProperty_mLexiqueFileName (inOperand0),
mProperty_mLabels (inOperand1),
mProperty_mSimpleAttributes (inOperand2),
mProperty_mCompoundAttributes (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_withLexiqueListAST_2E_element::isValid (void) const {
  return mProperty_mLexiqueFileName.isValid () && mProperty_mLabels.isValid () && mProperty_mSimpleAttributes.isValid () && mProperty_mCompoundAttributes.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::drop (void) {
  mProperty_mLexiqueFileName.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mSimpleAttributes.drop () ;
  mProperty_mCompoundAttributes.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @withLexiqueListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSimpleAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCompoundAttributes.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ("withLexiqueListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_withLexiqueListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  const GGS_withLexiqueListAST_2E_element * p = (const GGS_withLexiqueListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (const GGS_extensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexiqueName (inSource.mProperty_mLexiqueName),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element & GGS_extensionMap_2E_element::operator = (const GGS_extensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexiqueName = inSource.mProperty_mLexiqueName ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionMap_2E_element GGS_extensionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_string & in_mLexiqueName,
                                                                           const GGS_uint & in_mIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_string & inOperand1,
                                                          const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element ("extensionMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element GGS_extensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionMap_2E_element result ;
  const GGS_extensionMap_2E_element * p = (const GGS_extensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_::GGS_extensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_::GGS_extensionMap_2E_element_3F_ (const GGS_extensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap_2E_element_3F_::init_nil (void) {
  GGS_extensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ("extensionMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionMap_2E_element_3F_ result ;
  const GGS_extensionMap_2E_element_3F_ * p = (const GGS_extensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (void) :
mProperty_mProjectFileExtension (),
mProperty_indexingPathSuffix () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (const GGS_projectIndexingDescriptorList_2E_element & inSource) :
mProperty_mProjectFileExtension (inSource.mProperty_mProjectFileExtension),
mProperty_indexingPathSuffix (inSource.mProperty_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element & GGS_projectIndexingDescriptorList_2E_element::operator = (const GGS_projectIndexingDescriptorList_2E_element & inSource) {
  mProperty_mProjectFileExtension = inSource.mProperty_mProjectFileExtension ;
  mProperty_indexingPathSuffix = inSource.mProperty_indexingPathSuffix ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element GGS_projectIndexingDescriptorList_2E_element::init_21__21_ (const GGS_lstring & in_mProjectFileExtension,
                                                                                                         const GGS_lstring & in_indexingPathSuffix,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectFileExtension = in_mProjectFileExtension ;
  result.mProperty_indexingPathSuffix = in_indexingPathSuffix ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lstring & inOperand1) :
mProperty_mProjectFileExtension (inOperand0),
mProperty_indexingPathSuffix (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectIndexingDescriptorList_2E_element::isValid (void) const {
  return mProperty_mProjectFileExtension.isValid () && mProperty_indexingPathSuffix.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::drop (void) {
  mProperty_mProjectFileExtension.drop () ;
  mProperty_indexingPathSuffix.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectIndexingDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectFileExtension.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_indexingPathSuffix.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectIndexingDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList_2E_element ("projectIndexingDescriptorList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectIndexingDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectIndexingDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectIndexingDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectIndexingDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element GGS_projectIndexingDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList_2E_element result ;
  const GGS_projectIndexingDescriptorList_2E_element * p = (const GGS_projectIndexingDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectIndexingDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectIndexingDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (void) :
mProperty_mGUIComponentName (),
mProperty_mImportedOptionList (),
mProperty_mGlobalSimpleAttributeList (),
mProperty_mWithLexiqueList (),
mProperty_mProjectIndexingDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (const GGS_galgasGUIComponentListAST_2E_element & inSource) :
mProperty_mGUIComponentName (inSource.mProperty_mGUIComponentName),
mProperty_mImportedOptionList (inSource.mProperty_mImportedOptionList),
mProperty_mGlobalSimpleAttributeList (inSource.mProperty_mGlobalSimpleAttributeList),
mProperty_mWithLexiqueList (inSource.mProperty_mWithLexiqueList),
mProperty_mProjectIndexingDescriptorList (inSource.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element & GGS_galgasGUIComponentListAST_2E_element::operator = (const GGS_galgasGUIComponentListAST_2E_element & inSource) {
  mProperty_mGUIComponentName = inSource.mProperty_mGUIComponentName ;
  mProperty_mImportedOptionList = inSource.mProperty_mImportedOptionList ;
  mProperty_mGlobalSimpleAttributeList = inSource.mProperty_mGlobalSimpleAttributeList ;
  mProperty_mWithLexiqueList = inSource.mProperty_mWithLexiqueList ;
  mProperty_mProjectIndexingDescriptorList = inSource.mProperty_mProjectIndexingDescriptorList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element GGS_galgasGUIComponentListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mGUIComponentName,
                                                                                                             const GGS_lstringlist & in_mImportedOptionList,
                                                                                                             const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                                             const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                                                                             const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGUIComponentName = in_mGUIComponentName ;
  result.mProperty_mImportedOptionList = in_mImportedOptionList ;
  result.mProperty_mGlobalSimpleAttributeList = in_mGlobalSimpleAttributeList ;
  result.mProperty_mWithLexiqueList = in_mWithLexiqueList ;
  result.mProperty_mProjectIndexingDescriptorList = in_mProjectIndexingDescriptorList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstringlist & inOperand1,
                                                                                    const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                                    const GGS_withLexiqueListAST & inOperand3,
                                                                                    const GGS_projectIndexingDescriptorList & inOperand4) :
mProperty_mGUIComponentName (inOperand0),
mProperty_mImportedOptionList (inOperand1),
mProperty_mGlobalSimpleAttributeList (inOperand2),
mProperty_mWithLexiqueList (inOperand3),
mProperty_mProjectIndexingDescriptorList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasGUIComponentListAST_2E_element::isValid (void) const {
  return mProperty_mGUIComponentName.isValid () && mProperty_mImportedOptionList.isValid () && mProperty_mGlobalSimpleAttributeList.isValid () && mProperty_mWithLexiqueList.isValid () && mProperty_mProjectIndexingDescriptorList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::drop (void) {
  mProperty_mGUIComponentName.drop () ;
  mProperty_mImportedOptionList.drop () ;
  mProperty_mGlobalSimpleAttributeList.drop () ;
  mProperty_mWithLexiqueList.drop () ;
  mProperty_mProjectIndexingDescriptorList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasGUIComponentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGUIComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImportedOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasGUIComponentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST_2E_element ("galgasGUIComponentListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasGUIComponentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasGUIComponentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasGUIComponentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasGUIComponentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element GGS_galgasGUIComponentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST_2E_element result ;
  const GGS_galgasGUIComponentListAST_2E_element * p = (const GGS_galgasGUIComponentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasGUIComponentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasGUIComponentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (void) :
mProperty_lkey (),
mProperty_mGuiComponentContext () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (const GGS_optionComponentMapForGeneration_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mGuiComponentContext (inSource.mProperty_mGuiComponentContext) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element & GGS_optionComponentMapForGeneration_2E_element::operator = (const GGS_optionComponentMapForGeneration_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mGuiComponentContext = inSource.mProperty_mGuiComponentContext ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element GGS_optionComponentMapForGeneration_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_guiAnalysisContext & in_mGuiComponentContext,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGuiComponentContext = in_mGuiComponentContext ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_guiAnalysisContext & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGuiComponentContext (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGuiComponentContext.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGuiComponentContext.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionComponentMapForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuiComponentContext.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element ("optionComponentMapForGeneration.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element GGS_optionComponentMapForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element result ;
  const GGS_optionComponentMapForGeneration_2E_element * p = (const GGS_optionComponentMapForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @optionComponentMapForGeneration_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_::GGS_optionComponentMapForGeneration_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_::GGS_optionComponentMapForGeneration_2E_element_3F_ (const GGS_optionComponentMapForGeneration_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration_2E_element_3F_::init_nil (void) {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_optionComponentMapForGeneration_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForGeneration.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element_3F_ ("optionComponentMapForGeneration.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForGeneration_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  const GGS_optionComponentMapForGeneration_2E_element_3F_ * p = (const GGS_optionComponentMapForGeneration_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (void) :
mProperty_mOptionTypeName (),
mProperty_mOptionInternalName (),
mProperty_mOptionInvocationLetter (),
mProperty_mOptionInvocationString (),
mProperty_mOptionComment (),
mProperty_mOptionDefaultValue (),
mProperty_mOptionDefaultValueKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (const GGS_commandLineOptionListAST_2E_element & inSource) :
mProperty_mOptionTypeName (inSource.mProperty_mOptionTypeName),
mProperty_mOptionInternalName (inSource.mProperty_mOptionInternalName),
mProperty_mOptionInvocationLetter (inSource.mProperty_mOptionInvocationLetter),
mProperty_mOptionInvocationString (inSource.mProperty_mOptionInvocationString),
mProperty_mOptionComment (inSource.mProperty_mOptionComment),
mProperty_mOptionDefaultValue (inSource.mProperty_mOptionDefaultValue),
mProperty_mOptionDefaultValueKind (inSource.mProperty_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element & GGS_commandLineOptionListAST_2E_element::operator = (const GGS_commandLineOptionListAST_2E_element & inSource) {
  mProperty_mOptionTypeName = inSource.mProperty_mOptionTypeName ;
  mProperty_mOptionInternalName = inSource.mProperty_mOptionInternalName ;
  mProperty_mOptionInvocationLetter = inSource.mProperty_mOptionInvocationLetter ;
  mProperty_mOptionInvocationString = inSource.mProperty_mOptionInvocationString ;
  mProperty_mOptionComment = inSource.mProperty_mOptionComment ;
  mProperty_mOptionDefaultValue = inSource.mProperty_mOptionDefaultValue ;
  mProperty_mOptionDefaultValueKind = inSource.mProperty_mOptionDefaultValueKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element GGS_commandLineOptionListAST_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mOptionTypeName,
                                                                                                                   const GGS_lstring & in_mOptionInternalName,
                                                                                                                   const GGS_lchar & in_mOptionInvocationLetter,
                                                                                                                   const GGS_lstring & in_mOptionInvocationString,
                                                                                                                   const GGS_lstring & in_mOptionComment,
                                                                                                                   const GGS_lstring & in_mOptionDefaultValue,
                                                                                                                   const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  result.mProperty_mOptionInternalName = in_mOptionInternalName ;
  result.mProperty_mOptionInvocationLetter = in_mOptionInvocationLetter ;
  result.mProperty_mOptionInvocationString = in_mOptionInvocationString ;
  result.mProperty_mOptionComment = in_mOptionComment ;
  result.mProperty_mOptionDefaultValue = in_mOptionDefaultValue ;
  result.mProperty_mOptionDefaultValueKind = in_mOptionDefaultValueKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_lstring & inOperand1,
                                                                                  const GGS_lchar & inOperand2,
                                                                                  const GGS_lstring & inOperand3,
                                                                                  const GGS_lstring & inOperand4,
                                                                                  const GGS_lstring & inOperand5,
                                                                                  const GGS_optionDefaultValueEnumAST & inOperand6) :
mProperty_mOptionTypeName (inOperand0),
mProperty_mOptionInternalName (inOperand1),
mProperty_mOptionInvocationLetter (inOperand2),
mProperty_mOptionInvocationString (inOperand3),
mProperty_mOptionComment (inOperand4),
mProperty_mOptionDefaultValue (inOperand5),
mProperty_mOptionDefaultValueKind (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionListAST_2E_element::isValid (void) const {
  return mProperty_mOptionTypeName.isValid () && mProperty_mOptionInternalName.isValid () && mProperty_mOptionInvocationLetter.isValid () && mProperty_mOptionInvocationString.isValid () && mProperty_mOptionComment.isValid () && mProperty_mOptionDefaultValue.isValid () && mProperty_mOptionDefaultValueKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::drop (void) {
  mProperty_mOptionTypeName.drop () ;
  mProperty_mOptionInternalName.drop () ;
  mProperty_mOptionInvocationLetter.drop () ;
  mProperty_mOptionInvocationString.drop () ;
  mProperty_mOptionComment.drop () ;
  mProperty_mOptionDefaultValue.drop () ;
  mProperty_mOptionDefaultValueKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInternalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationLetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValueKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ("commandLineOptionListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element GGS_commandLineOptionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionListAST_2E_element result ;
  const GGS_commandLineOptionListAST_2E_element * p = (const GGS_commandLineOptionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (const GGS_commandLineOptionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element & GGS_commandLineOptionMap_2E_element::operator = (const GGS_commandLineOptionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element GGS_commandLineOptionMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_char & in_mOptionChar,
                                                                                                   const GGS_string & in_mOptionString,
                                                                                                   const GGS_string & in_mComment,
                                                                                                   const GGS_string & in_mDefaultValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_char & inOperand1,
                                                                          const GGS_string & inOperand2,
                                                                          const GGS_string & inOperand3,
                                                                          const GGS_string & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ("commandLineOptionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element GGS_commandLineOptionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element result ;
  const GGS_commandLineOptionMap_2E_element * p = (const GGS_commandLineOptionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @commandLineOptionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_::GGS_commandLineOptionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_::GGS_commandLineOptionMap_2E_element_3F_ (const GGS_commandLineOptionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap_2E_element_3F_::init_nil (void) {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_commandLineOptionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ("commandLineOptionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  const GGS_commandLineOptionMap_2E_element_3F_ * p = (const GGS_commandLineOptionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element & GGS_unifiedTypeMap_2E_element::operator = (const GGS_unifiedTypeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_unifiedTypeMapElementClass & in_mElement,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ("unifiedTypeMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  const GGS_unifiedTypeMap_2E_element * p = (const GGS_unifiedTypeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ("unifiedTypeMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  const GGS_unifiedTypeMap_2E_element_3F_ * p = (const GGS_unifiedTypeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (void) :
mProperty_definition () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) :
mProperty_definition (inSource.mProperty_definition) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved & GGS_typeDefinition_2E_solved::operator = (const GGS_typeDefinition_2E_solved & inSource) {
  mProperty_definition = inSource.mProperty_definition ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::init_21_ (const GGS_unifiedTypeDefinition & in_definition,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_definition = in_definition ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & inOperand0) :
mProperty_definition (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved::isValid (void) const {
  return mProperty_definition.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::drop (void) {
  mProperty_definition.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeDefinition.solved:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_definition.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeDefinition.solved generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ("typeDefinition.solved",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition_2E_solved::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  const GGS_typeDefinition_2E_solved * p = (const GGS_typeDefinition_2E_solved *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeDefinition_2E_solved_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::init_nil (void) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeDefinition_2E_solved () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeDefinition.solved? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ("typeDefinition.solved?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition_2E_solved_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  const GGS_typeDefinition_2E_solved_3F_ * p = (const GGS_typeDefinition_2E_solved_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mNoWarningIfUnused (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_localConstantList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mNoWarningIfUnused (inSource.mProperty_mNoWarningIfUnused),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element & GGS_localConstantList_2E_element::operator = (const GGS_localConstantList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mNoWarningIfUnused = inSource.mProperty_mNoWarningIfUnused ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                         const GGS_lstring & in_mName,
                                                                                         const GGS_bool & in_mNoWarningIfUnused,
                                                                                         const GGS_string & in_mCppName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_bool & inOperand2,
                                                                    const GGS_string & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mNoWarningIfUnused (inOperand2),
mProperty_mCppName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localConstantList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mNoWarningIfUnused.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mNoWarningIfUnused.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localConstantList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ("localConstantList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  const GGS_localConstantList_2E_element * p = (const GGS_localConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_localInitializedVariableList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element & GGS_localInitializedVariableList_2E_element::operator = (const GGS_localInitializedVariableList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                           const GGS_lstring & in_mName,
                                                                                                           const GGS_string & in_mCppName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localInitializedVariableList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localInitializedVariableList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localInitializedVariableList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ("localInitializedVariableList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localInitializedVariableList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  const GGS_localInitializedVariableList_2E_element * p = (const GGS_localInitializedVariableList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (void) :
mProperty_lkey (),
mProperty_mPropertyTypeIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (const GGS_propertyIndexMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mPropertyTypeIndex (inSource.mProperty_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element & GGS_propertyIndexMap_2E_element::operator = (const GGS_propertyIndexMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mPropertyTypeIndex = inSource.mProperty_mPropertyTypeIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyIndexMap_2E_element GGS_propertyIndexMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyIndexMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mPropertyTypeIndex = in_mPropertyTypeIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_unifiedTypeMapEntry & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mPropertyTypeIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mPropertyTypeIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mPropertyTypeIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyIndexMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyTypeIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ("propertyIndexMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyIndexMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element GGS_propertyIndexMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap_2E_element result ;
  const GGS_propertyIndexMap_2E_element * p = (const GGS_propertyIndexMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

