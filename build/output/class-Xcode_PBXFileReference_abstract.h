#ifndef class_2D_Xcode_5F_PBXFileReference_5F_abstract_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_abstract_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_abstract-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @Xcode_PBXFileReference_abstract class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXFileReference_5F_abstract : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mFileName ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXFileReference_5F_abstract (const GALGAS_uint & in_mSequenceNumber,
                                                       const GALGAS_string & in_mFileName
                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFileName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

