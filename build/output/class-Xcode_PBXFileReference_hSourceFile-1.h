#ifndef class_2D_Xcode_5F_PBXFileReference_5F_hSourceFile_1_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_hSourceFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_abstract.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @Xcode_5F_PBXFileReference_5F_hSourceFile class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile : public GALGAS_Xcode_5F_PBXFileReference_5F_abstract {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * ptr (void) const { return (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile constructor_new (const class GALGAS_uint & inOperand0,
                                                                                   const class GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

