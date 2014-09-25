#ifndef class_2D_Xcode_5F_PBXFrameworksBuildPhase_1_DEFINED
#define class_2D_Xcode_5F_PBXFrameworksBuildPhase_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_5F_PBXFrameworksBuildPhase class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFrameworksBuildPhase : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFrameworksBuildPhase * ptr (void) const { return (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase (const cPtr_Xcode_5F_PBXFrameworksBuildPhase * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase constructor_new (const class GALGAS_uint & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFrameworksBuildPhase class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

