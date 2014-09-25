#ifndef struct_2D_lexiqueAnalysisContext_1_DEFINED
#define struct_2D_lexiqueAnalysisContext_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-templateDelimitorList.h"
#include "list-terminalList.h"
#include "map-lexicalAttributeMap-1.h"
#include "map-lexicalExplicitTokenListMapMap-1.h"
#include "map-lexicalFunctionMap-1.h"
#include "map-lexicalMessageMap-1.h"
#include "map-lexicalRoutineMap-1.h"
#include "map-styleMap-1.h"
#include "map-terminalMap-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexiqueAnalysisContext struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalRoutineMap mAttribute_mLexicalRoutineMessageMap ;
  public : GALGAS_lexicalFunctionMap mAttribute_mLexicalFunctionMap ;
  public : GALGAS_lexicalMessageMap mAttribute_mLexicalMessageMap ;
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_terminalList mAttribute_mTerminalList ;
  public : GALGAS_lexicalAttributeMap mAttribute_mLexicalAttributeMap ;
  public : GALGAS_lexicalExplicitTokenListMapMap mAttribute_mLexicalTokenListMap ;
  public : GALGAS_stringset mAttribute_mUnicodeStringToGenerate ;
  public : GALGAS_templateDelimitorList mAttribute_mTemplateDelimitorList ;
  public : GALGAS_styleMap mAttribute_mStyleMap ;
  public : GALGAS_stringset mAttribute_mExternUnicodeTestFunctions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueAnalysisContext (const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                          const GALGAS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                          const GALGAS_lexicalMessageMap & in_mLexicalMessageMap,
                                          const GALGAS_terminalMap & in_mTerminalMap,
                                          const GALGAS_terminalList & in_mTerminalList,
                                          const GALGAS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                          const GALGAS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                          const GALGAS_stringset & in_mUnicodeStringToGenerate,
                                          const GALGAS_templateDelimitorList & in_mTemplateDelimitorList,
                                          const GALGAS_styleMap & in_mStyleMap,
                                          const GALGAS_stringset & in_mExternUnicodeTestFunctions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueAnalysisContext extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueAnalysisContext constructor_new (const class GALGAS_lexicalRoutineMap & inOperand0,
                                                                 const class GALGAS_lexicalFunctionMap & inOperand1,
                                                                 const class GALGAS_lexicalMessageMap & inOperand2,
                                                                 const class GALGAS_terminalMap & inOperand3,
                                                                 const class GALGAS_terminalList & inOperand4,
                                                                 const class GALGAS_lexicalAttributeMap & inOperand5,
                                                                 const class GALGAS_lexicalExplicitTokenListMapMap & inOperand6,
                                                                 const class GALGAS_stringset & inOperand7,
                                                                 const class GALGAS_templateDelimitorList & inOperand8,
                                                                 const class GALGAS_styleMap & inOperand9,
                                                                 const class GALGAS_stringset & inOperand10
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mExternUnicodeTestFunctions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap reader_mLexicalAttributeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap reader_mLexicalFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap reader_mLexicalMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap reader_mLexicalRoutineMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap reader_mLexicalTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap reader_mStyleMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList reader_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList reader_mTerminalList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap reader_mTerminalMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mUnicodeStringToGenerate (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

