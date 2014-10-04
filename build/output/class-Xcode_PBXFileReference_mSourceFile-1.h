#ifndef class_2D_Xcode_5F_PBXFileReference_5F_mSourceFile_1_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_mSourceFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_abstract.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @Xcode_5F_PBXFileReference_5F_mSourceFile class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile : public GALGAS_Xcode_5F_PBXFileReference_5F_abstract {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * ptr (void) const { return (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile constructor_new (const class GALGAS_uint & inOperand0,
                                                                                   const class GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

