#ifndef class_2D_abstractLexicalRoutineActualArgumentAST_1_DEFINED
#define class_2D_abstractLexicalRoutineActualArgumentAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractLexicalRoutineActualArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractLexicalRoutineActualArgumentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (void) ;

//---
  public : inline const class cPtr_abstractLexicalRoutineActualArgumentAST * ptr (void) const { return (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractLexicalRoutineActualArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mActualPassingModeLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRoutineActualArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

