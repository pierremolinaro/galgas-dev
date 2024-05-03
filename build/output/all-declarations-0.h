#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS__32_lstringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GGS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
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
 
} ; // End of GGS__32_lstringlist_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

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
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

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
   kToken_weak /* 115 */ ,
   kToken_while /* 116 */ ,
   kToken_with /* 117 */ ,
   kToken__25_app_2D_link /* 118 */ ,
   kToken__25_app_2D_source /* 119 */ ,
   kToken__25_applicationBundleBase /* 120 */ ,
   kToken__25_clonable /* 121 */ ,
   kToken__25_codeblocks_2D_linux_33__32_ /* 122 */ ,
   kToken__25_codeblocks_2D_linux_36__34_ /* 123 */ ,
   kToken__25_codeblocks_2D_windows /* 124 */ ,
   kToken__25_comparable /* 125 */ ,
   kToken__25_equatable /* 126 */ ,
   kToken__25_from /* 127 */ ,
   kToken__25_generatedInSeparateFile /* 128 */ ,
   kToken__25_initArgLabel /* 129 */ ,
   kToken__25_libpmAtPath /* 130 */ ,
   kToken__25_MacOS /* 131 */ ,
   kToken__25_MacOSDeployment /* 132 */ ,
   kToken__25_macCodeSign /* 133 */ ,
   kToken__25_makefile_2D_macosx /* 134 */ ,
   kToken__25_makefile_2D_unix /* 135 */ ,
   kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx /* 136 */ ,
   kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx /* 137 */ ,
   kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx /* 138 */ ,
   kToken__25_nonAtomicSelection /* 139 */ ,
   kToken__25_once /* 140 */ ,
   kToken__25_preserved /* 141 */ ,
   kToken__25_quietOutputByDefault /* 142 */ ,
   kToken__25_templateEndMark /* 143 */ ,
   kToken__25_tool_2D_source /* 144 */ ,
   kToken__25_translate /* 145 */ ,
   kToken__25_usefull /* 146 */ ,
   kToken__2A_ /* 147 */ ,
   kToken__2C_ /* 148 */ ,
   kToken__2B_ /* 149 */ ,
   kToken__26__2B_ /* 150 */ ,
   kToken__26__2D_ /* 151 */ ,
   kToken__26__2A_ /* 152 */ ,
   kToken__26__2F_ /* 153 */ ,
   kToken__3E_ /* 154 */ ,
   kToken__3B_ /* 155 */ ,
   kToken__3A_ /* 156 */ ,
   kToken__3A__3E_ /* 157 */ ,
   kToken__2D_ /* 158 */ ,
   kToken__28_ /* 159 */ ,
   kToken__29_ /* 160 */ ,
   kToken__2D__3E_ /* 161 */ ,
   kToken__3D__3D_ /* 162 */ ,
   kToken__3D_ /* 163 */ ,
   kToken__26__26_ /* 164 */ ,
   kToken__5B_ /* 165 */ ,
   kToken__5D_ /* 166 */ ,
   kToken__2B__3D_ /* 167 */ ,
   kToken__2D__3D_ /* 168 */ ,
   kToken__2A__3D_ /* 169 */ ,
   kToken__2F__3D_ /* 170 */ ,
   kToken__26__3D_ /* 171 */ ,
   kToken__7C__3D_ /* 172 */ ,
   kToken__5E__3D_ /* 173 */ ,
   kToken__2F_ /* 174 */ ,
   kToken__21__3D_ /* 175 */ ,
   kToken__3E__3D_ /* 176 */ ,
   kToken__26_ /* 177 */ ,
   kToken__7B_ /* 178 */ ,
   kToken__7D_ /* 179 */ ,
   kToken__60_ /* 180 */ ,
   kToken__7C__7C_ /* 181 */ ,
   kToken__7C_ /* 182 */ ,
   kToken__5E_ /* 183 */ ,
   kToken__3E__3E_ /* 184 */ ,
   kToken__7E_ /* 185 */ ,
   kToken__2D__2D_ /* 186 */ ,
   kToken__2B__2B_ /* 187 */ ,
   kToken__26__2D__2D_ /* 188 */ ,
   kToken__26__2B__2B_ /* 189 */ ,
   kToken__3D__3D__3D_ /* 190 */ ,
   kToken__21__3D__3D_ /* 191 */ ,
   kToken__3F__5E_ /* 192 */ ,
   kToken__21__5E_ /* 193 */ ,
   kToken__A7__5B_ /* 194 */ } ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public: GGS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public: GGS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


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
  public: virtual int32_t terminalVocabularyCount (void) const override { return 194 ; }

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

