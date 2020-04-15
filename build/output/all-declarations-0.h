#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            LEXIQUE galgasTemplateScanner                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "galgas2/C_Lexique.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    E X T E R N    R O U T I N E S                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    E X T E R N    F U N C T I O N S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       T O K E N    C L A S S                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cTokenFor_galgasTemplateScanner : public cToken {
  public : C_BigInt mLexicalAttribute_bigintValue ;
  public : utf32 mLexicalAttribute_charValue ;
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_identifierString ;
  public : int32_t mLexicalAttribute_sint_33__32_value ;
  public : int64_t mLexicalAttribute_sint_36__34_value ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;
  public : uint64_t mLexicalAttribute_uint_36__34_value ;

  public : cTokenFor_galgasTemplateScanner (void) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                     S C A N N E R    C L A S S                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class C_Lexique_galgasTemplateScanner : public C_Lexique {
//--- Constructors
  public : C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_galgasTemplateScanner (void) {}
  #endif

//--- Scanner mode for template scanner
  private : int32_t mMatchedTemplateDelimiterIndex ;



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken__40_type,
   kToken_double_2E_xxx,
   kToken_uint_33__32_,
   kToken_sint_33__32__5F_S,
   kToken_uint_36__34__5F_L,
   kToken_sint_36__34__5F_LS,
   kToken_bigint_5F_G,
   kToken__2E_,
   kToken__2E__3D_,
   kToken__2E__2E__2E_,
   kToken__2E__2E__3C_,
   kToken__27_char_27_,
   kToken__22_string_22_,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken_comment,
   kToken_abstract,
   kToken_after,
   kToken_array,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_boolset,
   kToken_case,
   kToken_cast,
   kToken_class,
   kToken_const,
   kToken_constructor,
   kToken_default,
   kToken_dict,
   kToken_do,
   kToken_drop,
   kToken_else,
   kToken_elsif,
   kToken_end,
   kToken_enum,
   kToken_error,
   kToken_extension,
   kToken_extern,
   kToken_false,
   kToken_filewrapper,
   kToken_fixit,
   kToken_for,
   kToken_foreach,
   kToken_func,
   kToken_getter,
   kToken_grammar,
   kToken_graph,
   kToken_gui,
   kToken_here,
   kToken_if,
   kToken_in,
   kToken_index,
   kToken_indexing,
   kToken_insert,
   kToken_is,
   kToken_label,
   kToken_let,
   kToken_lexique,
   kToken_list,
   kToken_listmap,
   kToken_log,
   kToken_loop,
   kToken_map,
   kToken_match,
   kToken_message,
   kToken_method,
   kToken_mod,
   kToken_not,
   kToken_on,
   kToken_once,
   kToken_operator,
   kToken_option,
   kToken_or,
   kToken_override,
   kToken_parse,
   kToken_private,
   kToken_proc,
   kToken_project,
   kToken_remove,
   kToken_replace,
   kToken_repeat,
   kToken_rule,
   kToken_search,
   kToken_select,
   kToken_self,
   kToken_send,
   kToken_setter,
   kToken_sortedlist,
   kToken_state,
   kToken_struct,
   kToken_style,
   kToken_switch,
   kToken_syntax,
   kToken_tag,
   kToken_template,
   kToken_then,
   kToken_true,
   kToken_shared,
   kToken_unused,
   kToken_var,
   kToken_warning,
   kToken_when,
   kToken_while,
   kToken_with,
   kToken__2A_,
   kToken__7C_,
   kToken__2C_,
   kToken__2B_,
   kToken__2D__2D_,
   kToken__3A__3E_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__3F__5E_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3D__3D_,
   kToken__3F__3F_,
   kToken__3A__3D_,
   kToken__2B__2B_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__26__2B_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__21__5E_,
   kToken__7B_,
   kToken__7D_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__26__2B__2B_,
   kToken__26__2D__2D_,
   kToken__26__2F_} ;

