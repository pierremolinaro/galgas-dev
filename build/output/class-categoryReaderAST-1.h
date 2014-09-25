#ifndef class_2D_categoryReaderAST_1_DEFINED
#define class_2D_categoryReaderAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @categoryReaderAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_categoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryReaderAST * ptr (void) const { return (const cPtr_categoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryReaderAST (const cPtr_categoryReaderAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryReaderAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_lstring & inOperand2,
                                                            const class GALGAS_formalInputParameterListAST & inOperand3,
                                                            const class GALGAS_lstring & inOperand4,
                                                            const class GALGAS_lstring & inOperand5,
                                                            const class GALGAS_semanticInstructionListAST & inOperand6,
                                                            const class GALGAS_location & inOperand7
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mCategoryReaderInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryReaderAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

