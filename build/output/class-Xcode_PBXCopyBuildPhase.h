#ifndef class_2D_Xcode_5F_PBXCopyBuildPhase_DEFINED
#define class_2D_Xcode_5F_PBXCopyBuildPhase_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXCopyBuildPhase-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-Xcode_PBXBuildFile_list.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @Xcode_PBXCopyBuildPhase class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXCopyBuildPhase : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mNameForComment ;
  public : GALGAS_uint mAttribute_mDestinationSubfolder ;
  public : GALGAS_string mAttribute_mDestinationPath ;
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list mAttribute_mFileReferenceList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXCopyBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                            const GALGAS_string & in_mNameForComment,
                                            const GALGAS_uint & in_mDestinationSubfolder,
                                            const GALGAS_string & in_mDestinationPath,
                                            const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mDestinationSubfolder (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mDestinationPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

