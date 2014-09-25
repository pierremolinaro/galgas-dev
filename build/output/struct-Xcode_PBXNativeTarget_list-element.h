#ifndef struct_2D_Xcode_5F_PBXNativeTarget_5F_list_2D_element_1_DEFINED
#define struct_2D_Xcode_5F_PBXNativeTarget_5F_list_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_XCBuildConfiguration-1.h"
#include "class-Xcode_productFileReference-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @Xcode_5F_PBXNativeTarget_5F_list_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetKey ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_Xcode_5F_XCBuildConfiguration mAttribute_mTargetConfiguration ;
  public : GALGAS_string mAttribute_mProductInstallPath ;
  public : GALGAS_string mAttribute_mProductName ;
  public : GALGAS_Xcode_5F_productFileReference mAttribute_mProduct ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseKeyList ;
  public : GALGAS_stringlist mAttribute_mDependencyKeyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (const GALGAS_string & in_mTargetKey,
                                                               const GALGAS_string & in_mTargetName,
                                                               const GALGAS_Xcode_5F_XCBuildConfiguration & in_mTargetConfiguration,
                                                               const GALGAS_string & in_mProductInstallPath,
                                                               const GALGAS_string & in_mProductName,
                                                               const GALGAS_Xcode_5F_productFileReference & in_mProduct,
                                                               const GALGAS_stringlist & in_mBuildPhaseKeyList,
                                                               const GALGAS_stringlist & in_mDependencyKeyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_string & inOperand4,
                                                                                      const class GALGAS_Xcode_5F_productFileReference & inOperand5,
                                                                                      const class GALGAS_stringlist & inOperand6,
                                                                                      const class GALGAS_stringlist & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mDependencyKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_productFileReference reader_mProduct (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductInstallPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration reader_mTargetConfiguration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

