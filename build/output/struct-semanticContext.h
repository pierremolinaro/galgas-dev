#ifndef struct_2D_semanticContext_1_DEFINED
#define struct_2D_semanticContext_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-filewrapperMap-1.h"
#include "map-functionMap-1.h"
#include "map-grammarMap-1.h"
#include "map-lexiqueComponentMapForSemanticAnalysis-1.h"
#include "map-optionComponentMapForSemanticAnalysis-1.h"
#include "map-routineMap-1.h"
#include "uniquemap-unifiedTypeMap-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap mAttribute_mTypeMap ;
  public : GALGAS_routineMap mAttribute_mRoutineMap ;
  public : GALGAS_functionMap mAttribute_mFunctionMap ;
  public : GALGAS_filewrapperMap mAttribute_mFilewrapperMap ;
  public : GALGAS_grammarMap mAttribute_mGrammarMap ;
  public : GALGAS_optionComponentMapForSemanticAnalysis mAttribute_mOptionComponentMapForSemanticAnalysis ;
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis mAttribute_mLexiqueComponentMapForSemanticAnalysis ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_unifiedTypeMap & in_mTypeMap,
                                   const GALGAS_routineMap & in_mRoutineMap,
                                   const GALGAS_functionMap & in_mFunctionMap,
                                   const GALGAS_filewrapperMap & in_mFilewrapperMap,
                                   const GALGAS_grammarMap & in_mGrammarMap,
                                   const GALGAS_optionComponentMapForSemanticAnalysis & in_mOptionComponentMapForSemanticAnalysis,
                                   const GALGAS_lexiqueComponentMapForSemanticAnalysis & in_mLexiqueComponentMapForSemanticAnalysis) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticContext constructor_new (const class GALGAS_unifiedTypeMap & inOperand0,
                                                          const class GALGAS_routineMap & inOperand1,
                                                          const class GALGAS_functionMap & inOperand2,
                                                          const class GALGAS_filewrapperMap & inOperand3,
                                                          const class GALGAS_grammarMap & inOperand4,
                                                          const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                          const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap reader_mFilewrapperMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap reader_mFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarMap reader_mGrammarMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis reader_mLexiqueComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis reader_mOptionComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMap reader_mRoutineMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap reader_mTypeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

