#ifndef class_2D_Xcode_5F_XCBuildConfiguration_1_DEFINED
#define class_2D_Xcode_5F_XCBuildConfiguration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_5F_XCBuildConfiguration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_XCBuildConfiguration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_XCBuildConfiguration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_XCBuildConfiguration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_XCBuildConfiguration * ptr (void) const { return (const cPtr_Xcode_5F_XCBuildConfiguration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_XCBuildConfiguration (const cPtr_Xcode_5F_XCBuildConfiguration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_XCBuildConfiguration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_XCBuildConfiguration constructor_new (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_uint & inOperand1,
                                                                        const class GALGAS_stringlist & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_XCBuildConfiguration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber_31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mSettings (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_XCBuildConfiguration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

