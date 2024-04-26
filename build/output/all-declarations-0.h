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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS__32_lstringlist init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS__32_lstringlist class_func_listWithValue (const class GALGAS_lstring & inOperand0,
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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS__32_lstringlist_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GALGAS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & in_mValue_30_,
                                             const GALGAS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS__32_lstringlist_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

#include "Lexique.h"

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

class Lexique_galgasScanner_33_ : public Lexique {
//--- Constructors
  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasScanner_33_ (void) { }
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier /* 1 */ ,
   kToken_double_2E_xxx /* 2 */ ,
   kToken_literalInt /* 3 */ ,
   kToken__2E_ /* 4 */ ,
   kToken__2E__2E__2E_ /* 5 */ ,
   kToken__2E__2E__3C_ /* 6 */ ,
   kToken__40_type /* 7 */ ,
   kToken__27_char_27_ /* 8 */ ,
   kToken__24_terminal_24_ /* 9 */ ,
   kToken_comment /* 10 */ ,
   kToken_commentMark /* 11 */ ,
   kToken__3F_selector_3A_ /* 12 */ ,
   kToken__3F_ /* 13 */ ,
   kToken__3F__21_selector_3A_ /* 14 */ ,
   kToken__3F__21_ /* 15 */ ,
   kToken__21_selector_3A_ /* 16 */ ,
   kToken__21_ /* 17 */ ,
   kToken__21__3F_selector_3A_ /* 18 */ ,
   kToken__21__3F_ /* 19 */ ,
   kToken__3C_ /* 20 */ ,
   kToken__3C__3D_ /* 21 */ ,
   kToken__3C__3C_ /* 22 */ ,
   kToken__3C_non_5F_terminal_3E_ /* 23 */ ,
   kToken__22_string_22_ /* 24 */ ,
   kToken_abstract /* 25 */ ,
   kToken_after /* 26 */ ,
   kToken_as /* 27 */ ,
   kToken_bang /* 28 */ ,
   kToken_before /* 29 */ ,
   kToken_between /* 30 */ ,
   kToken_block /* 31 */ ,
   kToken_boolset /* 32 */ ,
   kToken_cast /* 33 */ ,
   kToken_case /* 34 */ ,
   kToken_class /* 35 */ ,
   kToken_default /* 36 */ ,
   kToken_dict /* 37 */ ,
   kToken_do /* 38 */ ,
   kToken_drop /* 39 */ ,
   kToken_else /* 40 */ ,
   kToken_elsif /* 41 */ ,
   kToken_end /* 42 */ ,
   kToken_enum /* 43 */ ,
   kToken_error /* 44 */ ,
   kToken_extension /* 45 */ ,
   kToken_extern /* 46 */ ,
   kToken_false /* 47 */ ,
   kToken_fileprivate /* 48 */ ,
   kToken_filewrapper /* 49 */ ,
   kToken_for /* 50 */ ,
   kToken_final /* 51 */ ,
   kToken_fixit /* 52 */ ,
   kToken_func /* 53 */ ,
   kToken_getter /* 54 */ ,
   kToken_grammar /* 55 */ ,
   kToken_graph /* 56 */ ,
   kToken_gui /* 57 */ ,
   kToken_if /* 58 */ ,
   kToken_in /* 59 */ ,
   kToken_indexing /* 60 */ ,
   kToken_init /* 61 */ ,
   kToken_insert /* 62 */ ,
   kToken_is /* 63 */ ,
   kToken_label /* 64 */ ,
   kToken_let /* 65 */ ,
   kToken_lexique /* 66 */ ,
   kToken_list /* 67 */ ,
   kToken_log /* 68 */ ,
   kToken_loop /* 69 */ ,
   kToken_map /* 70 */ ,
   kToken_message /* 71 */ ,
   kToken_method /* 72 */ ,
   kToken_mod /* 73 */ ,
   kToken_mutating /* 74 */ ,
   kToken_nil /* 75 */ ,
   kToken_not /* 76 */ ,
   kToken_on /* 77 */ ,
   kToken_operator /* 78 */ ,
   kToken_option /* 79 */ ,
   kToken_or /* 80 */ ,
   kToken_override /* 81 */ ,
   kToken_parse /* 82 */ ,
   kToken_public /* 83 */ ,
   kToken_protected /* 84 */ ,
   kToken_private /* 85 */ ,
   kToken_proc /* 86 */ ,
   kToken_project /* 87 */ ,
   kToken_refclass /* 88 */ ,
   kToken_remove /* 89 */ ,
   kToken_repeat /* 90 */ ,
   kToken_replace /* 91 */ ,
   kToken_rewind /* 92 */ ,
   kToken_rule /* 93 */ ,
   kToken_search /* 94 */ ,
   kToken_select /* 95 */ ,
   kToken_self /* 96 */ ,
   kToken_send /* 97 */ ,
   kToken_setter /* 98 */ ,
   kToken_sortedlist /* 99 */ ,
   kToken_spoil /* 100 */ ,
   kToken_struct /* 101 */ ,
   kToken_style /* 102 */ ,
   kToken_super /* 103 */ ,
   kToken_switch /* 104 */ ,
   kToken_syntax /* 105 */ ,
   kToken_tag /* 106 */ ,
   kToken_template /* 107 */ ,
   kToken_then /* 108 */ ,
   kToken_true /* 109 */ ,
   kToken_typealias /* 110 */ ,
   kToken_unused /* 111 */ ,
   kToken_valueclass /* 112 */ ,
   kToken_var /* 113 */ ,
   kToken_warning /* 114 */ ,
   kToken_while /* 115 */ ,
   kToken_with /* 116 */ ,
   kToken__25_app_2D_link /* 117 */ ,
   kToken__25_app_2D_source /* 118 */ ,
   kToken__25_applicationBundleBase /* 119 */ ,
   kToken__25_clonable /* 120 */ ,
   kToken__25_codeblocks_2D_linux_33__32_ /* 121 */ ,
   kToken__25_codeblocks_2D_linux_36__34_ /* 122 */ ,
   kToken__25_codeblocks_2D_windows /* 123 */ ,
   kToken__25_comparable /* 124 */ ,
   kToken__25_equatable /* 125 */ ,
   kToken__25_from /* 126 */ ,
   kToken__25_generatedInSeparateFile /* 127 */ ,
   kToken__25_initArgLabel /* 128 */ ,
   kToken__25_libpmAtPath /* 129 */ ,
   kToken__25_MacOS /* 130 */ ,
   kToken__25_MacOSDeployment /* 131 */ ,
   kToken__25_macCodeSign /* 132 */ ,
   kToken__25_makefile_2D_macosx /* 133 */ ,
   kToken__25_makefile_2D_unix /* 134 */ ,
   kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx /* 135 */ ,
   kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx /* 136 */ ,
   kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx /* 137 */ ,
   kToken__25_nonAtomicSelection /* 138 */ ,
   kToken__25_once /* 139 */ ,
   kToken__25_preserved /* 140 */ ,
   kToken__25_quietOutputByDefault /* 141 */ ,
   kToken__25_templateEndMark /* 142 */ ,
   kToken__25_tool_2D_source /* 143 */ ,
   kToken__25_translate /* 144 */ ,
   kToken__25_usefull /* 145 */ ,
   kToken__2A_ /* 146 */ ,
   kToken__2C_ /* 147 */ ,
   kToken__2B_ /* 148 */ ,
   kToken__26__2B_ /* 149 */ ,
   kToken__26__2D_ /* 150 */ ,
   kToken__26__2A_ /* 151 */ ,
   kToken__26__2F_ /* 152 */ ,
   kToken__3E_ /* 153 */ ,
   kToken__3B_ /* 154 */ ,
   kToken__3A_ /* 155 */ ,
   kToken__3A__3E_ /* 156 */ ,
   kToken__2D_ /* 157 */ ,
   kToken__28_ /* 158 */ ,
   kToken__29_ /* 159 */ ,
   kToken__2D__3E_ /* 160 */ ,
   kToken__3D__3D_ /* 161 */ ,
   kToken__3D_ /* 162 */ ,
   kToken__26__26_ /* 163 */ ,
   kToken__5B_ /* 164 */ ,
   kToken__5D_ /* 165 */ ,
   kToken__2B__3D_ /* 166 */ ,
   kToken__2D__3D_ /* 167 */ ,
   kToken__2A__3D_ /* 168 */ ,
   kToken__2F__3D_ /* 169 */ ,
   kToken__26__3D_ /* 170 */ ,
   kToken__7C__3D_ /* 171 */ ,
   kToken__2F_ /* 172 */ ,
   kToken__21__3D_ /* 173 */ ,
   kToken__3E__3D_ /* 174 */ ,
   kToken__26_ /* 175 */ ,
   kToken__7B_ /* 176 */ ,
   kToken__7D_ /* 177 */ ,
   kToken__60_ /* 178 */ ,
   kToken__7C__7C_ /* 179 */ ,
   kToken__7C_ /* 180 */ ,
   kToken__5E_ /* 181 */ ,
   kToken__3E__3E_ /* 182 */ ,
   kToken__7E_ /* 183 */ ,
   kToken__2D__2D_ /* 184 */ ,
   kToken__2B__2B_ /* 185 */ ,
   kToken__26__2D__2D_ /* 186 */ ,
   kToken__26__2B__2B_ /* 187 */ ,
   kToken__3D__3D__3D_ /* 188 */ ,
   kToken__21__3D__3D_ /* 189 */ ,
   kToken__3F__5E_ /* 190 */ ,
   kToken__21__5E_ /* 191 */ ,
   kToken__A7__5B_ /* 192 */ } ;

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


//--- indexing keys
  public: enum {
    kIndexing_classDefinition,
    kIndexing_enumDefinition,
    kIndexing_structDefinition,
    kIndexing_listDefinition,
    kIndexing_sortedListDefinition,
    kIndexing_mapDefinition,
    kIndexing_dictionaryDefinition,
    kIndexing_externTypeDefinition,
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
  public: virtual int32_t terminalVocabularyCount (void) const override { return 192 ; }

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

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionListAST class_func_listWithValue (const class GALGAS_templateInstructionAST & inOperand0
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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionListAST ;
 
} ; // End of GALGAS_templateInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListAST (const GALGAS_templateInstructionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionListAST_2D_element init_21_ (const class GALGAS_templateInstructionAST & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionListAST_2D_element class_func_new (const class GALGAS_templateInstructionAST & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateExpressionAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateExpressionAST_init (Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_templateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateExpressionListAST init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionListAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateExpressionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateExpressionListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateExpressionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateExpressionListAST ;
 
} ; // End of GALGAS_templateExpressionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateExpressionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateExpressionListAST (const GALGAS_templateExpressionListAST & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateExpressionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateExpressionListAST_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                       const GALGAS_templateExpressionAST & in_mExpression,
                                                       const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateExpressionListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_templateExpressionAST & inOperand1,
                                                                               const class GALGAS_location & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExpressionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateExpressionListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateExpressionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateClassFunctionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateClassFunctionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateClassFunctionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateClassFunctionAST (const class cPtr_templateClassFunctionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mClassFunctionName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateClassFunctionAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_templateExpressionListAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateClassFunctionAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateClassFunctionAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_templateExpressionListAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateClassFunctionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateClassFunctionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateClassFunctionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateClassFunctionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateClassFunctionAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_lstring & inOperand1,
                                                          const class GALGAS_templateExpressionListAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mClassFunctionName ;
  public: GALGAS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateClassFunctionAST (const GALGAS_lstring & in_mTypeName,
                                         const GALGAS_lstring & in_mClassFunctionName,
                                         const GALGAS_templateExpressionListAST & in_mExpressionList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateClassFunctionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateClassFunctionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateClassFunctionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateClassFunctionAST_2D_weak (const class GALGAS_templateClassFunctionAST & inSource) ;

  public: GALGAS_templateClassFunctionAST_2D_weak & operator = (const class GALGAS_templateClassFunctionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateClassFunctionAST bang_templateClassFunctionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateClassFunctionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateClassFunctionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateClassFunctionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateClassFunctionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassFunctionAST_2D_weak ;

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

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFileWrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mTemplateName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateFileWrapperTemplateCallAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_templateExpressionListAST & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFileWrapperTemplateCallAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_templateExpressionListAST & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateFileWrapperTemplateCallAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_templateExpressionListAST & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFileWrapperName ;
  public: GALGAS_lstring mProperty_mTemplateName ;
  public: GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFileWrapperTemplateCallAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mExpressionValue (void) const ;

  public: class GALGAS_lstring readProperty_mTemplateName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateExtensionTemplateCallAST init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_templateExpressionListAST & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateExtensionTemplateCallAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_templateExpressionListAST & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateExtensionTemplateCallAST_init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_templateExpressionListAST & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpressionValue ;
  public: GALGAS_lstring mProperty_mTemplateName ;
  public: GALGAS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateExtensionTemplateCallAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateAndOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_templateExpressionAST & inOperand1,
                                                                  const class GALGAS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAndOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateAndOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateAndOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateAndOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAndOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAndOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateAndOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateAndOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateOrOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_templateExpressionAST & inOperand1,
                                                                 const class GALGAS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOrOperationAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateOrOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                     const class GALGAS_templateExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateOrOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateOrOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                        const class GALGAS_templateExpressionAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateOrOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOrOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateOrOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateOrOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateXorOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_templateExpressionAST & inOperand1,
                                                                  const class GALGAS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateXorOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateXorOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateXorOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateXorOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateXorOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateXorOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateXorOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateXorOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateTrueBoolAST init_21_ (const class GALGAS_location & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTrueBoolAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateTrueBoolAST class_func_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateTrueBoolAST_init_21_ (const class GALGAS_location & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateTrueBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTrueBoolAST (const GALGAS_location & in_mLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTrueBoolAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateTrueBoolAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateTrueBoolAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateFalseBoolAST init_21_ (const class GALGAS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFalseBoolAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFalseBoolAST class_func_new (const class GALGAS_location & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateFalseBoolAST_init_21_ (const class GALGAS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateFalseBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFalseBoolAST (const GALGAS_location & in_mLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFalseBoolAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFalseBoolAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFalseBoolAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_stringlist readProperty_mLiteralStringList (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLiteralStringExpressionAST init_21__21_ (const class GALGAS_stringlist & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralStringExpressionAST class_func_new (const class GALGAS_stringlist & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLiteralStringExpressionAST_init_21__21_ (const class GALGAS_stringlist & inOperand0,
                                                                const class GALGAS_location & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_stringlist mProperty_mLiteralStringList ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralStringExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_lbigint readProperty_mLiteralInt (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLiteralUIntExpressionAST init_21_ (const class GALGAS_lbigint & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralUIntExpressionAST class_func_new (const class GALGAS_lbigint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLiteralUIntExpressionAST_init_21_ (const class GALGAS_lbigint & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbigint mProperty_mLiteralInt ;


//--- Default constructor
  public: cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralUIntExpressionAST (const GALGAS_lbigint & in_mLiteralInt
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralUIntExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_lchar readProperty_mLiteralChar (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLiteralCharExpressionAST init_21_ (const class GALGAS_lchar & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralCharExpressionAST class_func_new (const class GALGAS_lchar & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLiteralCharExpressionAST_init_21_ (const class GALGAS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mLiteralChar ;


//--- Default constructor
  public: cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralCharExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_ldouble readProperty_mLiteralDouble (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLiteralDoubleExpressionAST init_21_ (const class GALGAS_ldouble & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralDoubleExpressionAST class_func_new (const class GALGAS_ldouble & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLiteralDoubleExpressionAST_init_21_ (const class GALGAS_ldouble & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ldouble mProperty_mLiteralDouble ;


//--- Default constructor
  public: cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLiteralDoubleExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_lstring readProperty_mStructFieldName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_structFieldAccessTemplateExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_templateExpressionAST & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structFieldAccessTemplateExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void structFieldAccessTemplateExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_lstring mProperty_mStructFieldName ;


//--- Default constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateNotOperatorAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_templateExpressionAST & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNotOperatorAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateNotOperatorAST class_func_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateNotOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateNotOperatorAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateNotOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNotOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateNotOperatorAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateNotOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLogicalNegateAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_templateExpressionAST & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLogicalNegateAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLogicalNegateAST class_func_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLogicalNegateAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLogicalNegateAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateLogicalNegateAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLogicalNegateAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLogicalNegateAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLogicalNegateAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionName (void) const ;

  public: class GALGAS_lstring readProperty_mGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateOptionAccessAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateOptionAccessAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateOptionAccessAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                         const class GALGAS_lstring & inOperand1,
                                                         const class GALGAS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mOptionComponentName ;
  public: GALGAS_lstring mProperty_mOptionName ;
  public: GALGAS_lstring mProperty_mGetterName ;


//--- Default constructor
  public: cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateOptionAccessAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateOptionAccessAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum dynamicTypeComparisonKind
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_dynamicTypeComparisonKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_inherited,
    enum_strictlyInherited
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicTypeComparisonKind extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynamicTypeComparisonKind class_func_equal (LOCATION_ARGS) ;

  public: static class GALGAS_dynamicTypeComparisonKind class_func_inherited (LOCATION_ARGS) ;

  public: static class GALGAS_dynamicTypeComparisonKind class_func_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInherited (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateTestDynamicClassAST init_21__21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateTestDynamicClassAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateTestDynamicClassAST_init_21__21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                 const class GALGAS_location & inOperand1,
                                                                 const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateTestDynamicClassAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateFunctionCallAST init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_templateExpressionListAST & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFunctionCallAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_templateExpressionListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateFunctionCallAST_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_templateExpressionListAST & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateFunctionCallAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateVarInExpressionAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateVarInExpressionAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateVarInExpressionAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateVarInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateAddOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_templateExpressionAST & inOperand1,
                                                                  const class GALGAS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAddOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateAddOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateAddOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateAddOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAddOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAddOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateAddOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateAddOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateSubOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_templateExpressionAST & inOperand1,
                                                                  const class GALGAS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSubOperationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateSubOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateSubOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateSubOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSubOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSubOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateSubOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateSubOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateMultiplyOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateMultiplyOperationAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateMultiplyOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_templateExpressionAST & inOperand1,
                                                                           const class GALGAS_templateExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateMultiplyOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_templateExpressionAST & inOperand1,
                                                              const class GALGAS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateMultiplyOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateMultiplyOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateMultiplyOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateDivideOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                     const class GALGAS_templateExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDivideOperationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateDivideOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateDivideOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateDivideOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                            const class GALGAS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateDivideOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDivideOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateDivideOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateDivideOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateModuloOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                     const class GALGAS_templateExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateModuloOperationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateModuloOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateModuloOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateModuloOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                            const class GALGAS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateModuloOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateModuloOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateModuloOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateModuloOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateUnaryMinusOperationAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_templateExpressionAST & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateUnaryMinusOperationAST extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateUnaryMinusOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_templateExpressionAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateUnaryMinusOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateUnaryMinusOperationAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateUnaryMinusOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateUnaryMinusOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateUnaryMinusOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateUnaryMinusOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateEqualTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_templateExpressionAST & inOperand1,
                                                               const class GALGAS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateEqualTestAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateEqualTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                   const class GALGAS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateEqualTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                      const class GALGAS_templateExpressionAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateEqualTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateNonEqualTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_templateExpressionAST & inOperand1,
                                                                  const class GALGAS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNonEqualTestAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateNonEqualTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_templateExpressionAST & inOperand1,
                                                                      const class GALGAS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateNonEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateNonEqualTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateNonEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateNonEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateNonEqualTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateNonEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateStrictInfTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                   const class GALGAS_templateExpressionAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictInfTestAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateStrictInfTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateStrictInfTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateStrictInfTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                          const class GALGAS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictInfTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictInfTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateStrictInfTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateStrictInfTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInfOrEqualTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                    const class GALGAS_templateExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInfOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInfOrEqualTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInfOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInfOrEqualTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_templateExpressionAST & inOperand1,
                                                           const class GALGAS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateInfOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInfOrEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInfOrEqualTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInfOrEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateStrictSupTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                   const class GALGAS_templateExpressionAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictSupTestAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateStrictSupTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateStrictSupTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateStrictSupTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                          const class GALGAS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictSupTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateStrictSupTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateStrictSupTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateStrictSupTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateSupOrEqualTestAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                    const class GALGAS_templateExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSupOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateSupOrEqualTestAST class_func_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateSupOrEqualTestAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_templateExpressionAST & inOperand1,
                                                           const class GALGAS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSupOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateSupOrEqualTestAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateSupOrEqualTestAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLeftShiftOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_templateExpressionAST & inOperand1,
                                                                        const class GALGAS_templateExpressionAST & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLeftShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLeftShiftOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                                            const class GALGAS_templateExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLeftShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateLeftShiftOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_templateExpressionAST & inOperand1,
                                                               const class GALGAS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateLeftShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLeftShiftOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLeftShiftOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLeftShiftOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateRightShiftOperationAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_templateExpressionAST & inOperand1,
                                                                         const class GALGAS_templateExpressionAST & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateRightShiftOperationAST extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateRightShiftOperationAST class_func_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_templateExpressionAST & inOperand1,
                                                                             const class GALGAS_templateExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateRightShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateRightShiftOperationAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_templateExpressionAST & inOperand1,
                                                                const class GALGAS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_templateExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateRightShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateRightShiftOperationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateRightShiftOperationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateRightShiftOperationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionStringAST init_21_ (const class GALGAS_string & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionStringAST class_func_new (const class GALGAS_string & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionStringAST_init_21_ (const class GALGAS_string & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionStringAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionStringAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionExpressionAST init_21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionExpressionAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionExpressionAST_init_21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateBlockInstructionAST init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_templateInstructionListAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateBlockInstructionAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_templateInstructionListAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateBlockInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateBlockInstructionAST_init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                             const class GALGAS_location & inOperand1,
                                                             const class GALGAS_templateInstructionListAST & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListAST mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateBlockInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateBlockInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionGetColumnLocationAST init (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGetColumnLocationAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionGetColumnLocationAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionGetColumnLocationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGetColumnLocationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionGotoColumnLocationAST init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationAST extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGotoColumnLocationAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionGotoColumnLocationAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionGotoColumnLocationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGotoColumnLocationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfBranchListAST init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfBranchListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionIfBranchListAST class_func_listWithValue (const class GALGAS_templateExpressionAST & inOperand0,
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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionIfBranchListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionIfBranchListAST ;
 
} ; // End of GALGAS_templateInstructionIfBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionIfBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & in_mExpression,
                                                                const GALGAS_templateInstructionListAST & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfBranchListAST_2D_element init_21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                    const class GALGAS_templateInstructionListAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfBranchListAST_2D_element class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand1,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_templateInstructionIfBranchListAST readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfAST init_21__21_ (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                               const class GALGAS_templateInstructionListAST & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfAST class_func_new (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                                       const class GALGAS_templateInstructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionIfAST_init_21__21_ (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                      const class GALGAS_templateInstructionListAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateInstructionIfBranchListAST mProperty_mTemplateInstructionIfBranchList ;
  public: GALGAS_templateInstructionListAST mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionIfAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticExpressionForGeneration init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_null,
    enum_element
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_element (class GALGAS_unifiedTypeMapElementClass_2D_weak & out_weakElement) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntry extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntry class_func_element (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMapEntry class_func_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractElement (class GALGAS_unifiedTypeMapElementClass_2D_weak & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry_2D_element_3F_ getter_getElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticExpressionForGeneration_init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                             const class GALGAS_location & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension getter isTrueExpression
  public: virtual class GALGAS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_semanticExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
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

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionExpressionForGeneration init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionExpressionForGeneration class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Initializers
  public: void templateInstructionExpressionForGeneration_init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
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

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ;

