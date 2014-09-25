#ifndef class_2D_Xcode_5F_PBXFileReference_5F_xibFile_1_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_xibFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_abstract.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @Xcode_5F_PBXFileReference_5F_xibFile class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_xibFile : public GALGAS_Xcode_5F_PBXFileReference_5F_abstract {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_xibFile (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_xibFile constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFileReference_5F_xibFile * ptr (void) const { return (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFileReference_5F_xibFile (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_xibFile extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_xibFile constructor_new (const class GALGAS_uint & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_xibFile & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilePath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_xibFile class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

