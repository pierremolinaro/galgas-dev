#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mValue_30_,
                                                 const class GALGAS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS__32_lstringlist constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS__32_lstringlist constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS__32_lstringlist add_operation (const GALGAS__32_lstringlist & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_30_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_31_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GALGAS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS__32_lstringlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mValue_30_ ;
  public: inline GALGAS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GALGAS_lstring mProperty_mValue_31_ ;
  public: inline GALGAS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & in_mValue_30_,
                                             const GALGAS_lstring & in_mValue_31_) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS__32_lstringlist_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS__32_lstringlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasScanner_33_
//
//--------------------------------------------------------------------------------------------------

#include "C_Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_galgasScanner_33_ : public cToken {
  public: BigSigned mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: String mLexicalAttribute_identifierString ;
  public: int32_t mLexicalAttribute_sint_33__32_value ;
  public: int64_t mLexicalAttribute_sint_36__34_value ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;
  public: uint64_t mLexicalAttribute_uint_36__34_value ;

  public: cTokenFor_galgasScanner_33_ (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class C_Lexique_galgasScanner_33_ : public C_Lexique {
//--- Constructors
  public: C_Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_galgasScanner_33_ (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_double_2E_xxx,
   kToken_literalInt,
   kToken__2E_,
   kToken__2E__2E__2E_,
   kToken__2E__2E__3C_,
   kToken__40_type,
   kToken__27_char_27_,
   kToken__24_terminal_24_,
   kToken_comment,
   kToken_commentMark,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken__3C_non_5F_terminal_3E_,
   kToken__22_string_22_,
   kToken_abstract,
   kToken_after,
   kToken_array,
   kToken_as,
   kToken_bang,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_boolset,
   kToken_cast,
   kToken_case,
   kToken_class,
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
   kToken_fileprivate,
   kToken_filewrapper,
   kToken_for,
   kToken_fixit,
   kToken_func,
   kToken_getter,
   kToken_grammar,
   kToken_graph,
   kToken_gui,
   kToken_if,
   kToken_in,
   kToken_indexing,
   kToken_init,
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
   kToken_message,
   kToken_method,
   kToken_mod,
   kToken_mutating,
   kToken_not,
   kToken_on,
   kToken_operator,
   kToken_option,
   kToken_or,
   kToken_override,
   kToken_parse,
   kToken_public,
   kToken_protected,
   kToken_private,
   kToken_proc,
   kToken_project,
   kToken_refclass,
   kToken_remove,
   kToken_repeat,
   kToken_replace,
   kToken_rewind,
   kToken_rule,
   kToken_search,
   kToken_select,
   kToken_self,
   kToken_send,
   kToken_setter,
   kToken_sortedlist,
   kToken_spoil,
   kToken_struct,
   kToken_style,
   kToken_super,
   kToken_switch,
   kToken_syntax,
   kToken_tag,
   kToken_template,
   kToken_then,
   kToken_true,
   kToken_typealias,
   kToken_unused,
   kToken_var,
   kToken_warning,
   kToken_while,
   kToken_with,
   kToken__25_app_2D_link,
   kToken__25_app_2D_source,
   kToken__25_makefile_2D_macosx,
   kToken__25_makefile_2D_unix,
   kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx,
   kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx,
   kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx,
   kToken__25_codeblocks_2D_windows,
   kToken__25_codeblocks_2D_linux_33__32_,
   kToken__25_codeblocks_2D_linux_36__34_,
   kToken__25_applicationBundleBase,
   kToken__25_MacOS,
   kToken__25_MacOSDeployment,
   kToken__25_quietOutputByDefault,
   kToken__25_macCodeSign,
   kToken__25_libpmAtPath,
   kToken__25_tool_2D_source,
   kToken__25_translate,
   kToken__25_once,
   kToken__25_usefull,
   kToken__25_generatedInSeparateFile,
   kToken__25_nonAtomicSelection,
   kToken__25_templateEndMark,
   kToken__25_preserved,
   kToken__25_selector,
   kToken__25_useGrammar,
   kToken__2A_,
   kToken__2C_,
   kToken__2B_,
   kToken__26__2B_,
   kToken__26__2D_,
   kToken__26__2A_,
   kToken__26__2F_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__3A__3E_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3D__3D_,
   kToken__3D_,
   kToken__26__26_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__2D__3D_,
   kToken__2A__3D_,
   kToken__2F__3D_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__7B_,
   kToken__7D_,
   kToken__60_,
   kToken__7C__7C_,
   kToken__7C_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__2D_,
   kToken__2B__2B_,
   kToken__26__2D__2D_,
   kToken__26__2B__2B_,
   kToken__3D__3D__3D_,
   kToken__21__3D__3D_,
   kToken__3F__5E_,
   kToken__21__5E_} ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public: GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public: GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public: GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: int32_t attributeValue_sint_33__32_value (void) const ;
  public: int64_t attributeValue_sint_36__34_value (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;
  public: uint64_t attributeValue_uint_36__34_value (void) const ;


//--- Indexing keys
  public: enum {
    kIndexing_classDefinition,
    kIndexing_enumDefinition,
    kIndexing_structDefinition,
    kIndexing_listDefinition,
    kIndexing_sortedListDefinition,
    kIndexing_listmapDefinition,
    kIndexing_mapDefinition,
    kIndexing_dictionaryDefinition,
    kIndexing_externTypeDefinition,
    kIndexing_mapEntryDefinition,
    kIndexing_arrayTypeDefinition,
    kIndexing_arrayElementTypeReference,
    kIndexing_filewrapperDefinition,
    kIndexing_filewrapperReference,
    kIndexing_graphDefinition,
    kIndexing_classReferencedAsSuperClass,
    kIndexing_typeReferenceInConstructor,
    kIndexing_typeReferenceInTypeMethod,
    kIndexing_routineDefinition,
    kIndexing_routineCall,
    kIndexing_functionDefinition,
    kIndexing_functionCall,
    kIndexing_terminalDeclaration,
    kIndexing_terminalReference,
    kIndexing_ruleDefinition,
    kIndexing_ruleReference,
    kIndexing_abstractExtensionSetterDefinition,
    kIndexing_typeReferenceAbstractExtensionSetter,
    kIndexing_overrideabstractExtensionSetterDefinition,
    kIndexing_extensionSetterDefinition,
    kIndexing_typeReferenceExtensionSetter,
    kIndexing_overrideExtensionSetterDefinition,
    kIndexing_typeReferenceOverrideExtensionSetterDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionSetter,
    kIndexing_abstractExtensionMethodDefinition,
    kIndexing_typeReferenceAbstractExtensionMethod,
    kIndexing_overrideAbstractExtensionMethodDefinition,
    kIndexing_extensionMethodDefinition,
    kIndexing_typeReferenceExtensionMethod,
    kIndexing_overrideExtensionMethodDefinition,
    kIndexing_typeReferenceOverrideExtensionMethodDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionMethod,
    kIndexing_abstractExtensionGetterDefinition,
    kIndexing_typeReferenceAbstractExtensionGetter,
    kIndexing_overrideAbstractExtensionGetterDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionGetter,
    kIndexing_extensionGetterDefinition,
    kIndexing_typeReferenceExtensionGetter,
    kIndexing_overrideExtensionGetterDefinition,
    kIndexing_typeReferenceOverrideExtensionGetter,
    kIndexing_optionComponentDefinition,
    kIndexing_optionComponentReference,
    kIndexing_grammarComponentDefinition,
    kIndexing_grammarComponentReference,
    kIndexing_indexingNameDefinition,
    kIndexing_indexingNameReference
  } ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasScanner_33_ & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 181 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasScanner_33_ & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionAST (const class cPtr_templateInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionAST_2D_weak (const class GALGAS_templateInstructionAST & inSource) ;

  public: GALGAS_templateInstructionAST_2D_weak & operator = (const class GALGAS_templateInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionAST bang_templateInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_templateInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionListAST constructor_listWithValue (const class GALGAS_templateInstructionAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST add_operation (const GALGAS_templateInstructionListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionListAST ;
 
} ; // End of GALGAS_templateInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListAST (const GALGAS_templateInstructionListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_templateInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_templateInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_templateInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_templateInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListAST_2D_element constructor_new (const class GALGAS_templateInstructionAST & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_templateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateExpressionAST (const class cPtr_templateExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_templateExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_templateExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateExpressionAST_2D_weak (const class GALGAS_templateExpressionAST & inSource) ;

  public: GALGAS_templateExpressionAST_2D_weak & operator = (const class GALGAS_templateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateExpressionAST bang_templateExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExpressionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateExpressionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateExpressionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mActualSelector,
                                                 const class GALGAS_templateExpressionAST & in_mExpression,
                                                 const class GALGAS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionListAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExpressionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateExpressionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateExpressionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST add_operation (const GALGAS_templateExpressionListAST & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_templateExpressionAST constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_templateExpressionAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_templateExpressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_templateExpressionAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_templateExpressionAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_templateExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_templateExpressionAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateExpressionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_templateExpressionListAST ;
 
} ; // End of GALGAS_templateExpressionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateExpressionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateExpressionListAST (const GALGAS_templateExpressionListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GALGAS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateExpressionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExpressionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: inline GALGAS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: inline GALGAS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mEndOfExpressionLocation ;
  public: inline GALGAS_location readProperty_mEndOfExpressionLocation (void) const {
    return mProperty_mEndOfExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateExpressionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateExpressionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateExpressionListAST_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                       const GALGAS_templateExpressionAST & in_mExpression,
                                                       const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExpressionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExpressionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExpressionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateConstructorAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateConstructorAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateConstructorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateConstructorAST (const class cPtr_templateConstructorAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mConstructorName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateConstructorAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateConstructorAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_templateExpressionListAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateConstructorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateConstructorAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateConstructorAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateConstructorAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateConstructorAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mConstructorName ;
  public: GALGAS_templateExpressionListAST mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                       const GALGAS_lstring & in_mConstructorName,
                                       const GALGAS_templateExpressionListAST & in_mExpressionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateConstructorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateConstructorAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateConstructorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateConstructorAST_2D_weak (const class GALGAS_templateConstructorAST & inSource) ;

  public: GALGAS_templateConstructorAST_2D_weak & operator = (const class GALGAS_templateConstructorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateConstructorAST bang_templateConstructorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateConstructorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateConstructorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateConstructorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateConstructorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFileWrapperTemplateCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFileWrapperTemplateCallAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateFileWrapperTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateFileWrapperTemplateCallAST (const class cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFileWrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mTemplateName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFileWrapperTemplateCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_templateExpressionListAST & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFileWrapperTemplateCallAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateFileWrapperTemplateCallAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateFileWrapperTemplateCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFileWrapperName ;
  public: GALGAS_lstring mProperty_mTemplateName ;
  public: GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;

//--- Constructor
  public: cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                   const GALGAS_lstring & in_mTemplateName,
                                                   const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFileWrapperTemplateCallAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFileWrapperTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak & operator = (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFileWrapperTemplateCallAST bang_templateFileWrapperTemplateCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFileWrapperTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFileWrapperTemplateCallAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExtensionTemplateCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExtensionTemplateCallAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateExtensionTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateExtensionTemplateCallAST (const class cPtr_templateExtensionTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateExpressionAST readProperty_mExpressionValue (void) const ;

  public: class GALGAS_lstring readProperty_mTemplateName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExtensionTemplateCallAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_templateExpressionListAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExtensionTemplateCallAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateExtensionTemplateCallAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateExtensionTemplateCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpressionValue ;
  public: GALGAS_lstring mProperty_mTemplateName ;
  public: GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;

//--- Constructor
  public: cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                 const GALGAS_lstring & in_mTemplateName,
                                                 const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExtensionTemplateCallAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateExtensionTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

  public: GALGAS_templateExtensionTemplateCallAST_2D_weak & operator = (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateExtensionTemplateCallAST bang_templateExtensionTemplateCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExtensionTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExtensionTemplateCallAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAndOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateAndOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateAndOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateAndOperationAST (const class cPtr_templateAndOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAndOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateAndOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateAndOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateAndOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAndOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateAndOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateAndOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateAndOperationAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAndOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateAndOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateAndOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateAndOperationAST_2D_weak (const class GALGAS_templateAndOperationAST & inSource) ;

  public: GALGAS_templateAndOperationAST_2D_weak & operator = (const class GALGAS_templateAndOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateAndOperationAST bang_templateAndOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAndOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateAndOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateAndOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateAndOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAndOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOrOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateOrOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateOrOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateOrOperationAST (const class cPtr_templateOrOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOrOperationAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOrOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOrOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateOrOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOrOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateOrOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateOrOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateOrOperationAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_templateExpressionAST & in_mLeftExpression,
                                       const GALGAS_templateExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOrOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateOrOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateOrOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateOrOperationAST_2D_weak (const class GALGAS_templateOrOperationAST & inSource) ;

  public: GALGAS_templateOrOperationAST_2D_weak & operator = (const class GALGAS_templateOrOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateOrOperationAST bang_templateOrOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOrOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOrOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOrOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateOrOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOrOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateXorOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateXorOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateXorOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateXorOperationAST (const class cPtr_templateXorOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateXorOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateXorOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateXorOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateXorOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateXorOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateXorOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateXorOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateXorOperationAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateXorOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateXorOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateXorOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateXorOperationAST_2D_weak (const class GALGAS_templateXorOperationAST & inSource) ;

  public: GALGAS_templateXorOperationAST_2D_weak & operator = (const class GALGAS_templateXorOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateXorOperationAST bang_templateXorOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateXorOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateXorOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateXorOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateXorOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateXorOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTrueBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateTrueBoolAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateTrueBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateTrueBoolAST (const class cPtr_templateTrueBoolAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTrueBoolAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTrueBoolAST constructor_new (const class GALGAS_location & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateTrueBoolAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTrueBoolAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateTrueBoolAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateTrueBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_templateTrueBoolAST (const GALGAS_location & in_mLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTrueBoolAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateTrueBoolAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateTrueBoolAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateTrueBoolAST_2D_weak (const class GALGAS_templateTrueBoolAST & inSource) ;

  public: GALGAS_templateTrueBoolAST_2D_weak & operator = (const class GALGAS_templateTrueBoolAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateTrueBoolAST bang_templateTrueBoolAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTrueBoolAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTrueBoolAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTrueBoolAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateTrueBoolAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTrueBoolAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFalseBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFalseBoolAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateFalseBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateFalseBoolAST (const class cPtr_templateFalseBoolAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFalseBoolAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFalseBoolAST constructor_new (const class GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFalseBoolAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFalseBoolAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateFalseBoolAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateFalseBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_templateFalseBoolAST (const GALGAS_location & in_mLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFalseBoolAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFalseBoolAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFalseBoolAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFalseBoolAST_2D_weak (const class GALGAS_templateFalseBoolAST & inSource) ;

  public: GALGAS_templateFalseBoolAST_2D_weak & operator = (const class GALGAS_templateFalseBoolAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFalseBoolAST bang_templateFalseBoolAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFalseBoolAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFalseBoolAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFalseBoolAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFalseBoolAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFalseBoolAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralStringExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralStringExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLiteralStringExpressionAST (const class cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_stringlist readProperty_mLiteralStringList (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralStringExpressionAST constructor_new (const class GALGAS_stringlist & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralStringExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLiteralStringExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralStringExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_stringlist mProperty_mLiteralStringList ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                   const GALGAS_location & in_mLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralStringExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralStringExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

  public: GALGAS_templateLiteralStringExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralStringExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralStringExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralUIntExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralUIntExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralUIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLiteralUIntExpressionAST (const class cPtr_templateLiteralUIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_mLiteralInt (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralUIntExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralUIntExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLiteralUIntExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralUIntExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbigint mProperty_mLiteralInt ;

//--- Constructor
  public: cPtr_templateLiteralUIntExpressionAST (const GALGAS_lbigint & in_mLiteralInt
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralUIntExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralUIntExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak (const class GALGAS_templateLiteralUIntExpressionAST & inSource) ;

  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralUIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralUIntExpressionAST bang_templateLiteralUIntExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralUIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralUIntExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralCharExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralCharExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLiteralCharExpressionAST (const class cPtr_templateLiteralCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mLiteralChar (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralCharExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLiteralCharExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralCharExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mLiteralChar ;

//--- Constructor
  public: cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralCharExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralCharExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralCharExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralCharExpressionAST_2D_weak (const class GALGAS_templateLiteralCharExpressionAST & inSource) ;

  public: GALGAS_templateLiteralCharExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralCharExpressionAST bang_templateLiteralCharExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralCharExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralCharExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralDoubleExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralDoubleExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLiteralDoubleExpressionAST (const class cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_ldouble readProperty_mLiteralDouble (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralDoubleExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLiteralDoubleExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralDoubleExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ldouble mProperty_mLiteralDouble ;

//--- Constructor
  public: cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralDoubleExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralDoubleExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak (const class GALGAS_templateLiteralDoubleExpressionAST & inSource) ;

  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralDoubleExpressionAST bang_templateLiteralDoubleExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralDoubleExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLiteralDoubleExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structFieldAccessTemplateExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structFieldAccessTemplateExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_structFieldAccessTemplateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_structFieldAccessTemplateExpressionAST (const class cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_lstring readProperty_mStructFieldName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structFieldAccessTemplateExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structFieldAccessTemplateExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structFieldAccessTemplateExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structFieldAccessTemplateExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_lstring mProperty_mStructFieldName ;

//--- Constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                       const GALGAS_templateExpressionAST & in_mExpression,
                                                       const GALGAS_lstring & in_mStructFieldName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structFieldAccessTemplateExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & operator = (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structFieldAccessTemplateExpressionAST bang_structFieldAccessTemplateExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structFieldAccessTemplateExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNotOperatorAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateNotOperatorAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateNotOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateNotOperatorAST (const class cPtr_templateNotOperatorAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNotOperatorAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateNotOperatorAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateNotOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateNotOperatorAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNotOperatorAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateNotOperatorAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateNotOperatorAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_templateNotOperatorAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_templateExpressionAST & in_mExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNotOperatorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateNotOperatorAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateNotOperatorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateNotOperatorAST_2D_weak (const class GALGAS_templateNotOperatorAST & inSource) ;

  public: GALGAS_templateNotOperatorAST_2D_weak & operator = (const class GALGAS_templateNotOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateNotOperatorAST bang_templateNotOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNotOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateNotOperatorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateNotOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateNotOperatorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNotOperatorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLogicalNegateAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLogicalNegateAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLogicalNegateAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLogicalNegateAST (const class cPtr_templateLogicalNegateAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLogicalNegateAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLogicalNegateAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLogicalNegateAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLogicalNegateAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLogicalNegateAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLogicalNegateAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_templateLogicalNegateAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLogicalNegateAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLogicalNegateAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLogicalNegateAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLogicalNegateAST_2D_weak (const class GALGAS_templateLogicalNegateAST & inSource) ;

  public: GALGAS_templateLogicalNegateAST_2D_weak & operator = (const class GALGAS_templateLogicalNegateAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLogicalNegateAST bang_templateLogicalNegateAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLogicalNegateAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLogicalNegateAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLogicalNegateAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLogicalNegateAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOptionAccessAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateOptionAccessAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateOptionAccessAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateOptionAccessAST (const class cPtr_templateOptionAccessAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionName (void) const ;

  public: class GALGAS_lstring readProperty_mGetterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOptionAccessAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateOptionAccessAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateOptionAccessAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateOptionAccessAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mOptionComponentName ;
  public: GALGAS_lstring mProperty_mOptionName ;
  public: GALGAS_lstring mProperty_mGetterName ;

//--- Constructor
  public: cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                        const GALGAS_lstring & in_mOptionName,
                                        const GALGAS_lstring & in_mGetterName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOptionAccessAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateOptionAccessAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateOptionAccessAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateOptionAccessAST_2D_weak (const class GALGAS_templateOptionAccessAST & inSource) ;

  public: GALGAS_templateOptionAccessAST_2D_weak & operator = (const class GALGAS_templateOptionAccessAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateOptionAccessAST bang_templateOptionAccessAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOptionAccessAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateOptionAccessAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @dynamicTypeComparisonKind enum                                      *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_dynamicTypeComparisonKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_inherited,
    kEnum_strictlyInherited
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicTypeComparisonKind extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynamicTypeComparisonKind constructor_equal (LOCATION_ARGS) ;

  public: static class GALGAS_dynamicTypeComparisonKind constructor_inherited (LOCATION_ARGS) ;

  public: static class GALGAS_dynamicTypeComparisonKind constructor_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynamicTypeComparisonKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInherited (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_equal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_inherited () const ;

  public: VIRTUAL_IN_DEBUG bool optional_strictlyInherited () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynamicTypeComparisonKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTestDynamicClassAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateTestDynamicClassAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateTestDynamicClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateTestDynamicClassAST (const class cPtr_templateTestDynamicClassAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTestDynamicClassAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateTestDynamicClassAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateTestDynamicClassAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateTestDynamicClassAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public: cPtr_templateTestDynamicClassAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                            const GALGAS_location & in_mEndOfReceiverExpression,
                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                            const GALGAS_lstring & in_mTypeName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTestDynamicClassAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateTestDynamicClassAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateTestDynamicClassAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateTestDynamicClassAST_2D_weak (const class GALGAS_templateTestDynamicClassAST & inSource) ;

  public: GALGAS_templateTestDynamicClassAST_2D_weak & operator = (const class GALGAS_templateTestDynamicClassAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateTestDynamicClassAST bang_templateTestDynamicClassAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTestDynamicClassAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateTestDynamicClassAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFunctionCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFunctionCallAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateFunctionCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateFunctionCallAST (const class cPtr_templateFunctionCallAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFunctionCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_templateExpressionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFunctionCallAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateFunctionCallAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateFunctionCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_templateExpressionListAST mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                        const GALGAS_templateExpressionListAST & in_mExpressionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFunctionCallAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateFunctionCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFunctionCallAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFunctionCallAST_2D_weak (const class GALGAS_templateFunctionCallAST & inSource) ;

  public: GALGAS_templateFunctionCallAST_2D_weak & operator = (const class GALGAS_templateFunctionCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFunctionCallAST bang_templateFunctionCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFunctionCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateFunctionCallAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVarInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateVarInExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateVarInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateVarInExpressionAST (const class cPtr_templateVarInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVarInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateVarInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateVarInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateVarInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public: cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVarInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateVarInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateVarInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateVarInExpressionAST_2D_weak (const class GALGAS_templateVarInExpressionAST & inSource) ;

  public: GALGAS_templateVarInExpressionAST_2D_weak & operator = (const class GALGAS_templateVarInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateVarInExpressionAST bang_templateVarInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVarInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateVarInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAddOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateAddOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateAddOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateAddOperationAST (const class cPtr_templateAddOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAddOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateAddOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateAddOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateAddOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAddOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateAddOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateAddOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateAddOperationAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAddOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateAddOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateAddOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateAddOperationAST_2D_weak (const class GALGAS_templateAddOperationAST & inSource) ;

  public: GALGAS_templateAddOperationAST_2D_weak & operator = (const class GALGAS_templateAddOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateAddOperationAST bang_templateAddOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAddOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateAddOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateAddOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateAddOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAddOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSubOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateSubOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateSubOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateSubOperationAST (const class cPtr_templateSubOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSubOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateSubOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateSubOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateSubOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSubOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateSubOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateSubOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateSubOperationAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSubOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateSubOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateSubOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateSubOperationAST_2D_weak (const class GALGAS_templateSubOperationAST & inSource) ;

  public: GALGAS_templateSubOperationAST_2D_weak & operator = (const class GALGAS_templateSubOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateSubOperationAST bang_templateSubOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSubOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateSubOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateSubOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateSubOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSubOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateMultiplyOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateMultiplyOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateMultiplyOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateMultiplyOperationAST (const class cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateMultiplyOperationAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateMultiplyOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                                            const class GALGAS_templateExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateMultiplyOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateMultiplyOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateMultiplyOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateMultiplyOperationAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_templateExpressionAST & in_mLeftExpression,
                                             const GALGAS_templateExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateMultiplyOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateMultiplyOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateMultiplyOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateMultiplyOperationAST_2D_weak (const class GALGAS_templateMultiplyOperationAST & inSource) ;

  public: GALGAS_templateMultiplyOperationAST_2D_weak & operator = (const class GALGAS_templateMultiplyOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateMultiplyOperationAST bang_templateMultiplyOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateMultiplyOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateMultiplyOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateMultiplyOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDivideOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDivideOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateDivideOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateDivideOperationAST (const class cPtr_templateDivideOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDivideOperationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDivideOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                                          const class GALGAS_templateExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateDivideOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateDivideOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDivideOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateDivideOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateDivideOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateDivideOperationAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_templateExpressionAST & in_mLeftExpression,
                                           const GALGAS_templateExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDivideOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDivideOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateDivideOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateDivideOperationAST_2D_weak (const class GALGAS_templateDivideOperationAST & inSource) ;

  public: GALGAS_templateDivideOperationAST_2D_weak & operator = (const class GALGAS_templateDivideOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateDivideOperationAST bang_templateDivideOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDivideOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDivideOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateDivideOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateDivideOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDivideOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateModuloOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateModuloOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateModuloOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateModuloOperationAST (const class cPtr_templateModuloOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateModuloOperationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateModuloOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                                          const class GALGAS_templateExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateModuloOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateModuloOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateModuloOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateModuloOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateModuloOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateModuloOperationAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_templateExpressionAST & in_mLeftExpression,
                                           const GALGAS_templateExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateModuloOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateModuloOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateModuloOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateModuloOperationAST_2D_weak (const class GALGAS_templateModuloOperationAST & inSource) ;

  public: GALGAS_templateModuloOperationAST_2D_weak & operator = (const class GALGAS_templateModuloOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateModuloOperationAST bang_templateModuloOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateModuloOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateModuloOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateModuloOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateModuloOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateModuloOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateUnaryMinusOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateUnaryMinusOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateUnaryMinusOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateUnaryMinusOperationAST (const class cPtr_templateUnaryMinusOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateUnaryMinusOperationAST extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateUnaryMinusOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_templateExpressionAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateUnaryMinusOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateUnaryMinusOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateUnaryMinusOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateUnaryMinusOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_templateUnaryMinusOperationAST (const GALGAS_location & in_mOperatorLocation,
                                               const GALGAS_templateExpressionAST & in_mExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateUnaryMinusOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateUnaryMinusOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateUnaryMinusOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateUnaryMinusOperationAST_2D_weak (const class GALGAS_templateUnaryMinusOperationAST & inSource) ;

  public: GALGAS_templateUnaryMinusOperationAST_2D_weak & operator = (const class GALGAS_templateUnaryMinusOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateUnaryMinusOperationAST bang_templateUnaryMinusOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateUnaryMinusOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateUnaryMinusOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateUnaryMinusOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateUnaryMinusOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateEqualTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateEqualTestAST (const class cPtr_templateEqualTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateEqualTestAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                    const class GALGAS_templateExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateEqualTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateEqualTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateEqualTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_templateExpressionAST & in_mLeftExpression,
                                     const GALGAS_templateExpressionAST & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateEqualTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateEqualTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateEqualTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateEqualTestAST_2D_weak (const class GALGAS_templateEqualTestAST & inSource) ;

  public: GALGAS_templateEqualTestAST_2D_weak & operator = (const class GALGAS_templateEqualTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateEqualTestAST bang_templateEqualTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateEqualTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateEqualTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateEqualTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNonEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateNonEqualTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateNonEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateNonEqualTestAST (const class cPtr_templateNonEqualTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNonEqualTestAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateNonEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateNonEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateNonEqualTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateNonEqualTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateNonEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateNonEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNonEqualTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateNonEqualTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateNonEqualTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateNonEqualTestAST_2D_weak (const class GALGAS_templateNonEqualTestAST & inSource) ;

  public: GALGAS_templateNonEqualTestAST_2D_weak & operator = (const class GALGAS_templateNonEqualTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateNonEqualTestAST bang_templateNonEqualTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNonEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateNonEqualTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateNonEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateNonEqualTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictInfTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateStrictInfTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateStrictInfTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateStrictInfTestAST (const class cPtr_templateStrictInfTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictInfTestAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateStrictInfTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateStrictInfTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateStrictInfTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateStrictInfTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictInfTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateStrictInfTestAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictInfTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateStrictInfTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateStrictInfTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateStrictInfTestAST_2D_weak (const class GALGAS_templateStrictInfTestAST & inSource) ;

  public: GALGAS_templateStrictInfTestAST_2D_weak & operator = (const class GALGAS_templateStrictInfTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateStrictInfTestAST bang_templateStrictInfTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictInfTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateStrictInfTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateStrictInfTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateStrictInfTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInfOrEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInfOrEqualTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInfOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInfOrEqualTestAST (const class cPtr_templateInfOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInfOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInfOrEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInfOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInfOrEqualTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInfOrEqualTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInfOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateInfOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInfOrEqualTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInfOrEqualTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInfOrEqualTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInfOrEqualTestAST_2D_weak (const class GALGAS_templateInfOrEqualTestAST & inSource) ;

  public: GALGAS_templateInfOrEqualTestAST_2D_weak & operator = (const class GALGAS_templateInfOrEqualTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInfOrEqualTestAST bang_templateInfOrEqualTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInfOrEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInfOrEqualTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInfOrEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInfOrEqualTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictSupTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateStrictSupTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateStrictSupTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateStrictSupTestAST (const class cPtr_templateStrictSupTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictSupTestAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateStrictSupTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateStrictSupTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateStrictSupTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateStrictSupTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictSupTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateStrictSupTestAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_templateExpressionAST & in_mLeftExpression,
                                         const GALGAS_templateExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictSupTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateStrictSupTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateStrictSupTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateStrictSupTestAST_2D_weak (const class GALGAS_templateStrictSupTestAST & inSource) ;

  public: GALGAS_templateStrictSupTestAST_2D_weak & operator = (const class GALGAS_templateStrictSupTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateStrictSupTestAST bang_templateStrictSupTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictSupTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateStrictSupTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateStrictSupTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateStrictSupTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSupOrEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateSupOrEqualTestAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateSupOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateSupOrEqualTestAST (const class cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSupOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateSupOrEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateSupOrEqualTestAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateSupOrEqualTestAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateSupOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateSupOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSupOrEqualTestAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateSupOrEqualTestAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateSupOrEqualTestAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateSupOrEqualTestAST_2D_weak (const class GALGAS_templateSupOrEqualTestAST & inSource) ;

  public: GALGAS_templateSupOrEqualTestAST_2D_weak & operator = (const class GALGAS_templateSupOrEqualTestAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateSupOrEqualTestAST bang_templateSupOrEqualTestAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSupOrEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateSupOrEqualTestAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateSupOrEqualTestAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLeftShiftOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLeftShiftOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLeftShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLeftShiftOperationAST (const class cPtr_templateLeftShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLeftShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLeftShiftOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_templateExpressionAST & inOperand1,
                                                                             const class GALGAS_templateExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLeftShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLeftShiftOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLeftShiftOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLeftShiftOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateLeftShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLeftShiftOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLeftShiftOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLeftShiftOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLeftShiftOperationAST_2D_weak (const class GALGAS_templateLeftShiftOperationAST & inSource) ;

  public: GALGAS_templateLeftShiftOperationAST_2D_weak & operator = (const class GALGAS_templateLeftShiftOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLeftShiftOperationAST bang_templateLeftShiftOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLeftShiftOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLeftShiftOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLeftShiftOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLeftShiftOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateRightShiftOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateRightShiftOperationAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateRightShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateRightShiftOperationAST (const class cPtr_templateRightShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateRightShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateRightShiftOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_templateExpressionAST & inOperand1,
                                                                              const class GALGAS_templateExpressionAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateRightShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateRightShiftOperationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateRightShiftOperationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateRightShiftOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_templateRightShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                               const GALGAS_templateExpressionAST & in_mLeftExpression,
                                               const GALGAS_templateExpressionAST & in_mRightExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateRightShiftOperationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateRightShiftOperationAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateRightShiftOperationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateRightShiftOperationAST_2D_weak (const class GALGAS_templateRightShiftOperationAST & inSource) ;

  public: GALGAS_templateRightShiftOperationAST_2D_weak & operator = (const class GALGAS_templateRightShiftOperationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateRightShiftOperationAST bang_templateRightShiftOperationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateRightShiftOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateRightShiftOperationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateRightShiftOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateRightShiftOperationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringAST (const class cPtr_templateInstructionStringAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringAST constructor_new (const class GALGAS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionStringAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringAST_2D_weak (const class GALGAS_templateInstructionStringAST & inSource) ;

  public: GALGAS_templateInstructionStringAST_2D_weak & operator = (const class GALGAS_templateInstructionStringAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringAST bang_templateInstructionStringAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionStringAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionExpressionAST (const class cPtr_templateInstructionExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionExpressionAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_templateInstructionExpressionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                 const GALGAS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionExpressionAST_2D_weak (const class GALGAS_templateInstructionExpressionAST & inSource) ;

  public: GALGAS_templateInstructionExpressionAST_2D_weak & operator = (const class GALGAS_templateInstructionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionExpressionAST bang_templateInstructionExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateBlockInstructionAST (const class cPtr_templateBlockInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mBlockInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionAST constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_templateInstructionListAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateBlockInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListAST mProperty_mBlockInstructionList ;

//--- Constructor
  public: cPtr_templateBlockInstructionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_templateInstructionListAST & in_mBlockInstructionList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateBlockInstructionAST_2D_weak (const class GALGAS_templateBlockInstructionAST & inSource) ;

  public: GALGAS_templateBlockInstructionAST_2D_weak & operator = (const class GALGAS_templateBlockInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateBlockInstructionAST bang_templateBlockInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGetColumnLocationAST (const class cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGetColumnLocationAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGetColumnLocationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGetColumnLocationAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGetColumnLocationAST_2D_weak (const class GALGAS_templateInstructionGetColumnLocationAST & inSource) ;

  public: GALGAS_templateInstructionGetColumnLocationAST_2D_weak & operator = (const class GALGAS_templateInstructionGetColumnLocationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGetColumnLocationAST bang_templateInstructionGetColumnLocationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGetColumnLocationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGotoColumnLocationAST (const class cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGotoColumnLocationAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGotoColumnLocationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGotoColumnLocationAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGotoColumnLocationAST_2D_weak (const class GALGAS_templateInstructionGotoColumnLocationAST & inSource) ;

  public: GALGAS_templateInstructionGotoColumnLocationAST_2D_weak & operator = (const class GALGAS_templateInstructionGotoColumnLocationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGotoColumnLocationAST bang_templateInstructionGotoColumnLocationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGotoColumnLocationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionIfBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_templateExpressionAST & in_mExpression,
                                                 const class GALGAS_templateInstructionListAST & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionIfBranchListAST constructor_listWithValue (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionIfBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateExpressionAST & inOperand0,
                                                     const class GALGAS_templateInstructionListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListAST add_operation (const GALGAS_templateInstructionIfBranchListAST & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateExpressionAST constinArgument0,
                                               class GALGAS_templateInstructionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                      class GALGAS_templateInstructionListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateExpressionAST & outArgument0,
                                                 class GALGAS_templateInstructionListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateExpressionAST & outArgument0,
                                                class GALGAS_templateInstructionListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateExpressionAST & outArgument0,
                                                      class GALGAS_templateInstructionListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_templateExpressionAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateExpressionAST & outArgument0,
                                              class GALGAS_templateInstructionListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateExpressionAST & outArgument0,
                                             class GALGAS_templateInstructionListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionIfBranchListAST ;
 
} ; // End of GALGAS_templateInstructionIfBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionIfBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionIfBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: inline GALGAS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_templateInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_templateInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & in_mExpression,
                                                                const GALGAS_templateInstructionListAST & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfBranchListAST_2D_element constructor_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                             const class GALGAS_templateInstructionListAST & inOperand1,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionIfBranchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionIfAST (const class cPtr_templateInstructionIfAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateInstructionIfBranchListAST readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfAST constructor_new (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                                        const class GALGAS_templateInstructionListAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionIfAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionIfAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionIfAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateInstructionIfBranchListAST mProperty_mTemplateInstructionIfBranchList ;
  public: GALGAS_templateInstructionListAST mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                         const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionIfAST_2D_weak (const class GALGAS_templateInstructionIfAST & inSource) ;

  public: GALGAS_templateInstructionIfAST_2D_weak & operator = (const class GALGAS_templateInstructionIfAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionIfAST bang_templateInstructionIfAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionIfAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_bool & ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForGeneration_2D_weak (const class GALGAS_templateInstructionForGeneration & inSource) ;

  public: GALGAS_templateInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForGeneration bang_templateInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticExpressionForGeneration (const class cPtr_semanticExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @unifiedTypeMapEntry enum                                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_null,
    kEnum_element
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntry extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapEntry constructor_element (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMapEntry constructor_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_element (class GALGAS_unifiedTypeMapElementClass_2D_weak & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_element (class GALGAS_unifiedTypeMapElementClass_2D_weak & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_null () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typeDefinition readProperty_mDefinition (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapElementClass constructor_new (const class GALGAS_typeDefinition & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefinition (class GALGAS_typeDefinition inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @typeDefinition enum                                            *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_unsolved,
    kEnum_solved
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDefinition extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeDefinition constructor_solved (const class GALGAS_unifiedTypeDefinition & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeDefinition constructor_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_solved (class GALGAS_unifiedTypeDefinition & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_solved (class GALGAS_unifiedTypeDefinition & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_unsolved () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @operators boolset
//
//--------------------------------------------------------------------------------------------------

class GALGAS_operators : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GALGAS_operators (void) ;

//--------------------------------- Private constructor
  private: GALGAS_operators (const uint64_t inFlags) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_operators extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_operators constructor_all (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_divEqualOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_doNotGenererateObjectCompare (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_generateCopyConstructorAndAssignmentOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_generateDescriptionGetterUtilityMethod (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_generateEnumerationHelperMethods (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_incDecOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_incDecOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixAddOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixAddOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixAndOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixDivOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixDivOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixModOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixMulOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixMulOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixOrOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixShiftOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixSubOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixSubOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_infixXorOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_isComparable (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_isReferenceEquatable (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_minusEqualOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_mulEqualOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_none (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_plusEqualOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_prefixMinusOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_prefixMinusOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_prefixNotOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_prefixPlusOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_prefixTildeOperator (LOCATION_ARGS) ;

  public: static class GALGAS_operators constructor_supportWithAccessor (LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GALGAS_operators operator_and (const GALGAS_operators & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GALGAS_operators operator_or (const GALGAS_operators & inOperand
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GALGAS_operators operator_xor (const GALGAS_operators & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GALGAS_operators operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GALGAS_operators substract_operation (const GALGAS_operators & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_operators & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_divEqualOperatorWithExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_doNotGenererateObjectCompare (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_generateCopyConstructorAndAssignmentOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_generateDescriptionGetterUtilityMethod (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_generateEnumerationHelperMethods (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_incDecOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_incDecOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixAddOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixAddOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixAndOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixDivOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixDivOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixModOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixMulOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixMulOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixOrOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixShiftOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixSubOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixSubOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_infixXorOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isReferenceEquatable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_minusEqualOperatorWithExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mulEqualOperatorWithExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_plusEqualOperatorWithExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_plusEqualOperatorWithFieldListNeedsCompilerArg (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_prefixMinusOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_prefixMinusOperatorNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_prefixNotOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_prefixPlusOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_prefixTildeOperator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_supportWithAccessor (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_operators class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operators ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @headerKind enum                                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_headerKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_headerKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noHeader,
    kEnum_oneHeader,
    kEnum_twoHeaders
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_headerKind extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_headerKind constructor_noHeader (LOCATION_ARGS) ;

  public: static class GALGAS_headerKind constructor_oneHeader (LOCATION_ARGS) ;

  public: static class GALGAS_headerKind constructor_twoHeaders (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_headerKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOneHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTwoHeaders (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_noHeader () const ;

  public: VIRTUAL_IN_DEBUG bool optional_oneHeader () const ;

  public: VIRTUAL_IN_DEBUG bool optional_twoHeaders () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_headerKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerKind ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @typeKindEnum enum                                             *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_classType,
    kEnum_weakReferenceType,
    kEnum_enumType,
    kEnum_listType,
    kEnum_sortedListType,
    kEnum_mapType,
    kEnum_sharedMapType,
    kEnum_sharedMapEntryType,
    kEnum_listMapType,
    kEnum_boolsetType,
    kEnum_structType,
    kEnum_graphType,
    kEnum_externType,
    kEnum_arrayType,
    kEnum_predefinedType
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeKindEnum constructor_arrayType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_boolsetType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_classType (const class GALGAS_bool & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_enumType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_externType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_graphType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_listMapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_listType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_mapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_predefinedType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_sharedMapEntryType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_sharedMapType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_sortedListType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_structType (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindEnum constructor_weakReferenceType (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_classType (class GALGAS_bool & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_weakReferenceType (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolsetType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGraphType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isListMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefinedType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSharedMapEntryType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSharedMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSortedListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isWeakReferenceType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_arrayType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_boolsetType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_classType (class GALGAS_bool & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_enumType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_externType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_graphType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_listMapType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_listType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_mapType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefinedType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sharedMapEntryType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sharedMapType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sortedListType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_structType () const ;

  public: VIRTUAL_IN_DEBUG bool optional_weakReferenceType (class GALGAS_unifiedTypeMapEntry & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mConstantName,
                                                 const class GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantList extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS__32_lstringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS__32_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumConstantList add_operation (const GALGAS_enumConstantList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS__32_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS__32_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS__32_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS__32_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS__32_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedValueDefinitionListAtIndex (class GALGAS__32_lstringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS__32_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS__32_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociatedValueDefinitionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_enumConstantList ;
 
} ; // End of GALGAS_enumConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GALGAS__32_lstringlist current_mAssociatedValueDefinitionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumerationDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumerationDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                 const class GALGAS_string & in_mEnumerationName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDescriptorList extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumerationDescriptorList constructor_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumerationDescriptorList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumerationDescriptorList add_operation (const GALGAS_enumerationDescriptorList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mEnumeratedTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_enumerationDescriptorList ;
 
} ; // End of GALGAS_enumerationDescriptorList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_enumerationDescriptorList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mEnumeratedType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mEnumerationName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumerationDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_functionSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_functionSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionSignature extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionSignature constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_functionSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GALGAS_string & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionSignature inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_functionSignature add_operation (const GALGAS_functionSignature & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_unifiedTypeMapEntry constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMapEntry & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_unifiedTypeMapEntry & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_functionSignature ;
 
} ; // End of GALGAS_functionSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_functionSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapSearchMethodListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapSearchMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_mapSearchMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_mapSearchMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSearchMethodName,
                                                 const class GALGAS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapSearchMethodListAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapSearchMethodListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_mapSearchMethodListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST add_operation (const GALGAS_mapSearchMethodListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_mapSearchMethodListAST ;
 
} ; // End of GALGAS_mapSearchMethodListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_mapSearchMethodListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSearchMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_mapSearchMethodListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typedPropertyList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typedPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typedPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typedPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mPropertyTypeEntry,
                                                 const class GALGAS_lstring & in_mPropertyName,
                                                 const class GALGAS_bool & in_hasSetter,
                                                 const class GALGAS_bool & in_hasSelector
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typedPropertyList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typedPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typedPropertyList constructor_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_bool & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typedPropertyList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setHasSelectorAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setHasSetterAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeEntryAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasSetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mPropertyTypeEntryAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_typedPropertyList ;
 
} ; // End of GALGAS_typedPropertyList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typedPropertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mPropertyTypeEntry (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_hasSetter (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_hasSelector (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typedPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_classMethodMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_classMethodMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_classMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) ;
  public: GALGAS_classMethodMap & operator = (const GALGAS_classMethodMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classMethodMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_classMethodMap constructor_mapWithMapToOverride (const class GALGAS_classMethodMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterSignature & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_classMethodMap add_operation (const GALGAS_classMethodMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_formalParameterSignature constinArgument1,
                                                        class GALGAS_bool constinArgument2
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_classMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterSignature & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_classMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_classMethodMap ;
 
} ; // End of GALGAS_classMethodMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_classMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_classMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constantIndexMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) ;
  public: GALGAS_constantIndexMap & operator = (const GALGAS_constantIndexMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantIndexMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantIndexMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constantIndexMap constructor_mapWithMapToOverride (const class GALGAS_constantIndexMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntryList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constantIndexMap add_operation (const GALGAS_constantIndexMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_unifiedTypeMapEntryList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedTypeListForKey (class GALGAS_unifiedTypeMapEntryList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_unifiedTypeMapEntryList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_mAssociatedTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_unifiedTypeMapEntryList & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constantIndexMap ;
 
} ; // End of GALGAS_constantIndexMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantIndexMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntryList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constantIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constructorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constructorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_constructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constructorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constructorMap (const GALGAS_constructorMap & inSource) ;
  public: GALGAS_constructorMap & operator = (const GALGAS_constructorMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constructorMap constructor_mapWithMapToOverride (const class GALGAS_constructorMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constructorMap add_operation (const GALGAS_constructorMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_functionSignature constinArgument1,
                                                        class GALGAS_bool constinArgument2,
                                                        class GALGAS_unifiedTypeMapEntry constinArgument3
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentTypeListForKey (class GALGAS_functionSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mReturnedTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_functionSignature & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constructorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constructorMap ;
 
} ; // End of GALGAS_constructorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constructorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mArgumentTypeList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_getterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_getterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_getterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_getterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_getterMap (const GALGAS_getterMap & inSource) ;
  public: GALGAS_getterMap & operator = (const GALGAS_getterMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getterMap extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_getterMap constructor_mapWithMapToOverride (const class GALGAS_getterMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_methodKind & inOperand1,
                                                     const class GALGAS_functionSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                     const class GALGAS_methodQualifier & inOperand6,
                                                     const class GALGAS_string & inOperand7,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_getterMap add_operation (const GALGAS_getterMap & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind constinArgument1,
                                                  class GALGAS_functionSignature constinArgument2,
                                                  class GALGAS_location constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument5,
                                                  class GALGAS_methodQualifier constinArgument6,
                                                  class GALGAS_string constinArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_methodKind constinArgument1,
                                                        class GALGAS_functionSignature constinArgument2,
                                                        class GALGAS_location constinArgument3,
                                                        class GALGAS_bool constinArgument4,
                                                        class GALGAS_unifiedTypeMapEntry constinArgument5,
                                                        class GALGAS_methodQualifier constinArgument6,
                                                        class GALGAS_string constinArgument7
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentTypeListForKey (class GALGAS_functionSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationLocationForKey (class GALGAS_location constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterNameThatObsoletesInvokationNameForKey (class GALGAS_string constinArgument0,
                                                                                        class GALGAS_string constinArgument1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind & outArgument1,
                                                  class GALGAS_functionSignature & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument5,
                                                  class GALGAS_methodQualifier & outArgument6,
                                                  class GALGAS_string & outArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGetterNameThatObsoletesInvokationNameForKey (const class GALGAS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mReturnedTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_getterMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_methodKind & outOperand1,
                                                    class GALGAS_functionSignature & outOperand2,
                                                    class GALGAS_location & outOperand3,
                                                    class GALGAS_bool & outOperand4,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand5,
                                                    class GALGAS_methodQualifier & outOperand6,
                                                    class GALGAS_string & outOperand7) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_getterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_getterMap ;
 
} ; // End of GALGAS_getterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_getterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_getterMap (const GALGAS_getterMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mArgumentTypeList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;
  public: class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_getterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_instanceMethodMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_instanceMethodMap_searchKey ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_instanceMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) ;
  public: GALGAS_instanceMethodMap & operator = (const GALGAS_instanceMethodMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instanceMethodMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instanceMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_instanceMethodMap constructor_mapWithMapToOverride (const class GALGAS_instanceMethodMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_methodKind & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_methodQualifier & inOperand5,
                                                     const class GALGAS_string & inOperand6,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instanceMethodMap add_operation (const GALGAS_instanceMethodMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind constinArgument1,
                                                  class GALGAS_formalParameterSignature constinArgument2,
                                                  class GALGAS_location constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  class GALGAS_methodQualifier constinArgument5,
                                                  class GALGAS_string constinArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationLocationForKey (class GALGAS_location constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchInheritedKey (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_methodKind & outArgument1,
                                                           class GALGAS_formalParameterSignature & outArgument2,
                                                           class GALGAS_location & outArgument3,
                                                           class GALGAS_bool & outArgument4,
                                                           class GALGAS_methodQualifier & outArgument5,
                                                           class GALGAS_string & outArgument6,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind & outArgument1,
                                                  class GALGAS_formalParameterSignature & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_methodQualifier & outArgument5,
                                                  class GALGAS_string & outArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessageForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instanceMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_methodKind & outOperand1,
                                                    class GALGAS_formalParameterSignature & outOperand2,
                                                    class GALGAS_location & outOperand3,
                                                    class GALGAS_bool & outOperand4,
                                                    class GALGAS_methodQualifier & outOperand5,
                                                    class GALGAS_string & outOperand6) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_instanceMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_instanceMethodMap ;
 
} ; // End of GALGAS_instanceMethodMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_instanceMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instanceMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_optionalMethodMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_optionalMethodMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_optionalMethodMap (const GALGAS_optionalMethodMap & inSource) ;
  public: GALGAS_optionalMethodMap & operator = (const GALGAS_optionalMethodMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodMap constructor_mapWithMapToOverride (const class GALGAS_optionalMethodMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_optionalMethodSignature & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionalMethodMap add_operation (const GALGAS_optionalMethodMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_optionalMethodSignature constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentTypeListForKey (class GALGAS_optionalMethodSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_optionalMethodSignature & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodSignature getter_mArgumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_optionalMethodSignature & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_optionalMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionalMethodMap ;
 
} ; // End of GALGAS_optionalMethodMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodMap (const GALGAS_optionalMethodMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_optionalMethodSignature current_mArgumentTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionalMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyMap (const GALGAS_propertyMap & inSource) ;
  public: GALGAS_propertyMap & operator = (const GALGAS_propertyMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyMap constructor_mapWithMapToOverride (const class GALGAS_propertyMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_AccessControl & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyMap add_operation (const GALGAS_propertyMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_AccessControl constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessControlForKey (class GALGAS_AccessControl constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_AccessControl & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControl getter_mAccessControlForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mPropertyTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_AccessControl & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyMap ;
 
} ; // End of GALGAS_propertyMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_setterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_setterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_setterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_setterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_setterMap (const GALGAS_setterMap & inSource) ;
  public: GALGAS_setterMap & operator = (const GALGAS_setterMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setterMap extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_setterMap constructor_mapWithMapToOverride (const class GALGAS_setterMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_methodKind & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_methodQualifier & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_setterMap add_operation (const GALGAS_setterMap & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind constinArgument1,
                                                  class GALGAS_formalParameterSignature constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  class GALGAS_methodQualifier constinArgument4,
                                                  class GALGAS_string constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_methodKind constinArgument1,
                                                        class GALGAS_formalParameterSignature constinArgument2,
                                                        class GALGAS_bool constinArgument3,
                                                        class GALGAS_methodQualifier constinArgument4,
                                                        class GALGAS_string constinArgument5
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_methodKind & outArgument1,
                                                  class GALGAS_formalParameterSignature & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_methodQualifier & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessageForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_setterMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_methodKind & outOperand1,
                                                    class GALGAS_formalParameterSignature & outOperand2,
                                                    class GALGAS_bool & outOperand3,
                                                    class GALGAS_methodQualifier & outOperand4,
                                                    class GALGAS_string & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_setterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_setterMap ;
 
} ; // End of GALGAS_setterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_setterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_setterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeDefinition struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: inline GALGAS_lstring readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_bool mProperty_mIsPredefined ;
  public: inline GALGAS_bool readProperty_mIsPredefined (void) const {
    return mProperty_mIsPredefined ;
  }

  public: GALGAS_bool mProperty_mIsConcrete ;
  public: inline GALGAS_bool readProperty_mIsConcrete (void) const {
    return mProperty_mIsConcrete ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mSuperType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mSuperType (void) const {
    return mProperty_mSuperType ;
  }

  public: GALGAS_typeKindEnum mProperty_mTypeKindEnum ;
  public: inline GALGAS_typeKindEnum readProperty_mTypeKindEnum (void) const {
    return mProperty_mTypeKindEnum ;
  }

  public: GALGAS_bool mProperty_mSupportCollectionValue ;
  public: inline GALGAS_bool readProperty_mSupportCollectionValue (void) const {
    return mProperty_mSupportCollectionValue ;
  }

  public: GALGAS_typedPropertyList mProperty_mAllTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_mAllTypedPropertyList (void) const {
    return mProperty_mAllTypedPropertyList ;
  }

  public: GALGAS_propertyMap mProperty_mPropertyMap ;
  public: inline GALGAS_propertyMap readProperty_mPropertyMap (void) const {
    return mProperty_mPropertyMap ;
  }

  public: GALGAS_typedPropertyList mProperty_mCurrentTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_mCurrentTypedPropertyList (void) const {
    return mProperty_mCurrentTypedPropertyList ;
  }

  public: GALGAS_constructorMap mProperty_mConstructorMap ;
  public: inline GALGAS_constructorMap readProperty_mConstructorMap (void) const {
    return mProperty_mConstructorMap ;
  }

  public: GALGAS_getterMap mProperty_mGetterMap ;
  public: inline GALGAS_getterMap readProperty_mGetterMap (void) const {
    return mProperty_mGetterMap ;
  }

  public: GALGAS_setterMap mProperty_mSetterMap ;
  public: inline GALGAS_setterMap readProperty_mSetterMap (void) const {
    return mProperty_mSetterMap ;
  }

  public: GALGAS_instanceMethodMap mProperty_mInstanceMethodMap ;
  public: inline GALGAS_instanceMethodMap readProperty_mInstanceMethodMap (void) const {
    return mProperty_mInstanceMethodMap ;
  }

  public: GALGAS_classMethodMap mProperty_mClassMethodMap ;
  public: inline GALGAS_classMethodMap readProperty_mClassMethodMap (void) const {
    return mProperty_mClassMethodMap ;
  }

  public: GALGAS_optionalMethodMap mProperty_mOptionalMethodMap ;
  public: inline GALGAS_optionalMethodMap readProperty_mOptionalMethodMap (void) const {
    return mProperty_mOptionalMethodMap ;
  }

  public: GALGAS_enumerationDescriptorList mProperty_mEnumerationDescriptor ;
  public: inline GALGAS_enumerationDescriptorList readProperty_mEnumerationDescriptor (void) const {
    return mProperty_mEnumerationDescriptor ;
  }

  public: GALGAS_operators mProperty_mHandledOperatorFlags ;
  public: inline GALGAS_operators readProperty_mHandledOperatorFlags (void) const {
    return mProperty_mHandledOperatorFlags ;
  }

  public: GALGAS_functionSignature mProperty_mAddAssignOperatorArguments ;
  public: inline GALGAS_functionSignature readProperty_mAddAssignOperatorArguments (void) const {
    return mProperty_mAddAssignOperatorArguments ;
  }

  public: GALGAS_constantIndexMap mProperty_mEnumConstantMap ;
  public: inline GALGAS_constantIndexMap readProperty_mEnumConstantMap (void) const {
    return mProperty_mEnumConstantMap ;
  }

  public: GALGAS_enumConstantList mProperty_mEnumConstantList ;
  public: inline GALGAS_enumConstantList readProperty_mEnumConstantList (void) const {
    return mProperty_mEnumConstantList ;
  }

  public: GALGAS_mapSearchMethodListAST mProperty_mMapSearchMethodList ;
  public: inline GALGAS_mapSearchMethodListAST readProperty_mMapSearchMethodList (void) const {
    return mProperty_mMapSearchMethodList ;
  }

  public: GALGAS_mapSearchMethodListAST mProperty_mMapEntrySearchConstructorList ;
  public: inline GALGAS_mapSearchMethodListAST readProperty_mMapEntrySearchConstructorList (void) const {
    return mProperty_mMapEntrySearchConstructorList ;
  }

  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;
  public: inline GALGAS_bool readProperty_mGenerateHeaderInSeparateFile (void) const {
    return mProperty_mGenerateHeaderInSeparateFile ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mTypeForEnumeratedElement ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mTypeForEnumeratedElement (void) const {
    return mProperty_mTypeForEnumeratedElement ;
  }

  public: GALGAS_string mProperty_defaultConstructorName ;
  public: inline GALGAS_string readProperty_defaultConstructorName (void) const {
    return mProperty_defaultConstructorName ;
  }

  public: GALGAS_string mProperty_mHeaderFileName ;
  public: inline GALGAS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

  public: GALGAS_headerKind mProperty_mHeaderKind ;
  public: inline GALGAS_headerKind readProperty_mHeaderKind (void) const {
    return mProperty_mHeaderKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMIsPredefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPredefined = inValue ;
  }

  public: inline void setter_setMIsConcrete (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConcrete = inValue ;
  }

  public: inline void setter_setMSuperType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperType = inValue ;
  }

  public: inline void setter_setMTypeKindEnum (const GALGAS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeKindEnum = inValue ;
  }

  public: inline void setter_setMSupportCollectionValue (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSupportCollectionValue = inValue ;
  }

  public: inline void setter_setMAllTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAllTypedPropertyList = inValue ;
  }

  public: inline void setter_setMPropertyMap (const GALGAS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyMap = inValue ;
  }

  public: inline void setter_setMCurrentTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentTypedPropertyList = inValue ;
  }

  public: inline void setter_setMConstructorMap (const GALGAS_constructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorMap = inValue ;
  }

  public: inline void setter_setMGetterMap (const GALGAS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterMap = inValue ;
  }

  public: inline void setter_setMSetterMap (const GALGAS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterMap = inValue ;
  }

  public: inline void setter_setMInstanceMethodMap (const GALGAS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstanceMethodMap = inValue ;
  }

  public: inline void setter_setMClassMethodMap (const GALGAS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMethodMap = inValue ;
  }

  public: inline void setter_setMOptionalMethodMap (const GALGAS_optionalMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalMethodMap = inValue ;
  }

  public: inline void setter_setMEnumerationDescriptor (const GALGAS_enumerationDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationDescriptor = inValue ;
  }

  public: inline void setter_setMHandledOperatorFlags (const GALGAS_operators & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandledOperatorFlags = inValue ;
  }

  public: inline void setter_setMAddAssignOperatorArguments (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setMEnumConstantMap (const GALGAS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumConstantMap = inValue ;
  }

  public: inline void setter_setMEnumConstantList (const GALGAS_enumConstantList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumConstantList = inValue ;
  }

  public: inline void setter_setMMapSearchMethodList (const GALGAS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMapSearchMethodList = inValue ;
  }

  public: inline void setter_setMMapEntrySearchConstructorList (const GALGAS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMapEntrySearchConstructorList = inValue ;
  }

  public: inline void setter_setMGenerateHeaderInSeparateFile (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setMTypeForEnumeratedElement (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setDefaultConstructorName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_defaultConstructorName = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

  public: inline void setter_setMHeaderKind (const GALGAS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeDefinition (const GALGAS_lstring & in_mTypeName,
                                        const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_bool & in_mIsConcrete,
                                        const GALGAS_unifiedTypeMapEntry & in_mSuperType,
                                        const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                        const GALGAS_bool & in_mSupportCollectionValue,
                                        const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                        const GALGAS_propertyMap & in_mPropertyMap,
                                        const GALGAS_typedPropertyList & in_mCurrentTypedPropertyList,
                                        const GALGAS_constructorMap & in_mConstructorMap,
                                        const GALGAS_getterMap & in_mGetterMap,
                                        const GALGAS_setterMap & in_mSetterMap,
                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                        const GALGAS_optionalMethodMap & in_mOptionalMethodMap,
                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                        const GALGAS_operators & in_mHandledOperatorFlags,
                                        const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                        const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                        const GALGAS_enumConstantList & in_mEnumConstantList,
                                        const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                        const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                        const GALGAS_unifiedTypeMapEntry & in_mTypeForEnumeratedElement,
                                        const GALGAS_string & in_defaultConstructorName,
                                        const GALGAS_string & in_mHeaderFileName,
                                        const GALGAS_headerKind & in_mHeaderKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeDefinition extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeDefinition constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                     const class GALGAS_typeKindEnum & inOperand4,
                                                                     const class GALGAS_bool & inOperand5,
                                                                     const class GALGAS_typedPropertyList & inOperand6,
                                                                     const class GALGAS_propertyMap & inOperand7,
                                                                     const class GALGAS_typedPropertyList & inOperand8,
                                                                     const class GALGAS_constructorMap & inOperand9,
                                                                     const class GALGAS_getterMap & inOperand10,
                                                                     const class GALGAS_setterMap & inOperand11,
                                                                     const class GALGAS_instanceMethodMap & inOperand12,
                                                                     const class GALGAS_classMethodMap & inOperand13,
                                                                     const class GALGAS_optionalMethodMap & inOperand14,
                                                                     const class GALGAS_enumerationDescriptorList & inOperand15,
                                                                     const class GALGAS_operators & inOperand16,
                                                                     const class GALGAS_functionSignature & inOperand17,
                                                                     const class GALGAS_constantIndexMap & inOperand18,
                                                                     const class GALGAS_enumConstantList & inOperand19,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand20,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand21,
                                                                     const class GALGAS_bool & inOperand22,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand23,
                                                                     const class GALGAS_string & inOperand24,
                                                                     const class GALGAS_string & inOperand25,
                                                                     const class GALGAS_headerKind & inOperand26,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @typeDefinition enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeDefinition_solved : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeDefinition mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeDefinition_solved (const GALGAS_unifiedTypeDefinition inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeDefinition_solved (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter definition
  public: virtual class GALGAS_unifiedTypeDefinition getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GALGAS_typeDefinition mProperty_mDefinition ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GALGAS_typeDefinition & in_mDefinition
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

  public: GALGAS_unifiedTypeMapElementClass_2D_weak & operator = (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapElementClass_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @unifiedTypeMapEntry enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_unifiedTypeMapEntry_element : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapElementClass_2D_weak mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_unifiedTypeMapEntry_element (const GALGAS_unifiedTypeMapElementClass_2D_weak inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_unifiedTypeMapEntry_element (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter isTrueExpression
  public: virtual class GALGAS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionExpressionForGeneration (const class cPtr_templateInstructionExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionExpressionForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_bool & ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak (const class GALGAS_templateInstructionExpressionForGeneration & inSource) ;

  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionExpressionForGeneration bang_templateInstructionExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_templateInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionListForGeneration constructor_listWithValue (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionListForGeneration ;
 
} ; // End of GALGAS_templateInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_templateInstructionForGeneration mProperty_mInstruction ;
  public: inline GALGAS_templateInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_templateInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListForGeneration_2D_element constructor_new (const class GALGAS_templateInstructionForGeneration & inOperand0,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateBlockInstructionForGeneration (const class cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBlockInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateBlockInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_bool & ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

  public: GALGAS_templateBlockInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateBlockInstructionForGeneration bang_templateBlockInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;

