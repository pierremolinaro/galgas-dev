#ifndef class_2D_Xcode_5F_XCBuildConfiguration_DEFINED
#define class_2D_Xcode_5F_XCBuildConfiguration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_XCBuildConfiguration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @Xcode_XCBuildConfiguration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_XCBuildConfiguration : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber_31_ ;
  public : GALGAS_uint mAttribute_mSequenceNumber_32_ ;
  public : GALGAS_stringlist mAttribute_mSettings ;

//--- Constructor
  public : cPtr_Xcode_5F_XCBuildConfiguration (const GALGAS_uint & in_mSequenceNumber_31_,
                                               const GALGAS_uint & in_mSequenceNumber_32_,
                                               const GALGAS_stringlist & in_mSettings
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber_31_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber_32_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mSettings (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

