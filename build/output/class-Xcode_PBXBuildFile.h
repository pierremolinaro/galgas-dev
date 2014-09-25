#ifndef class_2D_Xcode_5F_PBXBuildFile_DEFINED
#define class_2D_Xcode_5F_PBXBuildFile_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXBuildFile-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_abstract.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @Xcode_PBXBuildFile class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXBuildFile : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract mAttribute_mSourceFile ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXBuildFile (const GALGAS_uint & in_mSequenceNumber,
                                       const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & in_mSourceFile
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mSourceFile (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

