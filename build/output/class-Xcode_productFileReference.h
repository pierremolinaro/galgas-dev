#ifndef class_2D_Xcode_5F_productFileReference_DEFINED
#define class_2D_Xcode_5F_productFileReference_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_productFileReference-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @Xcode_productFileReference class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_productFileReference : public cPtr_Xcode_5F_PBXFileReference_5F_abstract {
//--- Attributes

//--- Constructor
  public : cPtr_Xcode_5F_productFileReference (const GALGAS_uint & in_mSequenceNumber,
                                               const GALGAS_string & in_mFileName
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

