#ifndef struct_2D_foreachInstructionEnumeratedObjectListForGeneration_2D_element_1_DEFINED
#define struct_2D_foreachInstructionEnumeratedObjectListForGeneration_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @foreachInstructionEnumeratedObjectListForGeneration_2D_element struct                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mEnumerationOrder ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mEnumeratedExpression ;
  public : GALGAS_string mAttribute_mEnumeratorCppName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & in_mEnumerationOrder,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                  const GALGAS_string & in_mEnumeratorCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                         const class GALGAS_string & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mEnumeratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationOrder (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumeratorCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

