#ifndef class_2D_overridingAbstractCategoryReaderAST_1_DEFINED
#define class_2D_overridingAbstractCategoryReaderAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractCategoryReaderAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingAbstractCategoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractCategoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractCategoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractCategoryReaderAST * ptr (void) const { return (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractCategoryReaderAST (const cPtr_overridingAbstractCategoryReaderAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractCategoryReaderAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingAbstractCategoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                              const class GALGAS_lstring & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractCategoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractCategoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

