//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      File 'class-templateOptionAccessAST-1.h'                                       *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_templateOptionAccessAST_1_DEFINED
#define class_2D_templateOptionAccessAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateOptionAccessAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateOptionAccessAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateOptionAccessAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateOptionAccessAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateOptionAccessAST * ptr (void) const { return (const cPtr_templateOptionAccessAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateOptionAccessAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateOptionAccessAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReaderName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateOptionAccessAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

