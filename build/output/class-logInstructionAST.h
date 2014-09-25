#ifndef class_2D_logInstructionAST_DEFINED
#define class_2D_logInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-logInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-logListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @logInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_logListAST mAttribute_mLogList ;

//--- Constructor
  public : cPtr_logInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_logListAST & in_mLogList
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_logListAST reader_mLogList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

