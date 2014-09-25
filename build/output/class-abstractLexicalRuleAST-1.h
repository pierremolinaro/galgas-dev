#ifndef class_2D_abstractLexicalRuleAST_1_DEFINED
#define class_2D_abstractLexicalRuleAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractLexicalRuleAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractLexicalRuleAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractLexicalRuleAST (void) ;

//---
  public : inline const class cPtr_abstractLexicalRuleAST * ptr (void) const { return (const cPtr_abstractLexicalRuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractLexicalRuleAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

