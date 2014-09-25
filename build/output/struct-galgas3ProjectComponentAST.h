#ifndef struct_2D_galgas_33_ProjectComponentAST_1_DEFINED
#define struct_2D_galgas_33_ProjectComponentAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-galgas3QualifiedFeatureList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas_33_ProjectComponentAST struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstringlist mAttribute_mProjectSourceList ;
  public : GALGAS_luint mAttribute_mMajorVersion ;
  public : GALGAS_luint mAttribute_mMinorVersion ;
  public : GALGAS_luint mAttribute_mRevisionVersion ;
  public : GALGAS_lstringlist mAttribute_mGenerationFeatureList ;
  public : GALGAS_galgas_33_QualifiedFeatureList mAttribute_mQualifiedFeatureList ;
  public : GALGAS_lstring mAttribute_mTargetName ;
  public : GALGAS_location mAttribute_mEndOfSourceFile ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_ProjectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & in_mProjectSourceList,
                                                 const GALGAS_luint & in_mMajorVersion,
                                                 const GALGAS_luint & in_mMinorVersion,
                                                 const GALGAS_luint & in_mRevisionVersion,
                                                 const GALGAS_lstringlist & in_mGenerationFeatureList,
                                                 const GALGAS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                                 const GALGAS_lstring & in_mTargetName,
                                                 const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_ProjectComponentAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_ProjectComponentAST constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                        const class GALGAS_luint & inOperand1,
                                                                        const class GALGAS_luint & inOperand2,
                                                                        const class GALGAS_luint & inOperand3,
                                                                        const class GALGAS_lstringlist & inOperand4,
                                                                        const class GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                        const class GALGAS_lstring & inOperand6,
                                                                        const class GALGAS_location & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mGenerationFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMajorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMinorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mProjectSourceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList reader_mQualifiedFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRevisionVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_ProjectComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

