#ifndef class_2D_Xcode_5F_PBXGroup_DEFINED
#define class_2D_Xcode_5F_PBXGroup_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXGroup-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-XcodeObjectReferenceList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @Xcode_PBXGroup class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXGroup : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mGroupName ;
  public : GALGAS_string mAttribute_mGroupPath ;
  public : GALGAS_XcodeObjectReferenceList mAttribute_mChildrenGroupList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXGroup (const GALGAS_uint & in_mSequenceNumber,
                                   const GALGAS_string & in_mGroupName,
                                   const GALGAS_string & in_mGroupPath,
                                   const GALGAS_XcodeObjectReferenceList & in_mChildrenGroupList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGroupName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGroupPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_XcodeObjectReferenceList reader_mChildrenGroupList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

