#ifndef class_2D_Xcode_5F_PBXBuildFile_1_DEFINED
#define class_2D_Xcode_5F_PBXBuildFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @Xcode_5F_PBXBuildFile class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXBuildFile : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXBuildFile (void) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXBuildFile * ptr (void) const { return (const cPtr_Xcode_5F_PBXBuildFile *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXBuildFile (const cPtr_Xcode_5F_PBXBuildFile * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXBuildFile extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXBuildFile constructor_new (const class GALGAS_uint & inOperand0,
                                                                const class GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXBuildFile & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mSourceFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXBuildFile class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

