#ifndef class_2D_grammarInstructionSyntaxDirectedTranslationResultNone_1_DEFINED
#define class_2D_grammarInstructionSyntaxDirectedTranslationResultNone_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultNone class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