//--- Key words table 'galgasKeyWordList'
  public : static int16_t search_into_galgasKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public : static int16_t search_into_galgasDelimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public : GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public : GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public : GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public : C_BigInt attributeValue_bigintValue (void) const ;
  public : utf32 attributeValue_charValue (void) const ;
  public : double attributeValue_floatValue (void) const ;
  public : C_String attributeValue_identifierString (void) const ;
  public : int32_t attributeValue_sint_33__32_value (void) const ;
  public : int64_t attributeValue_sint_36__34_value (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;
  public : uint64_t attributeValue_uint_36__34_value (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 146 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_galgasTemplateScanner & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Phase 1: @templateInstructionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_templateInstructionAST (void) ;

//---
  public : inline const class cPtr_templateInstructionAST * ptr (void) const { return (const cPtr_templateInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 2: pointer class for @templateInstructionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateInstructionListAST list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_templateInstructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateInstructionListAST constructor_listWithValue (const class GALGAS_templateInstructionAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST add_operation (const GALGAS_templateInstructionListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionAST constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionListAST ;
 
} ; // End of GALGAS_templateInstructionListAST class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateInstructionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_templateInstructionListAST (const GALGAS_templateInstructionListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_templateInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @templateInstructionListAST_2D_element struct                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_templateInstructionAST mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_templateInstructionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_templateInstructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionListAST_2D_element constructor_new (const class GALGAS_templateInstructionAST & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionAST getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Phase 1: @templateExpressionAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateExpressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_templateExpressionAST (void) ;

//---
  public : inline const class cPtr_templateExpressionAST * ptr (void) const { return (const cPtr_templateExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 2: pointer class for @templateExpressionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateExpressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_templateExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateExpressionListAST list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateExpressionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateExpressionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateExpressionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mActualSelector,
                                                  const class GALGAS_templateExpressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mEndOfExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateExpressionListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateExpressionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateExpressionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateExpressionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST add_operation (const GALGAS_templateExpressionListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateExpressionListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_templateExpressionAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_templateExpressionAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_templateExpressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_templateExpressionAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_templateExpressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_templateExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateExpressionListAST ;
 
} ; // End of GALGAS_templateExpressionListAST class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateExpressionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_templateExpressionListAST (const GALGAS_templateExpressionListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public : class GALGAS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateExpressionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @templateExpressionListAST_2D_element struct                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateExpressionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mActualSelector ;

  public : GALGAS_templateExpressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mEndOfExpressionLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_templateExpressionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_templateExpressionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateExpressionListAST_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateExpressionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateExpressionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateExpressionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateExpressionListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateAndOperationAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateAndOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateAndOperationAST (void) ;

//---
  public : inline const class cPtr_templateAndOperationAST * ptr (void) const { return (const cPtr_templateAndOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateAndOperationAST (const cPtr_templateAndOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateAndOperationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateAndOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateAndOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAndOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAndOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateAndOperationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateAndOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateAndOperationAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Phase 1: @templateOrOperationAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateOrOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateOrOperationAST (void) ;

//---
  public : inline const class cPtr_templateOrOperationAST * ptr (void) const { return (const cPtr_templateOrOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateOrOperationAST (const cPtr_templateOrOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateOrOperationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateOrOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateOrOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateOrOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOrOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 2: pointer class for @templateOrOperationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateOrOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateOrOperationAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateXorOperationAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateXorOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateXorOperationAST (void) ;

//---
  public : inline const class cPtr_templateXorOperationAST * ptr (void) const { return (const cPtr_templateXorOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateXorOperationAST (const cPtr_templateXorOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateXorOperationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateXorOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateXorOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateXorOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateXorOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateXorOperationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateXorOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateXorOperationAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Phase 1: @templateTrueBoolAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateTrueBoolAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateTrueBoolAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateTrueBoolAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateTrueBoolAST * ptr (void) const { return (const cPtr_templateTrueBoolAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateTrueBoolAST (const cPtr_templateTrueBoolAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateTrueBoolAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateTrueBoolAST constructor_new (const class GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateTrueBoolAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTrueBoolAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 2: pointer class for @templateTrueBoolAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateTrueBoolAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_templateTrueBoolAST (const GALGAS_location & in_mLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Phase 1: @templateFalseBoolAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateFalseBoolAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateFalseBoolAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateFalseBoolAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateFalseBoolAST * ptr (void) const { return (const cPtr_templateFalseBoolAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateFalseBoolAST (const cPtr_templateFalseBoolAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateFalseBoolAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateFalseBoolAST constructor_new (const class GALGAS_location & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFalseBoolAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFalseBoolAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 2: pointer class for @templateFalseBoolAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateFalseBoolAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_templateFalseBoolAST (const GALGAS_location & in_mLocation
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Phase 1: @templateNotOperatorAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateNotOperatorAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateNotOperatorAST (void) ;

//---
  public : inline const class cPtr_templateNotOperatorAST * ptr (void) const { return (const cPtr_templateNotOperatorAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateNotOperatorAST (const cPtr_templateNotOperatorAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateNotOperatorAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateNotOperatorAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateNotOperatorAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateNotOperatorAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNotOperatorAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 2: pointer class for @templateNotOperatorAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateNotOperatorAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_templateNotOperatorAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateLogicalNegateAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLogicalNegateAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLogicalNegateAST (void) ;

//---
  public : inline const class cPtr_templateLogicalNegateAST * ptr (void) const { return (const cPtr_templateLogicalNegateAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLogicalNegateAST (const cPtr_templateLogicalNegateAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLogicalNegateAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLogicalNegateAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLogicalNegateAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLogicalNegateAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateLogicalNegateAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLogicalNegateAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_templateLogicalNegateAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_templateExpressionAST & in_mExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @dynamicTypeComparisonKind enum                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_dynamicTypeComparisonKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_inherited,
    kEnum_strictlyInherited
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dynamicTypeComparisonKind extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_dynamicTypeComparisonKind constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_dynamicTypeComparisonKind constructor_inherited (LOCATION_ARGS) ;

  public : static class GALGAS_dynamicTypeComparisonKind constructor_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dynamicTypeComparisonKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInherited (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynamicTypeComparisonKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateAddOperationAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateAddOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateAddOperationAST (void) ;

//---
  public : inline const class cPtr_templateAddOperationAST * ptr (void) const { return (const cPtr_templateAddOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateAddOperationAST (const cPtr_templateAddOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateAddOperationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateAddOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateAddOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAddOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAddOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateAddOperationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateAddOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateAddOperationAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateSubOperationAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateSubOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateSubOperationAST (void) ;

//---
  public : inline const class cPtr_templateSubOperationAST * ptr (void) const { return (const cPtr_templateSubOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateSubOperationAST (const cPtr_templateSubOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateSubOperationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateSubOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateSubOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateSubOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSubOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateSubOperationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateSubOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateSubOperationAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @templateMultiplyOperationAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateMultiplyOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateMultiplyOperationAST (void) ;

//---
  public : inline const class cPtr_templateMultiplyOperationAST * ptr (void) const { return (const cPtr_templateMultiplyOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateMultiplyOperationAST (const cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateMultiplyOperationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateMultiplyOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_templateExpressionAST & inOperand1,
                                                                             const class GALGAS_templateExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateMultiplyOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @templateMultiplyOperationAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateMultiplyOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateMultiplyOperationAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateDivideOperationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateDivideOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateDivideOperationAST (void) ;

//---
  public : inline const class cPtr_templateDivideOperationAST * ptr (void) const { return (const cPtr_templateDivideOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateDivideOperationAST (const cPtr_templateDivideOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateDivideOperationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateDivideOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_templateExpressionAST & inOperand1,
                                                                           const class GALGAS_templateExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateDivideOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateDivideOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDivideOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @templateDivideOperationAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateDivideOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateDivideOperationAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateModuloOperationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateModuloOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateModuloOperationAST (void) ;

//---
  public : inline const class cPtr_templateModuloOperationAST * ptr (void) const { return (const cPtr_templateModuloOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateModuloOperationAST (const cPtr_templateModuloOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateModuloOperationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateModuloOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_templateExpressionAST & inOperand1,
                                                                           const class GALGAS_templateExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateModuloOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateModuloOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateModuloOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @templateModuloOperationAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateModuloOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateModuloOperationAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Phase 1: @templateUnaryMinusOperationAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateUnaryMinusOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateUnaryMinusOperationAST (void) ;

//---
  public : inline const class cPtr_templateUnaryMinusOperationAST * ptr (void) const { return (const cPtr_templateUnaryMinusOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateUnaryMinusOperationAST (const cPtr_templateUnaryMinusOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateUnaryMinusOperationAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateUnaryMinusOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_templateExpressionAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateUnaryMinusOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateUnaryMinusOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Phase 2: pointer class for @templateUnaryMinusOperationAST class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateUnaryMinusOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_templateUnaryMinusOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_templateExpressionAST & in_mExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Phase 1: @templateEqualTestAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateEqualTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateEqualTestAST (void) ;

//---
  public : inline const class cPtr_templateEqualTestAST * ptr (void) const { return (const cPtr_templateEqualTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateEqualTestAST (const cPtr_templateEqualTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateEqualTestAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                     const class GALGAS_templateExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateEqualTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateEqualTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateEqualTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 2: pointer class for @templateEqualTestAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateEqualTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                      const GALGAS_templateExpressionAST & in_mLeftExpression,
                                      const GALGAS_templateExpressionAST & in_mRightExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateNonEqualTestAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateNonEqualTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateNonEqualTestAST (void) ;

//---
  public : inline const class cPtr_templateNonEqualTestAST * ptr (void) const { return (const cPtr_templateNonEqualTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateNonEqualTestAST (const cPtr_templateNonEqualTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateNonEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateNonEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateNonEqualTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateNonEqualTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateNonEqualTestAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateNonEqualTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateNonEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateStrictInfTestAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateStrictInfTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateStrictInfTestAST (void) ;

//---
  public : inline const class cPtr_templateStrictInfTestAST * ptr (void) const { return (const cPtr_templateStrictInfTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateStrictInfTestAST (const cPtr_templateStrictInfTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateStrictInfTestAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateStrictInfTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateStrictInfTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateStrictInfTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateStrictInfTestAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateStrictInfTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateStrictInfTestAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateInfOrEqualTestAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInfOrEqualTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateInfOrEqualTestAST (void) ;

//---
  public : inline const class cPtr_templateInfOrEqualTestAST * ptr (void) const { return (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInfOrEqualTestAST (const cPtr_templateInfOrEqualTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInfOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInfOrEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                                          const class GALGAS_templateExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInfOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInfOrEqualTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @templateInfOrEqualTestAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInfOrEqualTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateInfOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_templateExpressionAST & in_mLeftExpression,
                                           const GALGAS_templateExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateStrictSupTestAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateStrictSupTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateStrictSupTestAST (void) ;

//---
  public : inline const class cPtr_templateStrictSupTestAST * ptr (void) const { return (const cPtr_templateStrictSupTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateStrictSupTestAST (const cPtr_templateStrictSupTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateStrictSupTestAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateStrictSupTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateStrictSupTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateStrictSupTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateStrictSupTestAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateStrictSupTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateStrictSupTestAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateSupOrEqualTestAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateSupOrEqualTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateSupOrEqualTestAST (void) ;

//---
  public : inline const class cPtr_templateSupOrEqualTestAST * ptr (void) const { return (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateSupOrEqualTestAST (const cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateSupOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateSupOrEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                                          const class GALGAS_templateExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateSupOrEqualTestAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @templateSupOrEqualTestAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateSupOrEqualTestAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateSupOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_templateExpressionAST & in_mLeftExpression,
                                           const GALGAS_templateExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Phase 1: @templateLeftShiftOperationAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLeftShiftOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLeftShiftOperationAST (void) ;

//---
  public : inline const class cPtr_templateLeftShiftOperationAST * ptr (void) const { return (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLeftShiftOperationAST (const cPtr_templateLeftShiftOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLeftShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLeftShiftOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_templateExpressionAST & inOperand1,
                                                                              const class GALGAS_templateExpressionAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLeftShiftOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLeftShiftOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Phase 2: pointer class for @templateLeftShiftOperationAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLeftShiftOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateLeftShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                               const GALGAS_templateExpressionAST & in_mLeftExpression,
                                               const GALGAS_templateExpressionAST & in_mRightExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Phase 1: @templateRightShiftOperationAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateRightShiftOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateRightShiftOperationAST (void) ;

//---
  public : inline const class cPtr_templateRightShiftOperationAST * ptr (void) const { return (const cPtr_templateRightShiftOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateRightShiftOperationAST (const cPtr_templateRightShiftOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateRightShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateRightShiftOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_templateExpressionAST & inOperand1,
                                                                               const class GALGAS_templateExpressionAST & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateRightShiftOperationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_templateExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateRightShiftOperationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Phase 2: pointer class for @templateRightShiftOperationAST class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateRightShiftOperationAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public : GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_templateRightShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                const GALGAS_templateExpressionAST & in_mRightExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateInstructionExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionExpressionAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionExpressionAST (void) ;

//---
  public : inline const class cPtr_templateInstructionExpressionAST * ptr (void) const { return (const cPtr_templateInstructionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionExpressionAST (const cPtr_templateInstructionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionExpressionAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateInstructionExpressionAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionExpressionAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mExpression ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_templateInstructionExpressionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                  const GALGAS_location & in_mLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @templateBlockInstructionAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateBlockInstructionAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateBlockInstructionAST (void) ;

//---
  public : inline const class cPtr_templateBlockInstructionAST * ptr (void) const { return (const cPtr_templateBlockInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateBlockInstructionAST (const cPtr_templateBlockInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateBlockInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateBlockInstructionAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_templateInstructionListAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBlockInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mBlockInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @templateBlockInstructionAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateBlockInstructionAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mExpression ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_templateInstructionListAST mProperty_mBlockInstructionList ;

//--- Constructor
  public : cPtr_templateBlockInstructionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_templateInstructionListAST & in_mBlockInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mBlockInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBlockInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @templateInstructionGetColumnLocationAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionGetColumnLocationAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionGetColumnLocationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGetColumnLocationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGetColumnLocationAST * ptr (void) const { return (const cPtr_templateInstructionGetColumnLocationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGetColumnLocationAST (const cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGetColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGetColumnLocationAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Phase 2: pointer class for @templateInstructionGetColumnLocationAST class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionGetColumnLocationAST : public cPtr_templateInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGetColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @templateInstructionGotoColumnLocationAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionGotoColumnLocationAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionGotoColumnLocationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGotoColumnLocationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGotoColumnLocationAST * ptr (void) const { return (const cPtr_templateInstructionGotoColumnLocationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGotoColumnLocationAST (const cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGotoColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGotoColumnLocationAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Phase 2: pointer class for @templateInstructionGotoColumnLocationAST class                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionGotoColumnLocationAST : public cPtr_templateInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateInstructionIfBranchListAST list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateInstructionIfBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateInstructionIfBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_templateExpressionAST & in_mExpression,
                                                  const class GALGAS_templateInstructionListAST & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfBranchListAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateInstructionIfBranchListAST constructor_listWithValue (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                             const class GALGAS_templateInstructionListAST & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionIfBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateExpressionAST & inOperand0,
                                                      const class GALGAS_templateInstructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListAST add_operation (const GALGAS_templateInstructionIfBranchListAST & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionIfBranchListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                       class GALGAS_templateInstructionListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateExpressionAST & outArgument0,
                                                  class GALGAS_templateInstructionListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateExpressionAST & outArgument0,
                                                 class GALGAS_templateInstructionListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateExpressionAST & outArgument0,
                                                       class GALGAS_templateInstructionListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateExpressionAST & outArgument0,
                                               class GALGAS_templateInstructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateExpressionAST & outArgument0,
                                              class GALGAS_templateInstructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionIfBranchListAST ;
 
} ; // End of GALGAS_templateInstructionIfBranchListAST class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateInstructionIfBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateInstructionIfBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 1: @templateInstructionIfBranchListAST_2D_element struct                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_templateExpressionAST mProperty_mExpression ;

  public : GALGAS_templateInstructionListAST mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_templateInstructionIfBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & in_mExpression,
                                                                 const GALGAS_templateInstructionListAST & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfBranchListAST_2D_element constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                              const class GALGAS_templateInstructionListAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfBranchListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateInstructionIfAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionIfAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionIfAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionIfAST * ptr (void) const { return (const cPtr_templateInstructionIfAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfAST constructor_new (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                                         const class GALGAS_templateInstructionListAST & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionIfBranchList (class GALGAS_templateInstructionIfBranchListAST inArgument0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateInstructionIfAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionIfAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateInstructionIfBranchListAST mProperty_mTemplateInstructionIfBranchList ;
  public : GALGAS_templateInstructionListAST mProperty_mElseInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                          const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListAST getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Parser class 'templateSyntax' declaration                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_templateSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_templateSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_expression_ (class GALGAS_templateExpressionAST & outArgument0,
                                           class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_factor_ (class GALGAS_templateExpressionAST & outArgument0,
                                       class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_factor_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_ (class GALGAS_templateExpressionListAST & outArgument0,
                                                             class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_templateExpressionAST & outArgument0,
                                        class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_ (class GALGAS_templateExpressionAST & outArgument0,
                                                   class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_ (class GALGAS_templateExpressionAST & outArgument0,
                                                 class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_ (class GALGAS_templateExpressionAST & outArgument0,
                                                     class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_switchExtractedValuesListAST & outArgument1,
                                               class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_switch_5F_case_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                                        class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GALGAS_templateInstructionListAST & outArgument0,
                                                                      class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_term_ (class GALGAS_templateExpressionAST & outArgument0,
                                     class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected : virtual void nt_term_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_templateSyntax_expression_i0_ (GALGAS_templateExpressionAST & outArgument0,
                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_expression_i0_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_relation_5F_term_i1_ (GALGAS_templateExpressionAST & outArgument0,
                                                             C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_relation_5F_term_i1_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_relation_5F_factor_i2_ (GALGAS_templateExpressionAST & outArgument0,
                                                               C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_relation_5F_factor_i2_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_simple_5F_expression_i3_ (GALGAS_templateExpressionAST & outArgument0,
                                                                 C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_simple_5F_expression_i3_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_term_i4_ (GALGAS_templateExpressionAST & outArgument0,
                                                 C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_term_i4_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i5_ (GALGAS_templateExpressionAST & outArgument0,
                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i5_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i6_ (GALGAS_templateExpressionAST & outArgument0,
                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i6_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i7_ (GALGAS_templateExpressionAST & outArgument0,
                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i7_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i8_ (GALGAS_templateExpressionAST & outArgument0,
                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_factor_i8_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i9_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i9_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i10_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i10_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i11_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i11_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i12_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i12_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i13_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i13_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i14_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i14_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i15_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i15_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i16_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i16_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i17_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i17_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i18_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i18_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i19_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i19_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i20_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i20_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i21_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i21_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i22_ (GALGAS_templateExpressionAST & outArgument0,
                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_primary_i22_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_output_5F_expression_5F_list_i23_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_output_5F_expression_5F_list_i23_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i26_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i26_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i27_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i27_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i28_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i28_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i29_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i29_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i31_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_template_5F_instruction_i31_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_switch_5F_case_i32_ (GALGAS_lstringlist & outArgument0,
                                                            GALGAS_switchExtractedValuesListAST & outArgument1,
                                                            C_Lexique_galgasTemplateScanner * inLexique) ;

  protected : void rule_templateSyntax_switch_5F_case_i32_parse (C_Lexique_galgasTemplateScanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_templateSyntax_0 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_1 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_2 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_3 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_4 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_5 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_6 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_7 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_8 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_9 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_10 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_11 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_12 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_13 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_14 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_15 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_16 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_17 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_18 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_19 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_20 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_21 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_22 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_23 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_24 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_25 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_26 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_27 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_28 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_29 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_30 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_31 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_32 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_33 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected : virtual int32_t select_templateSyntax_34 (C_Lexique_galgasTemplateScanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @structFieldAccessTemplateExpressionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_structFieldAccessTemplateExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_structFieldAccessTemplateExpressionAST (void) ;

//---
  public : inline const class cPtr_structFieldAccessTemplateExpressionAST * ptr (void) const { return (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldAccessTemplateExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structFieldAccessTemplateExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStructFieldName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessTemplateExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Phase 2: pointer class for @structFieldAccessTemplateExpressionAST class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_structFieldAccessTemplateExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mProperty_mExpression ;
  public : GALGAS_lstring mProperty_mStructFieldName ;

//--- Constructor
  public : cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mStructFieldName
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructFieldName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStructFieldName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Phase 1: @templateConstructorAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateConstructorAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateConstructorAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateConstructorAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateConstructorAST * ptr (void) const { return (const cPtr_templateConstructorAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateConstructorAST (const cPtr_templateConstructorAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateConstructorAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateConstructorAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_templateExpressionListAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateConstructorAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMConstructorName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_templateExpressionListAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateConstructorAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateConstructorAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 2: pointer class for @templateConstructorAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateConstructorAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mConstructorName ;
  public : GALGAS_templateExpressionListAST mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                        const GALGAS_lstring & in_mConstructorName,
                                        const GALGAS_templateExpressionListAST & in_mExpressionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMConstructorName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_templateExpressionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateExtensionTemplateCallAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateExtensionTemplateCallAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateExtensionTemplateCallAST (void) ;

//---
  public : inline const class cPtr_templateExtensionTemplateCallAST * ptr (void) const { return (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateExtensionTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateExtensionTemplateCallAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_templateExpressionListAST & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionValue (class GALGAS_templateExpressionAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutExpressionList (class GALGAS_templateExpressionListAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpressionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_mOutExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTemplateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateExtensionTemplateCallAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateExtensionTemplateCallAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateExtensionTemplateCallAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mExpressionValue ;
  public : GALGAS_lstring mProperty_mTemplateName ;
  public : GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;

//--- Constructor
  public : cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                  const GALGAS_lstring & in_mTemplateName,
                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpressionValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionValue (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST getter_mOutExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutExpressionList (GALGAS_templateExpressionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateFileWrapperTemplateCallAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateFileWrapperTemplateCallAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateFileWrapperTemplateCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateFileWrapperTemplateCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateFileWrapperTemplateCallAST * ptr (void) const { return (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateFileWrapperTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateFileWrapperTemplateCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_templateExpressionListAST & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFileWrapperName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutExpressionList (class GALGAS_templateExpressionListAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFileWrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_mOutExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTemplateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFileWrapperTemplateCallAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateFileWrapperTemplateCallAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateFileWrapperTemplateCallAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFileWrapperName ;
  public : GALGAS_lstring mProperty_mTemplateName ;
  public : GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;

//--- Constructor
  public : cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                    const GALGAS_lstring & in_mTemplateName,
                                                    const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFileWrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFileWrapperName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST getter_mOutExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutExpressionList (GALGAS_templateExpressionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateFunctionCallAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateFunctionCallAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateFunctionCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateFunctionCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateFunctionCallAST * ptr (void) const { return (const cPtr_templateFunctionCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateFunctionCallAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateFunctionCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_templateExpressionListAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_templateExpressionListAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFunctionCallAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateFunctionCallAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateFunctionCallAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_templateExpressionListAST mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                         const GALGAS_templateExpressionListAST & in_mExpressionList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_templateExpressionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateGetterCallInExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateGetterCallInExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateGetterCallInExpressionAST (void) ;

//---
  public : inline const class cPtr_templateGetterCallInExpressionAST * ptr (void) const { return (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateGetterCallInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateGetterCallInExpressionAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_templateExpressionListAST & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_templateExpressionListAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_templateExpressionAST inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateGetterCallInExpressionAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateGetterCallInExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_lstring mProperty_mGetterName ;
  public : GALGAS_templateExpressionListAST mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                   const GALGAS_lstring & in_mGetterName,
                                                   const GALGAS_templateExpressionListAST & in_mExpressionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_templateExpressionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Phase 1: @templateInstructionForeachAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionForeachAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionForeachAST (void) ;

//---
  public : inline const class cPtr_templateInstructionForeachAST * ptr (void) const { return (const cPtr_templateInstructionForeachAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionForeachAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionForeachAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_templateExpressionAST & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_templateInstructionListAST & inOperand3,
                                                                              const class GALGAS_templateInstructionListAST & inOperand4,
                                                                              const class GALGAS_lstring & inOperand5,
                                                                              const class GALGAS_templateInstructionListAST & inOperand6,
                                                                              const class GALGAS_templateInstructionListAST & inOperand7
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAfterInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBeforeInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBetweenInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (class GALGAS_templateInstructionListAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_templateExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexIdentifier (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsAscending (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPrefix (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPrefix (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Phase 2: pointer class for @templateInstructionForeachAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionForeachAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsAscending ;
  public : GALGAS_templateExpressionAST mProperty_mExpression ;
  public : GALGAS_string mProperty_mPrefix ;
  public : GALGAS_templateInstructionListAST mProperty_mBeforeInstructionList ;
  public : GALGAS_templateInstructionListAST mProperty_mDoInstructionList ;
  public : GALGAS_lstring mProperty_mIndexIdentifier ;
  public : GALGAS_templateInstructionListAST mProperty_mBetweenInstructionList ;
  public : GALGAS_templateInstructionListAST mProperty_mAfterInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                               const GALGAS_templateExpressionAST & in_mExpression,
                                               const GALGAS_string & in_mPrefix,
                                               const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                               const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                               const GALGAS_lstring & in_mIndexIdentifier,
                                               const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                               const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsAscending (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPrefix (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBeforeInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIndexIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndexIdentifier (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBetweenInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST getter_mAfterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAfterInstructionList (GALGAS_templateInstructionListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @templateInstructionSwitchAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionSwitchAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionSwitchAST (void) ;

//---
  public : inline const class cPtr_templateInstructionSwitchAST * ptr (void) const { return (const cPtr_templateInstructionSwitchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionSwitchAST (const cPtr_templateInstructionSwitchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionSwitchAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionSwitchAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_templateInstructionSwitchBranchListAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpression (class GALGAS_templateExpressionAST inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpressionEndLocation (class GALGAS_location inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionSwitchBranchList (class GALGAS_templateInstructionSwitchBranchListAST inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSwitchExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @templateInstructionSwitchBranchListAST list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionSwitchBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateInstructionSwitchBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateInstructionSwitchBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstringlist & in_mConstantList,
                                                  const class GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                  const class GALGAS_templateInstructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfBranch
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionSwitchBranchListAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionSwitchBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateInstructionSwitchBranchListAST constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                                                 const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                 const class GALGAS_templateInstructionListAST & inOperand2,
                                                                                                 const class GALGAS_location & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                      const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                      const class GALGAS_templateInstructionListAST & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListAST add_operation (const GALGAS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionSwitchBranchListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                       class GALGAS_switchExtractedValuesListAST constinArgument1,
                                                       class GALGAS_templateInstructionListAST constinArgument2,
                                                       class GALGAS_location constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                  class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                  class GALGAS_templateInstructionListAST & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                 class GALGAS_templateInstructionListAST & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                       class GALGAS_templateInstructionListAST & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAssociatedValuesExtractionAtIndex (class GALGAS_switchExtractedValuesListAST constinArgument0,
                                                                               class GALGAS_uint constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfBranchAtIndex (class GALGAS_location constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_switchExtractedValuesListAST & outArgument1,
                                               class GALGAS_templateInstructionListAST & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class GALGAS_templateInstructionListAST & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_mAssociatedValuesExtractionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionSwitchBranchListAST ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListAST class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateInstructionSwitchBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstringlist current_mConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_switchExtractedValuesListAST current_mAssociatedValuesExtraction (LOCATION_ARGS) const ;
  public : class GALGAS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateInstructionSwitchBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @templateInstructionSwitchAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionSwitchAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mSwitchExpression ;
  public : GALGAS_location mProperty_mSwitchExpressionEndLocation ;
  public : GALGAS_templateInstructionSwitchBranchListAST mProperty_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public : cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                              const GALGAS_location & in_mSwitchExpressionEndLocation,
                                              const GALGAS_templateInstructionSwitchBranchListAST & in_mTemplateInstructionSwitchBranchList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSwitchExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpressionEndLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListAST getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionSwitchBranchList (GALGAS_templateInstructionSwitchBranchListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateLiteralCharExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralCharExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralCharExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralCharExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralCharExpressionAST * ptr (void) const { return (const cPtr_templateLiteralCharExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralChar (class GALGAS_lchar inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mLiteralChar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralCharExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateLiteralCharExpressionAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralCharExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lchar mProperty_mLiteralChar ;

//--- Constructor
  public : cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lchar getter_mLiteralChar (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralChar (GALGAS_lchar inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateLiteralDoubleExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralDoubleExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralDoubleExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralDoubleExpressionAST * ptr (void) const { return (const cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralDouble (class GALGAS_ldouble inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mLiteralDouble (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralDoubleExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateLiteralDoubleExpressionAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralDoubleExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_ldouble mProperty_mLiteralDouble ;

//--- Constructor
  public : cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble getter_mLiteralDouble (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralDouble (GALGAS_ldouble inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateLiteralSIntExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralSIntExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralSIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralSIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralSIntExpressionAST * ptr (void) const { return (const cPtr_templateLiteralSIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralSIntExpressionAST (const cPtr_templateLiteralSIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralSIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralSIntExpressionAST constructor_new (const class GALGAS_lsint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralSIntExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (class GALGAS_lsint inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint getter_mLiteralInt (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralSIntExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateLiteralSIntExpressionAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralSIntExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lsint mProperty_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralSIntExpressionAST (const GALGAS_lsint & in_mLiteralInt
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint getter_mLiteralInt (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (GALGAS_lsint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @templateLiteralSInt_36__34_ExpressionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralSInt_36__34_ExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralSInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralSInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralSInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralSInt_36__34_ExpressionAST (const cPtr_templateLiteralSInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralSInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralSInt_36__34_ExpressionAST constructor_new (const class GALGAS_lsint_36__34_ & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (class GALGAS_lsint_36__34_ inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint_36__34_ getter_mLiteralInt (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralSInt_36__34_ExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateLiteralSInt64ExpressionAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralSInt_36__34_ExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lsint_36__34_ mProperty_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mLiteralInt
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint_36__34_ getter_mLiteralInt (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (GALGAS_lsint_36__34_ inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateLiteralStringExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralStringExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralStringExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralStringExpressionAST * ptr (void) const { return (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralStringExpressionAST constructor_new (const class GALGAS_stringlist & inOperand0,
                                                                                   const class GALGAS_location & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralStringList (class GALGAS_stringlist inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mLiteralStringList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralStringExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateLiteralStringExpressionAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralStringExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_stringlist mProperty_mLiteralStringList ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                    const GALGAS_location & in_mLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mLiteralStringList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralStringList (GALGAS_stringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateLiteralUIntExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralUIntExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralUIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralUIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralUIntExpressionAST * ptr (void) const { return (const cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralUIntExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (class GALGAS_luint inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mLiteralInt (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralUIntExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateLiteralUIntExpressionAST class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralUIntExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_luint mProperty_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralUIntExpressionAST (const GALGAS_luint & in_mLiteralInt
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mLiteralInt (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @templateLiteralUInt_36__34_ExpressionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateLiteralUInt_36__34_ExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralUInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralUInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralUInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralUInt_36__34_ExpressionAST (const cPtr_templateLiteralUInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralUInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateLiteralUInt_36__34_ExpressionAST constructor_new (const class GALGAS_luint_36__34_ & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (class GALGAS_luint_36__34_ inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint_36__34_ getter_mLiteralInt (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralUInt_36__34_ExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateLiteralUInt64ExpressionAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateLiteralUInt_36__34_ExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_luint_36__34_ mProperty_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mLiteralInt
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint_36__34_ getter_mLiteralInt (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLiteralInt (GALGAS_luint_36__34_ inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Phase 1: @templateOptionAccessAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateOptionAccessAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateOptionAccessAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateOptionAccessAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateOptionAccessAST * ptr (void) const { return (const cPtr_templateOptionAccessAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateOptionAccessAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateOptionAccessAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateOptionAccessAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Phase 2: pointer class for @templateOptionAccessAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateOptionAccessAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mOptionComponentName ;
  public : GALGAS_lstring mProperty_mOptionName ;
  public : GALGAS_lstring mProperty_mGetterName ;

//--- Constructor
  public : cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                         const GALGAS_lstring & in_mOptionName,
                                         const GALGAS_lstring & in_mGetterName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @templateTestDynamicClassAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateTestDynamicClassAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateTestDynamicClassAST (void) ;

//---
  public : inline const class cPtr_templateTestDynamicClassAST * ptr (void) const { return (const cPtr_templateTestDynamicClassAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateTestDynamicClassAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateTestDynamicClassAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (class GALGAS_location inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_templateExpressionAST inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKind (class GALGAS_dynamicTypeComparisonKind inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateTestDynamicClassAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @templateTestDynamicClassAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateTestDynamicClassAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_location mProperty_mEndOfReceiverExpression ;
  public : GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_templateTestDynamicClassAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                             const GALGAS_location & in_mEndOfReceiverExpression,
                                             const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                             const GALGAS_lstring & in_mTypeName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (GALGAS_templateExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKind (GALGAS_dynamicTypeComparisonKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Phase 1: @templateVarInExpressionAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateVarInExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateVarInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateVarInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateVarInExpressionAST * ptr (void) const { return (const cPtr_templateVarInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateVarInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateVarInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateVarInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @templateVarInExpressionAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateVarInExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public : cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMVarName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @switchExtractedValuesListAST list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_switchExtractedValuesListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchExtractedValuesListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchExtractedValuesListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExtractedValueTypeName,
                                                  const class GALGAS_lstring & in_mExtractedValueName,
                                                  const class GALGAS_bool & in_mMarkedAsUnused
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchExtractedValuesListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchExtractedValuesListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchExtractedValuesListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchExtractedValuesListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchExtractedValuesListAST add_operation (const GALGAS_switchExtractedValuesListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_switchExtractedValuesListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtractedValueNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtractedValueTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMarkedAsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtractedValueNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtractedValueTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMarkedAsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchExtractedValuesListAST ;
 
} ; // End of GALGAS_switchExtractedValuesListAST class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_switchExtractedValuesListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExtractedValueTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mExtractedValueName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mMarkedAsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchExtractedValuesListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'enterTemplateString'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterTemplateString (class GALGAS_templateInstructionListAST & ioArgument0,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @templateInstructionForGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_templateInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionForGeneration * ptr (void) const { return (const cPtr_templateInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @templateInstructionForGeneration class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Phase 1: @templateInstructionListForGeneration list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_templateInstructionForGeneration & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateInstructionListForGeneration constructor_listWithValue (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionListForGeneration ;
 
} ; // End of GALGAS_templateInstructionListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateInstructionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Phase 1: @templateInstructionListForGeneration_2D_element struct                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_templateInstructionForGeneration mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionListForGeneration_2D_element constructor_new (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForGeneration getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 1: @templateInstructionGetColumnLocationForGeneration class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionGetColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionGetColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGetColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGetColumnLocationForGeneration * ptr (void) const { return (const cPtr_templateInstructionGetColumnLocationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGetColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGetColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Phase 2: pointer class for @templateInstructionGetColumnLocationForGeneration class                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 1: @templateInstructionGotoColumnLocationForGeneration class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionGotoColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionGotoColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGotoColumnLocationForGeneration * ptr (void) const { return (const cPtr_templateInstructionGotoColumnLocationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGotoColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Phase 2: pointer class for @templateInstructionGotoColumnLocationForGeneration class                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 1: @templateInstructionIfBranchListForGeneration list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateInstructionIfBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateInstructionIfBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                  const class GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfBranchListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateInstructionIfBranchListForGeneration constructor_listWithValue (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                      const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration add_operation (const GALGAS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionIfBranchListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                       class GALGAS_templateInstructionListForGeneration constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                  class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                       class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                               class GALGAS_templateInstructionListForGeneration & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                              class GALGAS_templateInstructionListForGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionIfBranchListForGeneration ;
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_templateInstructionIfBranchListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateInstructionIfBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @semanticExpressionForGeneration class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_semanticExpressionForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_semanticExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_semanticExpressionForGeneration * ptr (void) const { return (const cPtr_semanticExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticExpressionForGeneration (const cPtr_semanticExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @unifiedTypeMap_2D_proxy map proxy                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeOptionalProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mAddAssignOperatorArguments (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mAllTypedAttributeList (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMethodMap getter_mClassMethodMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_mConstructorMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mCurrentTypedAttributeList (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultConstructorName (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_mEnumConstantList (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap getter_mEnumConstantMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList getter_mEnumerationDescriptor (C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateHeaderInSeparateFile (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_getterMap getter_mGetterMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_operators getter_mHandledOperatorFlags (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mHeaderFileName (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_headerKind getter_mHeaderKind (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instanceMethodMap getter_mInstanceMethodMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConcrete (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mMapProxySearchConstructorList (C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mMapSearchMethodList (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mPropertyMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_setterMap getter_mSetterMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSuperType (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSupportCollectionValue (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeForEnumeratedElement (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKindEnum getter_mTypeKindEnum (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @semanticExpressionForGeneration class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_semanticExpressionForGeneration : public acPtr_class {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mResultType ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Phase 1: @templateInstructionIfBranchListForGeneration_2D_element struct                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

  public : GALGAS_templateInstructionListForGeneration mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                           const GALGAS_templateInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfBranchListForGeneration_2D_element constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @templateInstructionIfForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionIfForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionIfForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionIfForGeneration * ptr (void) const { return (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfForGeneration constructor_new (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                                   const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionIfBranchList (class GALGAS_templateInstructionIfBranchListForGeneration inArgument0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @templateInstructionIfForGeneration class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_templateInstructionIfBranchListForGeneration mProperty_mTemplateInstructionIfBranchList ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                    const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