class GGS_templateInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionAST (const class cPtr_templateInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionAST class


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
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
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
// Phase 1: @templateInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionAST_2E_weak (const class GGS_templateInstructionAST & inSource) ;

  public: GGS_templateInstructionAST_2E_weak & operator = (const class GGS_templateInstructionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionAST_2E_weak init_nil (void) {
    GGS_templateInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionAST bang_templateInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionAST unwrappedValue (void) const {
    GGS_templateInstructionAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionAST * p = (cPtr_templateInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_templateInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_templateInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_templateInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_templateInstructionListAST class_func_listWithValue (const class GGS_templateInstructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_templateInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_templateInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateInstructionListAST add_operation (const GGS_templateInstructionListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_templateInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_templateInstructionAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_templateInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_templateInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_templateInstructionAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_templateInstructionAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_templateInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_templateInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_templateInstructionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionListAST ;
 
} ; // End of GGS_templateInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListAST (const GGS_templateInstructionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_templateInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateInstructionAST mProperty_mInstruction ;
  public: inline GGS_templateInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_templateInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_templateInstructionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListAST_2E_element init_21_ (const class GGS_templateInstructionAST & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListAST_2E_element class_func_new (const class GGS_templateInstructionAST & inOperand0,
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
 
} ; // End of GGS_templateInstructionListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateExpressionAST (const class cPtr_templateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateExpressionAST class


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
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
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
// Phase 1: @templateExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateExpressionAST_2E_weak (const class GGS_templateExpressionAST & inSource) ;

  public: GGS_templateExpressionAST_2E_weak & operator = (const class GGS_templateExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateExpressionAST_2E_weak init_nil (void) {
    GGS_templateExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateExpressionAST bang_templateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateExpressionAST unwrappedValue (void) const {
    GGS_templateExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateExpressionAST * p = (cPtr_templateExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_templateExpressionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_templateExpressionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mActualSelector,
                                                 const class GGS_templateExpressionAST & in_mExpression,
                                                 const class GGS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExpressionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_templateExpressionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_templateExpressionAST & inOperand1,
                                                                               const class GGS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_templateExpressionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_templateExpressionAST & inOperand1,
                                                     const class GGS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateExpressionListAST add_operation (const GGS_templateExpressionListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_templateExpressionAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_templateExpressionAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_templateExpressionAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_templateExpressionAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_templateExpressionAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GGS_location constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_templateExpressionAST constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_templateExpressionAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_templateExpressionAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mActualSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfExpressionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateExpressionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateExpressionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateExpressionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_templateExpressionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateExpressionListAST ;
 
} ; // End of GGS_templateExpressionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateExpressionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateExpressionListAST (const GGS_templateExpressionListAST & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateExpressionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExpressionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: inline GGS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: inline GGS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mEndOfExpressionLocation ;
  public: inline GGS_location readProperty_mEndOfExpressionLocation (void) const {
    return mProperty_mEndOfExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateExpressionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_templateExpressionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateExpressionListAST_2E_element (const GGS_lstring & in_mActualSelector,
                                                    const GGS_templateExpressionAST & in_mExpression,
                                                    const GGS_location & in_mEndOfExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_templateExpressionAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExpressionListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                                const class GGS_location & inOperand2,
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
 
} ; // End of GGS_templateExpressionListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateClassFunctionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateClassFunctionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateClassFunctionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateClassFunctionAST (const class cPtr_templateClassFunctionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mClassFunctionName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateClassFunctionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_templateExpressionListAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateClassFunctionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateClassFunctionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_templateExpressionListAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateClassFunctionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateClassFunctionAST class


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
  public: void templateClassFunctionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          const class GGS_templateExpressionListAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mClassFunctionName ;
  public: GGS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                         const GGS_lstring & in_mClassFunctionName,
                                         const GGS_templateExpressionListAST & in_mExpressionList
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
// Phase 1: @templateClassFunctionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateClassFunctionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateClassFunctionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateClassFunctionAST_2E_weak (const class GGS_templateClassFunctionAST & inSource) ;

  public: GGS_templateClassFunctionAST_2E_weak & operator = (const class GGS_templateClassFunctionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateClassFunctionAST_2E_weak init_nil (void) {
    GGS_templateClassFunctionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateClassFunctionAST bang_templateClassFunctionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateClassFunctionAST unwrappedValue (void) const {
    GGS_templateClassFunctionAST result ;
    if (isValid ()) {
      const cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateClassFunctionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateClassFunctionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateClassFunctionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateClassFunctionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateClassFunctionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassFunctionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFileWrapperTemplateCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFileWrapperTemplateCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFileWrapperTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFileWrapperTemplateCallAST (const class cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFileWrapperName (void) const ;

  public: class GGS_lstring readProperty_mTemplateName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFileWrapperTemplateCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_templateExpressionListAST & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFileWrapperTemplateCallAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFileWrapperTemplateCallAST class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_templateExpressionListAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFileWrapperTemplateCallAST class


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
  public: void templateFileWrapperTemplateCallAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_templateExpressionListAST & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFileWrapperName ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList
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
// Phase 1: @templateFileWrapperTemplateCallAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFileWrapperTemplateCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFileWrapperTemplateCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFileWrapperTemplateCallAST_2E_weak (const class GGS_templateFileWrapperTemplateCallAST & inSource) ;

  public: GGS_templateFileWrapperTemplateCallAST_2E_weak & operator = (const class GGS_templateFileWrapperTemplateCallAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateFileWrapperTemplateCallAST_2E_weak init_nil (void) {
    GGS_templateFileWrapperTemplateCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFileWrapperTemplateCallAST bang_templateFileWrapperTemplateCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateFileWrapperTemplateCallAST unwrappedValue (void) const {
    GGS_templateFileWrapperTemplateCallAST result ;
    if (isValid ()) {
      const cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateFileWrapperTemplateCallAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFileWrapperTemplateCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFileWrapperTemplateCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFileWrapperTemplateCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFileWrapperTemplateCallAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExtensionTemplateCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExtensionTemplateCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateExtensionTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateExtensionTemplateCallAST (const class cPtr_templateExtensionTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpressionValue (void) const ;

  public: class GGS_lstring readProperty_mTemplateName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExtensionTemplateCallAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_templateExpressionListAST & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExtensionTemplateCallAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExtensionTemplateCallAST class_func_new (const class GGS_templateExpressionAST & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_templateExpressionListAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateExtensionTemplateCallAST class


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
  public: void templateExtensionTemplateCallAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_templateExpressionListAST & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpressionValue ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                 const GGS_lstring & in_mTemplateName,
                                                 const GGS_templateExpressionListAST & in_mOutExpressionList
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
// Phase 1: @templateExtensionTemplateCallAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateExtensionTemplateCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateExtensionTemplateCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateExtensionTemplateCallAST_2E_weak (const class GGS_templateExtensionTemplateCallAST & inSource) ;

  public: GGS_templateExtensionTemplateCallAST_2E_weak & operator = (const class GGS_templateExtensionTemplateCallAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateExtensionTemplateCallAST_2E_weak init_nil (void) {
    GGS_templateExtensionTemplateCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateExtensionTemplateCallAST bang_templateExtensionTemplateCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateExtensionTemplateCallAST unwrappedValue (void) const {
    GGS_templateExtensionTemplateCallAST result ;
    if (isValid ()) {
      const cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateExtensionTemplateCallAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExtensionTemplateCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExtensionTemplateCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExtensionTemplateCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateExtensionTemplateCallAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAndOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateAndOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateAndOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateAndOperationAST (const class cPtr_templateAndOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAndOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAndOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAndOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_templateExpressionAST & inOperand1,
                                                                   const class GGS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAndOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateAndOperationAST class


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
  public: void templateAndOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAndOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateAndOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateAndOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateAndOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateAndOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateAndOperationAST_2E_weak (const class GGS_templateAndOperationAST & inSource) ;

  public: GGS_templateAndOperationAST_2E_weak & operator = (const class GGS_templateAndOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateAndOperationAST_2E_weak init_nil (void) {
    GGS_templateAndOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateAndOperationAST bang_templateAndOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateAndOperationAST unwrappedValue (void) const {
    GGS_templateAndOperationAST result ;
    if (isValid ()) {
      const cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateAndOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAndOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAndOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAndOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateAndOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAndOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOrOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateOrOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateOrOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateOrOperationAST (const class cPtr_templateOrOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateOrOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_templateExpressionAST & inOperand1,
                                                              const class GGS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOrOperationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOrOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOrOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateOrOperationAST class


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
  public: void templateOrOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_templateExpressionAST & inOperand1,
                                                        const class GGS_templateExpressionAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateOrOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateOrOperationAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mLeftExpression,
                                       const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateOrOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateOrOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateOrOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateOrOperationAST_2E_weak (const class GGS_templateOrOperationAST & inSource) ;

  public: GGS_templateOrOperationAST_2E_weak & operator = (const class GGS_templateOrOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateOrOperationAST_2E_weak init_nil (void) {
    GGS_templateOrOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateOrOperationAST bang_templateOrOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateOrOperationAST unwrappedValue (void) const {
    GGS_templateOrOperationAST result ;
    if (isValid ()) {
      const cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateOrOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOrOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOrOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOrOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateOrOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOrOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateXorOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateXorOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateXorOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateXorOperationAST (const class cPtr_templateXorOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateXorOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateXorOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateXorOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_templateExpressionAST & inOperand1,
                                                                   const class GGS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateXorOperationAST class


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
  public: void templateXorOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateXorOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateXorOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateXorOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateXorOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateXorOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateXorOperationAST_2E_weak (const class GGS_templateXorOperationAST & inSource) ;

  public: GGS_templateXorOperationAST_2E_weak & operator = (const class GGS_templateXorOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateXorOperationAST_2E_weak init_nil (void) {
    GGS_templateXorOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateXorOperationAST bang_templateXorOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateXorOperationAST unwrappedValue (void) const {
    GGS_templateXorOperationAST result ;
    if (isValid ()) {
      const cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateXorOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateXorOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateXorOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateXorOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateXorOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTrueBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTrueBoolAST (const class cPtr_templateTrueBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTrueBoolAST init_21_ (const class GGS_location & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTrueBoolAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTrueBoolAST class_func_new (const class GGS_location & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateTrueBoolAST class


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
  public: void templateTrueBoolAST_init_21_ (const class GGS_location & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateTrueBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTrueBoolAST (const GGS_location & in_mLocation
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
// Phase 1: @templateTrueBoolAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateTrueBoolAST_2E_weak (const class GGS_templateTrueBoolAST & inSource) ;

  public: GGS_templateTrueBoolAST_2E_weak & operator = (const class GGS_templateTrueBoolAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateTrueBoolAST_2E_weak init_nil (void) {
    GGS_templateTrueBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateTrueBoolAST bang_templateTrueBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateTrueBoolAST unwrappedValue (void) const {
    GGS_templateTrueBoolAST result ;
    if (isValid ()) {
      const cPtr_templateTrueBoolAST * p = (cPtr_templateTrueBoolAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateTrueBoolAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTrueBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTrueBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateTrueBoolAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTrueBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFalseBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFalseBoolAST (const class cPtr_templateFalseBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFalseBoolAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFalseBoolAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFalseBoolAST class_func_new (const class GGS_location & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFalseBoolAST class


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
  public: void templateFalseBoolAST_init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateFalseBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFalseBoolAST (const GGS_location & in_mLocation
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
// Phase 1: @templateFalseBoolAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFalseBoolAST_2E_weak (const class GGS_templateFalseBoolAST & inSource) ;

  public: GGS_templateFalseBoolAST_2E_weak & operator = (const class GGS_templateFalseBoolAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateFalseBoolAST_2E_weak init_nil (void) {
    GGS_templateFalseBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFalseBoolAST bang_templateFalseBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateFalseBoolAST unwrappedValue (void) const {
    GGS_templateFalseBoolAST result ;
    if (isValid ()) {
      const cPtr_templateFalseBoolAST * p = (cPtr_templateFalseBoolAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateFalseBoolAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFalseBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFalseBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFalseBoolAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFalseBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralStringExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralStringExpressionAST (const class cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_stringlist readProperty_mLiteralStringList (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralStringExpressionAST init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralStringExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralStringExpressionAST class_func_new (const class GGS_stringlist & inOperand0,
                                                                              const class GGS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralStringExpressionAST class


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
  public: void templateLiteralStringExpressionAST_init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_stringlist mProperty_mLiteralStringList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralStringExpressionAST (const GGS_stringlist & in_mLiteralStringList,
                                                   const GGS_location & in_mLocation
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
// Phase 1: @templateLiteralStringExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralStringExpressionAST_2E_weak (const class GGS_templateLiteralStringExpressionAST & inSource) ;

  public: GGS_templateLiteralStringExpressionAST_2E_weak & operator = (const class GGS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralStringExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralStringExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLiteralStringExpressionAST unwrappedValue (void) const {
    GGS_templateLiteralStringExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLiteralStringExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralStringExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralStringExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralStringExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralUIntExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralUIntExpressionAST (const class cPtr_templateLiteralUIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mLiteralInt (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralUIntExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralUIntExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralUIntExpressionAST class_func_new (const class GGS_lbigint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralUIntExpressionAST class


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
  public: void templateLiteralUIntExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mLiteralInt ;


//--- Default constructor
  public: cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt
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
// Phase 1: @templateLiteralUIntExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

  public: GGS_templateLiteralUIntExpressionAST_2E_weak & operator = (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralUIntExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralUIntExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralUIntExpressionAST bang_templateLiteralUIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLiteralUIntExpressionAST unwrappedValue (void) const {
    GGS_templateLiteralUIntExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLiteralUIntExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralUIntExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralUIntExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralUIntExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralCharExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralCharExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralCharExpressionAST (const class cPtr_templateLiteralCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLiteralChar (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralCharExpressionAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralCharExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralCharExpressionAST class_func_new (const class GGS_lchar & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralCharExpressionAST class


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
  public: void templateLiteralCharExpressionAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLiteralChar ;


//--- Default constructor
  public: cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralCharExpressionAST (const GGS_lchar & in_mLiteralChar
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
// Phase 1: @templateLiteralCharExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralCharExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralCharExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralCharExpressionAST_2E_weak (const class GGS_templateLiteralCharExpressionAST & inSource) ;

  public: GGS_templateLiteralCharExpressionAST_2E_weak & operator = (const class GGS_templateLiteralCharExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralCharExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralCharExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralCharExpressionAST bang_templateLiteralCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLiteralCharExpressionAST unwrappedValue (void) const {
    GGS_templateLiteralCharExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLiteralCharExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralCharExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralCharExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralCharExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralCharExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralDoubleExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralDoubleExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralDoubleExpressionAST (const class cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ldouble readProperty_mLiteralDouble (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralDoubleExpressionAST init_21_ (const class GGS_ldouble & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralDoubleExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralDoubleExpressionAST class_func_new (const class GGS_ldouble & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralDoubleExpressionAST class


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
  public: void templateLiteralDoubleExpressionAST_init_21_ (const class GGS_ldouble & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ldouble mProperty_mLiteralDouble ;


//--- Default constructor
  public: cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralDoubleExpressionAST (const GGS_ldouble & in_mLiteralDouble
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
// Phase 1: @templateLiteralDoubleExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralDoubleExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralDoubleExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralDoubleExpressionAST_2E_weak (const class GGS_templateLiteralDoubleExpressionAST & inSource) ;

  public: GGS_templateLiteralDoubleExpressionAST_2E_weak & operator = (const class GGS_templateLiteralDoubleExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralDoubleExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralDoubleExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralDoubleExpressionAST bang_templateLiteralDoubleExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLiteralDoubleExpressionAST unwrappedValue (void) const {
    GGS_templateLiteralDoubleExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLiteralDoubleExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralDoubleExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralDoubleExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralDoubleExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLiteralDoubleExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structFieldAccessTemplateExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structFieldAccessTemplateExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_structFieldAccessTemplateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structFieldAccessTemplateExpressionAST (const class cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_lstring readProperty_mStructFieldName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structFieldAccessTemplateExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_templateExpressionAST & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structFieldAccessTemplateExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structFieldAccessTemplateExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                                  const class GGS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structFieldAccessTemplateExpressionAST class


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
  public: void structFieldAccessTemplateExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_templateExpressionAST & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mStructFieldName ;


//--- Default constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                       const GGS_templateExpressionAST & in_mExpression,
                                                       const GGS_lstring & in_mStructFieldName
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
// Phase 1: @structFieldAccessTemplateExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structFieldAccessTemplateExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak (const class GGS_structFieldAccessTemplateExpressionAST & inSource) ;

  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak & operator = (const class GGS_structFieldAccessTemplateExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_structFieldAccessTemplateExpressionAST_2E_weak init_nil (void) {
    GGS_structFieldAccessTemplateExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structFieldAccessTemplateExpressionAST bang_structFieldAccessTemplateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_structFieldAccessTemplateExpressionAST unwrappedValue (void) const {
    GGS_structFieldAccessTemplateExpressionAST result ;
    if (isValid ()) {
      const cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_structFieldAccessTemplateExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structFieldAccessTemplateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structFieldAccessTemplateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structFieldAccessTemplateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structFieldAccessTemplateExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNotOperatorAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateNotOperatorAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNotOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNotOperatorAST (const class cPtr_templateNotOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNotOperatorAST init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNotOperatorAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNotOperatorAST class_func_new (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNotOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateNotOperatorAST class


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
  public: void templateNotOperatorAST_init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_templateExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateNotOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNotOperatorAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mExpression
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
// Phase 1: @templateNotOperatorAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateNotOperatorAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateNotOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateNotOperatorAST_2E_weak (const class GGS_templateNotOperatorAST & inSource) ;

  public: GGS_templateNotOperatorAST_2E_weak & operator = (const class GGS_templateNotOperatorAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateNotOperatorAST_2E_weak init_nil (void) {
    GGS_templateNotOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateNotOperatorAST bang_templateNotOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateNotOperatorAST unwrappedValue (void) const {
    GGS_templateNotOperatorAST result ;
    if (isValid ()) {
      const cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateNotOperatorAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNotOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNotOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNotOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateNotOperatorAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNotOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLogicalNegateAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLogicalNegateAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLogicalNegateAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLogicalNegateAST (const class cPtr_templateLogicalNegateAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLogicalNegateAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLogicalNegateAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLogicalNegateAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLogicalNegateAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLogicalNegateAST class


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
  public: void templateLogicalNegateAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateLogicalNegateAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLogicalNegateAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mExpression
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
// Phase 1: @templateLogicalNegateAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLogicalNegateAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLogicalNegateAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLogicalNegateAST_2E_weak (const class GGS_templateLogicalNegateAST & inSource) ;

  public: GGS_templateLogicalNegateAST_2E_weak & operator = (const class GGS_templateLogicalNegateAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLogicalNegateAST_2E_weak init_nil (void) {
    GGS_templateLogicalNegateAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLogicalNegateAST bang_templateLogicalNegateAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLogicalNegateAST unwrappedValue (void) const {
    GGS_templateLogicalNegateAST result ;
    if (isValid ()) {
      const cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLogicalNegateAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLogicalNegateAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLogicalNegateAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLogicalNegateAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLogicalNegateAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOptionAccessAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateOptionAccessAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateOptionAccessAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateOptionAccessAST (const class cPtr_templateOptionAccessAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GGS_lstring readProperty_mOptionName (void) const ;

  public: class GGS_lstring readProperty_mGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateOptionAccessAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOptionAccessAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOptionAccessAST class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateOptionAccessAST class


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
  public: void templateOptionAccessAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOptionComponentName ;
  public: GGS_lstring mProperty_mOptionName ;
  public: GGS_lstring mProperty_mGetterName ;


//--- Default constructor
  public: cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                        const GGS_lstring & in_mOptionName,
                                        const GGS_lstring & in_mGetterName
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
// Phase 1: @templateOptionAccessAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateOptionAccessAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateOptionAccessAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateOptionAccessAST_2E_weak (const class GGS_templateOptionAccessAST & inSource) ;

  public: GGS_templateOptionAccessAST_2E_weak & operator = (const class GGS_templateOptionAccessAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateOptionAccessAST_2E_weak init_nil (void) {
    GGS_templateOptionAccessAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateOptionAccessAST bang_templateOptionAccessAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateOptionAccessAST unwrappedValue (void) const {
    GGS_templateOptionAccessAST result ;
    if (isValid ()) {
      const cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateOptionAccessAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOptionAccessAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOptionAccessAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOptionAccessAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateOptionAccessAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum dynamicTypeComparisonKind
//--------------------------------------------------------------------------------------------------

class GGS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_dynamicTypeComparisonKind (void) ;

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
  public: static GGS_dynamicTypeComparisonKind extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynamicTypeComparisonKind class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_dynamicTypeComparisonKind class_func_inherited (LOCATION_ARGS) ;

  public: static class GGS_dynamicTypeComparisonKind class_func_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInherited (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dynamicTypeComparisonKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTestDynamicClassAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateTestDynamicClassAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTestDynamicClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTestDynamicClassAST (const class cPtr_templateTestDynamicClassAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTestDynamicClassAST init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                       const class GGS_lstring & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTestDynamicClassAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTestDynamicClassAST class_func_new (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                       const class GGS_lstring & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateTestDynamicClassAST class


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
  public: void templateTestDynamicClassAST_init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                 const class GGS_lstring & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GGS_location mProperty_mEndOfReceiverExpression ;
  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                            const GGS_location & in_mEndOfReceiverExpression,
                                            const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                            const GGS_lstring & in_mTypeName
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
// Phase 1: @templateTestDynamicClassAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateTestDynamicClassAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateTestDynamicClassAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateTestDynamicClassAST_2E_weak (const class GGS_templateTestDynamicClassAST & inSource) ;

  public: GGS_templateTestDynamicClassAST_2E_weak & operator = (const class GGS_templateTestDynamicClassAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateTestDynamicClassAST_2E_weak init_nil (void) {
    GGS_templateTestDynamicClassAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateTestDynamicClassAST bang_templateTestDynamicClassAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateTestDynamicClassAST unwrappedValue (void) const {
    GGS_templateTestDynamicClassAST result ;
    if (isValid ()) {
      const cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateTestDynamicClassAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTestDynamicClassAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTestDynamicClassAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTestDynamicClassAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateTestDynamicClassAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFunctionCallAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFunctionCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFunctionCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFunctionCallAST (const class cPtr_templateFunctionCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFunctionCallAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_templateExpressionListAST & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFunctionCallAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFunctionCallAST class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_templateExpressionListAST & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFunctionCallAST class


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
  public: void templateFunctionCallAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_templateExpressionListAST & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                        const GGS_templateExpressionListAST & in_mExpressionList
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
// Phase 1: @templateFunctionCallAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateFunctionCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFunctionCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFunctionCallAST_2E_weak (const class GGS_templateFunctionCallAST & inSource) ;

  public: GGS_templateFunctionCallAST_2E_weak & operator = (const class GGS_templateFunctionCallAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateFunctionCallAST_2E_weak init_nil (void) {
    GGS_templateFunctionCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFunctionCallAST bang_templateFunctionCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateFunctionCallAST unwrappedValue (void) const {
    GGS_templateFunctionCallAST result ;
    if (isValid ()) {
      const cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateFunctionCallAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFunctionCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFunctionCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFunctionCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateFunctionCallAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVarInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateVarInExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateVarInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateVarInExpressionAST (const class cPtr_templateVarInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateVarInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateVarInExpressionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateVarInExpressionAST class_func_new (const class GGS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateVarInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateVarInExpressionAST class


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
  public: void templateVarInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName
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
// Phase 1: @templateVarInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateVarInExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateVarInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateVarInExpressionAST_2E_weak (const class GGS_templateVarInExpressionAST & inSource) ;

  public: GGS_templateVarInExpressionAST_2E_weak & operator = (const class GGS_templateVarInExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateVarInExpressionAST_2E_weak init_nil (void) {
    GGS_templateVarInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateVarInExpressionAST bang_templateVarInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateVarInExpressionAST unwrappedValue (void) const {
    GGS_templateVarInExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateVarInExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateVarInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateVarInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateVarInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateVarInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAddOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateAddOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateAddOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateAddOperationAST (const class cPtr_templateAddOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAddOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAddOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAddOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_templateExpressionAST & inOperand1,
                                                                   const class GGS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAddOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateAddOperationAST class


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
  public: void templateAddOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAddOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateAddOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateAddOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateAddOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateAddOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateAddOperationAST_2E_weak (const class GGS_templateAddOperationAST & inSource) ;

  public: GGS_templateAddOperationAST_2E_weak & operator = (const class GGS_templateAddOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateAddOperationAST_2E_weak init_nil (void) {
    GGS_templateAddOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateAddOperationAST bang_templateAddOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateAddOperationAST unwrappedValue (void) const {
    GGS_templateAddOperationAST result ;
    if (isValid ()) {
      const cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateAddOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAddOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAddOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAddOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateAddOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAddOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSubOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateSubOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSubOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSubOperationAST (const class cPtr_templateSubOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSubOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSubOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSubOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_templateExpressionAST & inOperand1,
                                                                   const class GGS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSubOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateSubOperationAST class


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
  public: void templateSubOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSubOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSubOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateSubOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateSubOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateSubOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateSubOperationAST_2E_weak (const class GGS_templateSubOperationAST & inSource) ;

  public: GGS_templateSubOperationAST_2E_weak & operator = (const class GGS_templateSubOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateSubOperationAST_2E_weak init_nil (void) {
    GGS_templateSubOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateSubOperationAST bang_templateSubOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateSubOperationAST unwrappedValue (void) const {
    GGS_templateSubOperationAST result ;
    if (isValid ()) {
      const cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateSubOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSubOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSubOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSubOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateSubOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSubOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateMultiplyOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateMultiplyOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateMultiplyOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateMultiplyOperationAST (const class cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateMultiplyOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
                                                                    const class GGS_templateExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateMultiplyOperationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateMultiplyOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_templateExpressionAST & inOperand1,
                                                                        const class GGS_templateExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateMultiplyOperationAST class


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
  public: void templateMultiplyOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_templateExpressionAST & inOperand1,
                                                              const class GGS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateMultiplyOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateMultiplyOperationAST (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mLeftExpression,
                                             const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateMultiplyOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateMultiplyOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateMultiplyOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateMultiplyOperationAST_2E_weak (const class GGS_templateMultiplyOperationAST & inSource) ;

  public: GGS_templateMultiplyOperationAST_2E_weak & operator = (const class GGS_templateMultiplyOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateMultiplyOperationAST_2E_weak init_nil (void) {
    GGS_templateMultiplyOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateMultiplyOperationAST bang_templateMultiplyOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateMultiplyOperationAST unwrappedValue (void) const {
    GGS_templateMultiplyOperationAST result ;
    if (isValid ()) {
      const cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateMultiplyOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateMultiplyOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateMultiplyOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateMultiplyOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateMultiplyOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDivideOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateDivideOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateDivideOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateDivideOperationAST (const class cPtr_templateDivideOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDivideOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDivideOperationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDivideOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                      const class GGS_templateExpressionAST & inOperand1,
                                                                      const class GGS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateDivideOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateDivideOperationAST class


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
  public: void templateDivideOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateDivideOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateDivideOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateDivideOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateDivideOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateDivideOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateDivideOperationAST_2E_weak (const class GGS_templateDivideOperationAST & inSource) ;

  public: GGS_templateDivideOperationAST_2E_weak & operator = (const class GGS_templateDivideOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateDivideOperationAST_2E_weak init_nil (void) {
    GGS_templateDivideOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateDivideOperationAST bang_templateDivideOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateDivideOperationAST unwrappedValue (void) const {
    GGS_templateDivideOperationAST result ;
    if (isValid ()) {
      const cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateDivideOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDivideOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDivideOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateDivideOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateDivideOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDivideOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateModuloOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateModuloOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateModuloOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateModuloOperationAST (const class cPtr_templateModuloOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateModuloOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateModuloOperationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateModuloOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                      const class GGS_templateExpressionAST & inOperand1,
                                                                      const class GGS_templateExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateModuloOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateModuloOperationAST class


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
  public: void templateModuloOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateModuloOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateModuloOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateModuloOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateModuloOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateModuloOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateModuloOperationAST_2E_weak (const class GGS_templateModuloOperationAST & inSource) ;

  public: GGS_templateModuloOperationAST_2E_weak & operator = (const class GGS_templateModuloOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateModuloOperationAST_2E_weak init_nil (void) {
    GGS_templateModuloOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateModuloOperationAST bang_templateModuloOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateModuloOperationAST unwrappedValue (void) const {
    GGS_templateModuloOperationAST result ;
    if (isValid ()) {
      const cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateModuloOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateModuloOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateModuloOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateModuloOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateModuloOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateModuloOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateUnaryMinusOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateUnaryMinusOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateUnaryMinusOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateUnaryMinusOperationAST (const class cPtr_templateUnaryMinusOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateUnaryMinusOperationAST init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateUnaryMinusOperationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateUnaryMinusOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_templateExpressionAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateUnaryMinusOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateUnaryMinusOperationAST class


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
  public: void templateUnaryMinusOperationAST_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateUnaryMinusOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateUnaryMinusOperationAST (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mExpression
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
// Phase 1: @templateUnaryMinusOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateUnaryMinusOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateUnaryMinusOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateUnaryMinusOperationAST_2E_weak (const class GGS_templateUnaryMinusOperationAST & inSource) ;

  public: GGS_templateUnaryMinusOperationAST_2E_weak & operator = (const class GGS_templateUnaryMinusOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateUnaryMinusOperationAST_2E_weak init_nil (void) {
    GGS_templateUnaryMinusOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateUnaryMinusOperationAST bang_templateUnaryMinusOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateUnaryMinusOperationAST unwrappedValue (void) const {
    GGS_templateUnaryMinusOperationAST result ;
    if (isValid ()) {
      const cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateUnaryMinusOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateUnaryMinusOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateUnaryMinusOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateUnaryMinusOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateUnaryMinusOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateEqualTestAST (const class cPtr_templateEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateEqualTestAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateEqualTestAST class_func_new (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateEqualTestAST class


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
  public: void templateEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      const class GGS_templateExpressionAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateEqualTestAST (const GGS_location & in_mOperatorLocation,
                                     const GGS_templateExpressionAST & in_mLeftExpression,
                                     const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateEqualTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateEqualTestAST_2E_weak (const class GGS_templateEqualTestAST & inSource) ;

  public: GGS_templateEqualTestAST_2E_weak & operator = (const class GGS_templateEqualTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateEqualTestAST_2E_weak init_nil (void) {
    GGS_templateEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateEqualTestAST bang_templateEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateEqualTestAST unwrappedValue (void) const {
    GGS_templateEqualTestAST result ;
    if (isValid ()) {
      const cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateEqualTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateEqualTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateNonEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateNonEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNonEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNonEqualTestAST (const class cPtr_templateNonEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNonEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNonEqualTestAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNonEqualTestAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_templateExpressionAST & inOperand1,
                                                                   const class GGS_templateExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNonEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateNonEqualTestAST class


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
  public: void templateNonEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateNonEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNonEqualTestAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateNonEqualTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateNonEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateNonEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateNonEqualTestAST_2E_weak (const class GGS_templateNonEqualTestAST & inSource) ;

  public: GGS_templateNonEqualTestAST_2E_weak & operator = (const class GGS_templateNonEqualTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateNonEqualTestAST_2E_weak init_nil (void) {
    GGS_templateNonEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateNonEqualTestAST bang_templateNonEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateNonEqualTestAST unwrappedValue (void) const {
    GGS_templateNonEqualTestAST result ;
    if (isValid ()) {
      const cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateNonEqualTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNonEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNonEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNonEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateNonEqualTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictInfTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictInfTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictInfTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictInfTestAST (const class cPtr_templateStrictInfTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictInfTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictInfTestAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictInfTestAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
                                                                    const class GGS_templateExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictInfTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateStrictInfTestAST class


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
  public: void templateStrictInfTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictInfTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictInfTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateStrictInfTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictInfTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateStrictInfTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateStrictInfTestAST_2E_weak (const class GGS_templateStrictInfTestAST & inSource) ;

  public: GGS_templateStrictInfTestAST_2E_weak & operator = (const class GGS_templateStrictInfTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateStrictInfTestAST_2E_weak init_nil (void) {
    GGS_templateStrictInfTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateStrictInfTestAST bang_templateStrictInfTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateStrictInfTestAST unwrappedValue (void) const {
    GGS_templateStrictInfTestAST result ;
    if (isValid ()) {
      const cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateStrictInfTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictInfTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictInfTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictInfTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateStrictInfTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInfOrEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInfOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateInfOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInfOrEqualTestAST (const class cPtr_templateInfOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInfOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInfOrEqualTestAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInfOrEqualTestAST class_func_new (const class GGS_location & inOperand0,
                                                                     const class GGS_templateExpressionAST & inOperand1,
                                                                     const class GGS_templateExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInfOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInfOrEqualTestAST class


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
  public: void templateInfOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateInfOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInfOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateInfOrEqualTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInfOrEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInfOrEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInfOrEqualTestAST_2E_weak (const class GGS_templateInfOrEqualTestAST & inSource) ;

  public: GGS_templateInfOrEqualTestAST_2E_weak & operator = (const class GGS_templateInfOrEqualTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInfOrEqualTestAST_2E_weak init_nil (void) {
    GGS_templateInfOrEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInfOrEqualTestAST bang_templateInfOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInfOrEqualTestAST unwrappedValue (void) const {
    GGS_templateInfOrEqualTestAST result ;
    if (isValid ()) {
      const cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInfOrEqualTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInfOrEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInfOrEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInfOrEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInfOrEqualTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateStrictSupTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictSupTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictSupTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictSupTestAST (const class cPtr_templateStrictSupTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictSupTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictSupTestAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictSupTestAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
                                                                    const class GGS_templateExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictSupTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateStrictSupTestAST class


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
  public: void templateStrictSupTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictSupTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictSupTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateStrictSupTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictSupTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateStrictSupTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateStrictSupTestAST_2E_weak (const class GGS_templateStrictSupTestAST & inSource) ;

  public: GGS_templateStrictSupTestAST_2E_weak & operator = (const class GGS_templateStrictSupTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateStrictSupTestAST_2E_weak init_nil (void) {
    GGS_templateStrictSupTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateStrictSupTestAST bang_templateStrictSupTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateStrictSupTestAST unwrappedValue (void) const {
    GGS_templateStrictSupTestAST result ;
    if (isValid ()) {
      const cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateStrictSupTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictSupTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictSupTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictSupTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateStrictSupTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateSupOrEqualTestAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateSupOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSupOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSupOrEqualTestAST (const class cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSupOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSupOrEqualTestAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSupOrEqualTestAST class_func_new (const class GGS_location & inOperand0,
                                                                     const class GGS_templateExpressionAST & inOperand1,
                                                                     const class GGS_templateExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateSupOrEqualTestAST class


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
  public: void templateSupOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSupOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSupOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateSupOrEqualTestAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateSupOrEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateSupOrEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateSupOrEqualTestAST_2E_weak (const class GGS_templateSupOrEqualTestAST & inSource) ;

  public: GGS_templateSupOrEqualTestAST_2E_weak & operator = (const class GGS_templateSupOrEqualTestAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateSupOrEqualTestAST_2E_weak init_nil (void) {
    GGS_templateSupOrEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateSupOrEqualTestAST bang_templateSupOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateSupOrEqualTestAST unwrappedValue (void) const {
    GGS_templateSupOrEqualTestAST result ;
    if (isValid ()) {
      const cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateSupOrEqualTestAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSupOrEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSupOrEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSupOrEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateSupOrEqualTestAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLeftShiftOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLeftShiftOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLeftShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLeftShiftOperationAST (const class cPtr_templateLeftShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLeftShiftOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_templateExpressionAST & inOperand1,
                                                                     const class GGS_templateExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLeftShiftOperationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLeftShiftOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_templateExpressionAST & inOperand1,
                                                                         const class GGS_templateExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLeftShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLeftShiftOperationAST class


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
  public: void templateLeftShiftOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateLeftShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLeftShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_templateExpressionAST & in_mLeftExpression,
                                              const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateLeftShiftOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateLeftShiftOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLeftShiftOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLeftShiftOperationAST_2E_weak (const class GGS_templateLeftShiftOperationAST & inSource) ;

  public: GGS_templateLeftShiftOperationAST_2E_weak & operator = (const class GGS_templateLeftShiftOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateLeftShiftOperationAST_2E_weak init_nil (void) {
    GGS_templateLeftShiftOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLeftShiftOperationAST bang_templateLeftShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateLeftShiftOperationAST unwrappedValue (void) const {
    GGS_templateLeftShiftOperationAST result ;
    if (isValid ()) {
      const cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateLeftShiftOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLeftShiftOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLeftShiftOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLeftShiftOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateLeftShiftOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateRightShiftOperationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateRightShiftOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateRightShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateRightShiftOperationAST (const class cPtr_templateRightShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateRightShiftOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_templateExpressionAST & inOperand1,
                                                                      const class GGS_templateExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateRightShiftOperationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateRightShiftOperationAST class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_templateExpressionAST & inOperand1,
                                                                          const class GGS_templateExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateRightShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateRightShiftOperationAST class


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
  public: void templateRightShiftOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateRightShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateRightShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mLeftExpression,
                                               const GGS_templateExpressionAST & in_mRightExpression
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
// Phase 1: @templateRightShiftOperationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateRightShiftOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateRightShiftOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateRightShiftOperationAST_2E_weak (const class GGS_templateRightShiftOperationAST & inSource) ;

  public: GGS_templateRightShiftOperationAST_2E_weak & operator = (const class GGS_templateRightShiftOperationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateRightShiftOperationAST_2E_weak init_nil (void) {
    GGS_templateRightShiftOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateRightShiftOperationAST bang_templateRightShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateRightShiftOperationAST unwrappedValue (void) const {
    GGS_templateRightShiftOperationAST result ;
    if (isValid ()) {
      const cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateRightShiftOperationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateRightShiftOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateRightShiftOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateRightShiftOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateRightShiftOperationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionStringAST (const class cPtr_templateInstructionStringAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionStringAST init_21_ (const class GGS_string & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringAST class_func_new (const class GGS_string & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionStringAST class


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
  public: void templateInstructionStringAST_init_21_ (const class GGS_string & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GGS_string & in_mTemplateString
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
// Phase 1: @templateInstructionStringAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionStringAST_2E_weak (const class GGS_templateInstructionStringAST & inSource) ;

  public: GGS_templateInstructionStringAST_2E_weak & operator = (const class GGS_templateInstructionStringAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionStringAST_2E_weak init_nil (void) {
    GGS_templateInstructionStringAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionStringAST bang_templateInstructionStringAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionStringAST unwrappedValue (void) const {
    GGS_templateInstructionStringAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionStringAST * p = (cPtr_templateInstructionStringAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionStringAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionStringAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionExpressionAST (const class cPtr_templateInstructionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionExpressionAST init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionAST class_func_new (const class GGS_templateExpressionAST & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionExpressionAST class


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
  public: void templateInstructionExpressionAST_init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionExpressionAST (const GGS_templateExpressionAST & in_mExpression,
                                                 const GGS_location & in_mLocation
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
// Phase 1: @templateInstructionExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionExpressionAST_2E_weak (const class GGS_templateInstructionExpressionAST & inSource) ;

  public: GGS_templateInstructionExpressionAST_2E_weak & operator = (const class GGS_templateInstructionExpressionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionExpressionAST_2E_weak init_nil (void) {
    GGS_templateInstructionExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionExpressionAST bang_templateInstructionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionExpressionAST unwrappedValue (void) const {
    GGS_templateInstructionExpressionAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionExpressionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateBlockInstructionAST (const class cPtr_templateBlockInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateBlockInstructionAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_templateInstructionListAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateBlockInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateBlockInstructionAST class_func_new (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_templateInstructionListAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateBlockInstructionAST class


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
  public: void templateBlockInstructionAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS_templateInstructionListAST & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_templateInstructionListAST mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateBlockInstructionAST (const GGS_templateExpressionAST & in_mExpression,
                                            const GGS_location & in_mLocation,
                                            const GGS_templateInstructionListAST & in_mBlockInstructionList
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
// Phase 1: @templateBlockInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateBlockInstructionAST_2E_weak (const class GGS_templateBlockInstructionAST & inSource) ;

  public: GGS_templateBlockInstructionAST_2E_weak & operator = (const class GGS_templateBlockInstructionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateBlockInstructionAST_2E_weak init_nil (void) {
    GGS_templateBlockInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateBlockInstructionAST bang_templateBlockInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateBlockInstructionAST unwrappedValue (void) const {
    GGS_templateBlockInstructionAST result ;
    if (isValid ()) {
      const cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateBlockInstructionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateBlockInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateBlockInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateBlockInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGetColumnLocationAST (const class cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGetColumnLocationAST init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGetColumnLocationAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGetColumnLocationAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionGetColumnLocationAST class


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
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
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
// Phase 1: @templateInstructionGetColumnLocationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGetColumnLocationAST_2E_weak (const class GGS_templateInstructionGetColumnLocationAST & inSource) ;

  public: GGS_templateInstructionGetColumnLocationAST_2E_weak & operator = (const class GGS_templateInstructionGetColumnLocationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGetColumnLocationAST_2E_weak init_nil (void) {
    GGS_templateInstructionGetColumnLocationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGetColumnLocationAST bang_templateInstructionGetColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionGetColumnLocationAST unwrappedValue (void) const {
    GGS_templateInstructionGetColumnLocationAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionGetColumnLocationAST * p = (cPtr_templateInstructionGetColumnLocationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionGetColumnLocationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGetColumnLocationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGetColumnLocationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionGetColumnLocationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGotoColumnLocationAST (const class cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGotoColumnLocationAST init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGotoColumnLocationAST extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGotoColumnLocationAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionGotoColumnLocationAST class


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
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
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
// Phase 1: @templateInstructionGotoColumnLocationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak (const class GGS_templateInstructionGotoColumnLocationAST & inSource) ;

  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak & operator = (const class GGS_templateInstructionGotoColumnLocationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGotoColumnLocationAST_2E_weak init_nil (void) {
    GGS_templateInstructionGotoColumnLocationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGotoColumnLocationAST bang_templateInstructionGotoColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionGotoColumnLocationAST unwrappedValue (void) const {
    GGS_templateInstructionGotoColumnLocationAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionGotoColumnLocationAST * p = (cPtr_templateInstructionGotoColumnLocationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionGotoColumnLocationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGotoColumnLocationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGotoColumnLocationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionGotoColumnLocationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_templateInstructionIfBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_templateExpressionAST & in_mExpression,
                                                 const class GGS_templateInstructionListAST & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListAST init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfBranchListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_templateInstructionIfBranchListAST class_func_listWithValue (const class GGS_templateExpressionAST & inOperand0,
                                                                                        const class GGS_templateInstructionListAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_templateInstructionIfBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_templateExpressionAST & inOperand0,
                                                     const class GGS_templateInstructionListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateInstructionIfBranchListAST add_operation (const GGS_templateInstructionIfBranchListAST & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_templateExpressionAST constinArgument0,
                                               class GGS_templateInstructionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_templateExpressionAST constinArgument0,
                                                      class GGS_templateInstructionListAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_templateExpressionAST & outArgument0,
                                                 class GGS_templateInstructionListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_templateExpressionAST & outArgument0,
                                                class GGS_templateInstructionListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_templateExpressionAST & outArgument0,
                                                      class GGS_templateInstructionListAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_templateExpressionAST constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_templateInstructionListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_templateExpressionAST & outArgument0,
                                              class GGS_templateInstructionListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_templateExpressionAST & outArgument0,
                                             class GGS_templateInstructionListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_templateExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionIfBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionIfBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionIfBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_templateInstructionIfBranchListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionIfBranchListAST ;
 
} ; // End of GGS_templateInstructionIfBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionIfBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionIfBranchListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: inline GGS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_templateInstructionListAST mProperty_mInstructionList ;
  public: inline GGS_templateInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_templateInstructionIfBranchListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateExpressionAST & in_mExpression,
                                                             const GGS_templateInstructionListAST & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListAST_2E_element init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                                 const class GGS_templateInstructionListAST & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfBranchListAST_2E_element class_func_new (const class GGS_templateExpressionAST & inOperand0,
                                                                                         const class GGS_templateInstructionListAST & inOperand1,
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
 
} ; // End of GGS_templateInstructionIfBranchListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionIfAST (const class cPtr_templateInstructionIfAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateInstructionIfBranchListAST readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfAST init_21__21_ (const class GGS_templateInstructionIfBranchListAST & inOperand0,
                                                            const class GGS_templateInstructionListAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfAST class_func_new (const class GGS_templateInstructionIfBranchListAST & inOperand0,
                                                                    const class GGS_templateInstructionListAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionIfAST class


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
  public: void templateInstructionIfAST_init_21__21_ (const class GGS_templateInstructionIfBranchListAST & inOperand0,
                                                      const class GGS_templateInstructionListAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateInstructionIfBranchListAST mProperty_mTemplateInstructionIfBranchList ;
  public: GGS_templateInstructionListAST mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionIfAST (const GGS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                         const GGS_templateInstructionListAST & in_mElseInstructionList
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
// Phase 1: @templateInstructionIfAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionIfAST_2E_weak (const class GGS_templateInstructionIfAST & inSource) ;

  public: GGS_templateInstructionIfAST_2E_weak & operator = (const class GGS_templateInstructionIfAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionIfAST_2E_weak init_nil (void) {
    GGS_templateInstructionIfAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionIfAST bang_templateInstructionIfAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionIfAST unwrappedValue (void) const {
    GGS_templateInstructionIfAST result ;
    if (isValid ()) {
      const cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionIfAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionIfAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionForGeneration class


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
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
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
// Phase 1: @templateInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForGeneration_2E_weak (const class GGS_templateInstructionForGeneration & inSource) ;

  public: GGS_templateInstructionForGeneration_2E_weak & operator = (const class GGS_templateInstructionForGeneration & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForGeneration bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionForGeneration unwrappedValue (void) const {
    GGS_templateInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_templateInstructionForGeneration * p = (cPtr_templateInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionForGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticExpressionForGeneration (const class cPtr_semanticExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticExpressionForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_element (class GGS_unifiedTypeMapElementClass_2E_weak & out_weakElement) const ;

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
  public: static GGS_unifiedTypeMapEntry extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapEntry class_func_element (const class GGS_unifiedTypeMapElementClass_2E_weak & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_unifiedTypeMapEntry class_func_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractElement (class GGS_unifiedTypeMapElementClass_2E_weak & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry_2E_element_3F_ getter_getElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMapEntry class


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
  public: void semanticExpressionForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension getter isTrueExpression
  public: virtual class GGS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_semanticExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                const GGS_location & in_mLocation
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

class GGS_templateInstructionExpressionForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionExpressionForGeneration (const class cPtr_templateInstructionExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionExpressionForGeneration init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionForGeneration class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionExpressionForGeneration class


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
  public: void templateInstructionExpressionForGeneration_init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionExpressionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @templateInstructionExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionExpressionForGeneration_2E_weak (const class GGS_templateInstructionExpressionForGeneration & inSource) ;

  public: GGS_templateInstructionExpressionForGeneration_2E_weak & operator = (const class GGS_templateInstructionExpressionForGeneration & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionExpressionForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionExpressionForGeneration bang_templateInstructionExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_templateInstructionExpressionForGeneration unwrappedValue (void) const {
    GGS_templateInstructionExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_templateInstructionExpressionForGeneration (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_templateInstructionExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_templateInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_templateInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_templateInstructionListForGeneration class_func_listWithValue (const class GGS_templateInstructionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_templateInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_templateInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateInstructionListForGeneration add_operation (const GGS_templateInstructionListForGeneration & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_templateInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_templateInstructionForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_templateInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_templateInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_templateInstructionForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_templateInstructionForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_templateInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_templateInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateInstructionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_templateInstructionListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionListForGeneration ;
 
} ; // End of GGS_templateInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateInstructionForGeneration mProperty_mInstruction ;
  public: inline GGS_templateInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_templateInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_templateInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionForGeneration & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListForGeneration_2E_element init_21_ (const class GGS_templateInstructionForGeneration & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListForGeneration_2E_element class_func_new (const class GGS_templateInstructionForGeneration & inOperand0,
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
 
} ; // End of GGS_templateInstructionListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ;

