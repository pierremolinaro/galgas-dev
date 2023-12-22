#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMessageName,
                                                 const class GALGAS_lstring & in_mMessageValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalMessageDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMMessageNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageValueAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageDeclarationListAST ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalMessageDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalMessageDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMessageName ;
  public: inline GALGAS_lstring readProperty_mMessageName (void) const {
    return mProperty_mMessageName ;
  }

  public: GALGAS_lstring mProperty_mMessageValue ;
  public: inline GALGAS_lstring readProperty_mMessageValue (void) const {
    return mProperty_mMessageValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMessageName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageName = inValue ;
  }

  public: inline void setter_setMMessageValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & in_mMessageName,
                                                              const GALGAS_lstring & in_mMessageValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalListDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalListDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_lstring & in_mStyle,
                                                 const class GALGAS_lstring & in_mSyntaxErrorMessage,
                                                 const class GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GALGAS_lexicalListEntryListAST & in_mEntryList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                       const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                     const class GALGAS_lexicalListEntryListAST & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalListDeclarationListAST add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                               class GALGAS_lexicalListEntryListAST constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                                      class GALGAS_lexicalListEntryListAST constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                 class GALGAS_lexicalListEntryListAST & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                class GALGAS_lexicalListEntryListAST & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                      class GALGAS_lexicalListEntryListAST & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryListAtIndex (class GALGAS_lexicalListEntryListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                              class GALGAS_lexicalListEntryListAST & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                             class GALGAS_lexicalListEntryListAST & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_mEntryListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListDeclarationListAST ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalListEntryListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEntrySpelling,
                                                 const class GALGAS_lstring & in_mTerminalSpelling,
                                                 const class GALGAS_bool & in_nonAtomicSelection,
                                                 const class GALGAS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListEntryListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListEntryListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalListEntryListAST add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntrySpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntrySpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_nonAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListEntryListAST ;
 
} ; // End of GALGAS_lexicalListEntryListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListEntryListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListEntryListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalListDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_lstring mProperty_mStyle ;
  public: inline GALGAS_lstring readProperty_mStyle (void) const {
    return mProperty_mStyle ;
  }

  public: GALGAS_lstring mProperty_mSyntaxErrorMessage ;
  public: inline GALGAS_lstring readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GALGAS_sentLexicalAttributeListAST mProperty_mSentAttributeList ;
  public: inline GALGAS_sentLexicalAttributeListAST readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GALGAS_lexicalListEntryListAST mProperty_mEntryList ;
  public: inline GALGAS_lexicalListEntryListAST readProperty_mEntryList (void) const {
    return mProperty_mEntryList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMStyle (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyle = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_sentLexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMEntryList (const GALGAS_lexicalListEntryListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntryList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                           const GALGAS_lstring & in_mStyle,
                                                           const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                           const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                           const GALGAS_lexicalListEntryListAST & in_mEntryList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                        const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                        const class GALGAS_lexicalListEntryListAST & inOperand4,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalListDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRuleListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRuleListAST constructor_listWithValue (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRuleAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRuleAST getter_mLexicalRuleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRuleListAST ;
 
} ; // End of GALGAS_lexicalRuleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractLexicalRuleAST (const class cPtr_abstractLexicalRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractLexicalRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractLexicalRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractLexicalRuleAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractLexicalRuleAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractLexicalRuleAST mProperty_mLexicalRule ;
  public: inline GALGAS_abstractLexicalRuleAST readProperty_mLexicalRule (void) const {
    return mProperty_mLexicalRule ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalRule (const GALGAS_abstractLexicalRuleAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRule = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRuleListAST_2D_element constructor_new (const class GALGAS_abstractLexicalRuleAST & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalRuleListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_indexingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_indexingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_indexingListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mIndexName,
                                                 const class GALGAS_lstring & in_mIndexComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_indexingListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_indexingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_indexingListAST add_operation (const GALGAS_indexingListAST & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMIndexCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_indexingListAST ;
 
} ; // End of GALGAS_indexingListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_indexingListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_indexingListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mIndexName ;
  public: inline GALGAS_lstring readProperty_mIndexName (void) const {
    return mProperty_mIndexName ;
  }

  public: GALGAS_lstring mProperty_mIndexComment ;
  public: inline GALGAS_lstring readProperty_mIndexComment (void) const {
    return mProperty_mIndexComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndexName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexName = inValue ;
  }

  public: inline void setter_setMIndexComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_indexingListAST_2D_element (const GALGAS_lstring & in_mIndexName,
                                             const GALGAS_lstring & in_mIndexComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_indexingListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_indexingListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticDeclarationAST_2D_weak (const class GALGAS_semanticDeclarationAST & inSource) ;

  public: GALGAS_semanticDeclarationAST_2D_weak & operator = (const class GALGAS_semanticDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticDeclarationAST bang_semanticDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLexiqueComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLexiqueComponentAST (const class cPtr_templateLexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLexiqueSuperComponentName (void) const ;

  public: class GALGAS_templateDelimitorListAST readProperty_mTemplateDelimitorList (void) const ;

  public: class GALGAS_templateReplacementListAST readProperty_mTemplateReplacementList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                           const class GALGAS_templateReplacementListAST & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLexiqueComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLexiqueComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionMethodMapForBuildingContext & ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionMethodMapForBuildingContext inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticContext & ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_string inProductDirectory,
           const class GALGAS_semanticContext inSemanticContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_predefinedTypes inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueSuperComponentName ;
  public: GALGAS_templateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GALGAS_templateReplacementListAST mProperty_mTemplateReplacementList ;

//--- Constructor
  public: cPtr_templateLexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mLexiqueComponentName,
                                            const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                            const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                            const GALGAS_templateReplacementListAST & in_mTemplateReplacementList
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
// Phase 1: @templateLexiqueComponentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLexiqueComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLexiqueComponentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLexiqueComponentAST_2D_weak (const class GALGAS_templateLexiqueComponentAST & inSource) ;

  public: GALGAS_templateLexiqueComponentAST_2D_weak & operator = (const class GALGAS_templateLexiqueComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLexiqueComponentAST bang_templateLexiqueComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLexiqueComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLexiqueComponentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLexiqueComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLexiqueComponentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExpressionAST (const class cPtr_lexicalExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_lexicalExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExpressionAST_2D_weak (const class GALGAS_lexicalExpressionAST & inSource) ;

  public: GALGAS_lexicalExpressionAST_2D_weak & operator = (const class GALGAS_lexicalExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExpressionAST bang_lexicalExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalInstructionAST (const class cPtr_lexicalInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateLexicalInstructionCode
  public: virtual class GALGAS_string getter_generateLexicalInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GALGAS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTagMap & ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_lexicalInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalInstructionAST_2D_weak (const class GALGAS_lexicalInstructionAST & inSource) ;

  public: GALGAS_lexicalInstructionAST_2D_weak & operator = (const class GALGAS_lexicalInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalInstructionAST bang_lexicalInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalInstructionListAST constructor_listWithValue (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalInstructionListAST ;
 
} ; // End of GALGAS_lexicalInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_lexicalInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_lexicalInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionListAST_2D_element constructor_new (const class GALGAS_lexicalInstructionAST & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalInstructionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractLexicalRuleAST_2D_weak (const class GALGAS_abstractLexicalRuleAST & inSource) ;

  public: GALGAS_abstractLexicalRuleAST_2D_weak & operator = (const class GALGAS_abstractLexicalRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractLexicalRuleAST bang_abstractLexicalRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractLexicalRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractLexicalRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalRuleListAST useLoopLocalVar' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_useLoopLocalVar (const class GALGAS_lexicalRuleListAST & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mListName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mListName ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
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
// Phase 1: @lexicalImplicitRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

  public: GALGAS_lexicalImplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GALGAS_lexicalInstructionListAST readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitRuleAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GALGAS_lexicalInstructionListAST mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GALGAS_lexicalInstructionListAST & in_mInstructionList
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
// Phase 1: @lexicalExplicitRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

  public: GALGAS_lexicalExplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExplicitRuleAST bang_lexicalExplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sentLexicalAttributeListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sentLexicalAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                         const GALGAS_lstring & in_mAttributeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sentLexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sentLexicalAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sentLexicalAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalListEntryListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEntrySpelling ;
  public: inline GALGAS_lstring readProperty_mEntrySpelling (void) const {
    return mProperty_mEntrySpelling ;
  }

  public: GALGAS_lstring mProperty_mTerminalSpelling ;
  public: inline GALGAS_lstring readProperty_mTerminalSpelling (void) const {
    return mProperty_mTerminalSpelling ;
  }

  public: GALGAS_bool mProperty_nonAtomicSelection ;
  public: inline GALGAS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GALGAS_bool mProperty_isEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntrySpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntrySpelling = inValue ;
  }

  public: inline void setter_setMTerminalSpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalSpelling = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & in_mEntrySpelling,
                                                     const GALGAS_lstring & in_mTerminalSpelling,
                                                     const GALGAS_bool & in_nonAtomicSelection,
                                                     const GALGAS_bool & in_isEndOfTemplateMark) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListEntryListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_bool & inOperand3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalListEntryListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalListEntryListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalOrExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GALGAS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalOrExpressionAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                      const class GALGAS_lexicalExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalOrExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalOrExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GALGAS_lexicalExpressionAST mProperty_mRightOperand ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                       const GALGAS_lexicalExpressionAST & in_mRightOperand
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
// Phase 1: @lexicalOrExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalOrExpressionAST_2D_weak (const class GALGAS_lexicalOrExpressionAST & inSource) ;

  public: GALGAS_lexicalOrExpressionAST_2D_weak & operator = (const class GALGAS_lexicalOrExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalOrExpressionAST bang_lexicalOrExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalOrExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalOrExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mCharacterSetName ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
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
// Phase 1: @lexicalCharacterSetMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
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
// Phase 1: @lexicalCharacterMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mLowerBound (void) const ;

  public: class GALGAS_lchar readProperty_mUpperBound (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                const class GALGAS_lchar & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                 const GALGAS_lchar & in_mUpperBound
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
// Phase 1: @lexicalCharacterIntervalMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterIntervalMatchAST bang_lexicalCharacterIntervalMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalStringMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mString ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
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
// Phase 1: @lexicalStringMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringMatchAST_2D_weak (const class GALGAS_lexicalStringMatchAST & inSource) ;

  public: GALGAS_lexicalStringMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringMatchAST bang_lexicalStringMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalStringMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringNotMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

  public: class GALGAS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mString ;
  public: GALGAS_lstring mProperty_mErrorMessage ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                         const GALGAS_lstring & in_mErrorMessage
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
// Phase 1: @lexicalStringNotMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

  public: GALGAS_lexicalStringNotMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringNotMatchAST bang_lexicalStringNotMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendSearchListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendSearchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendSearchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalSendSearchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mAttributeName,
                                                 const class GALGAS_lstring & in_mSearchListName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendSearchListAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendSearchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalSendSearchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchListNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchListNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSendSearchListAST ;
 
} ; // End of GALGAS_lexicalSendSearchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalSendSearchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSearchListName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalSendSearchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendSearchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendSearchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_lstring mProperty_mSearchListName ;
  public: inline GALGAS_lstring readProperty_mSearchListName (void) const {
    return mProperty_mSearchListName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMSearchListName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSearchListName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                      const GALGAS_lstring & in_mSearchListName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendSearchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendSearchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSendSearchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendDefaultActionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendDefaultActionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendDefaultActionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSendDefaultActionAST (const class cPtr_lexicalSendDefaultActionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendDefaultActionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSendDefaultActionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSendDefaultActionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendDefaultActionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateDefaultSendCode
  public: virtual class GALGAS_string getter_generateDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateObjcCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendDefaultActionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendDefaultActionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendDefaultActionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalSendDefaultActionAST_2D_weak (const class GALGAS_lexicalSendDefaultActionAST & inSource) ;

  public: GALGAS_lexicalSendDefaultActionAST_2D_weak & operator = (const class GALGAS_lexicalSendDefaultActionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalSendDefaultActionAST bang_lexicalSendDefaultActionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendDefaultActionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendDefaultActionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendDefaultActionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSendDefaultActionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendTerminalByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDefaultSentTerminal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendTerminalByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendTerminalByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateDefaultSendCode
  public: virtual class GALGAS_string getter_generateDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateObjcCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDefaultSentTerminal ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
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
// Phase 1: @lexicalSendTerminalByDefaultAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendTerminalByDefaultAST_2D_weak : public GALGAS_lexicalSendDefaultActionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (const class GALGAS_lexicalSendTerminalByDefaultAST & inSource) ;

  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & operator = (const class GALGAS_lexicalSendTerminalByDefaultAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalSendTerminalByDefaultAST bang_lexicalSendTerminalByDefaultAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendTerminalByDefaultAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendTerminalByDefaultAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorByDefaultAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDefaultErrorMessageName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateDefaultSendCode
  public: virtual class GALGAS_string getter_generateDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateObjcCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaDefaultSendCode (const class GALGAS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDefaultErrorMessageName ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
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
// Phase 1: @lexicalErrorByDefaultAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorByDefaultAST_2D_weak : public GALGAS_lexicalSendDefaultActionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorByDefaultAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalErrorByDefaultAST_2D_weak (const class GALGAS_lexicalErrorByDefaultAST & inSource) ;

  public: GALGAS_lexicalErrorByDefaultAST_2D_weak & operator = (const class GALGAS_lexicalErrorByDefaultAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalErrorByDefaultAST bang_lexicalErrorByDefaultAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorByDefaultAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorByDefaultAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalWhileBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalWhileBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalWhileBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalWhileBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                 const class GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalWhileBranchListAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalWhileBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalWhileBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                   const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                     const class GALGAS_lexicalInstructionListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalExpressionAST constinArgument0,
                                               class GALGAS_lexicalInstructionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                      class GALGAS_lexicalInstructionListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class GALGAS_lexicalInstructionListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                class GALGAS_lexicalInstructionListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                      class GALGAS_lexicalInstructionListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileExpressionAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileInstructionListAtIndex (class GALGAS_lexicalInstructionListAST constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                             class GALGAS_lexicalInstructionListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mWhileExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mWhileInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalWhileBranchListAST ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalWhileBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalWhileBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalWhileBranchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalWhileBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mWhileExpression ;
  public: inline GALGAS_lexicalExpressionAST readProperty_mWhileExpression (void) const {
    return mProperty_mWhileExpression ;
  }

  public: GALGAS_lexicalInstructionListAST mProperty_mWhileInstructionList ;
  public: inline GALGAS_lexicalInstructionListAST readProperty_mWhileInstructionList (void) const {
    return mProperty_mWhileInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMWhileExpression (const GALGAS_lexicalExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileExpression = inValue ;
  }

  public: inline void setter_setMWhileInstructionList (const GALGAS_lexicalInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                       const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalWhileBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalWhileBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                    const class GALGAS_lexicalInstructionListAST & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSelectBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSelectBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSelectBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalSelectBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                 const class GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSelectBranchListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSelectBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalSelectBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                    const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                     const class GALGAS_lexicalInstructionListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalExpressionAST constinArgument0,
                                               class GALGAS_lexicalInstructionListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                      class GALGAS_lexicalInstructionListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class GALGAS_lexicalInstructionListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                class GALGAS_lexicalInstructionListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                      class GALGAS_lexicalInstructionListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectExpressionAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectInstructionListAtIndex (class GALGAS_lexicalInstructionListAST constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                             class GALGAS_lexicalInstructionListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mSelectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mSelectInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSelectBranchListAST ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalSelectBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalSelectBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSelectBranchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSelectBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mSelectExpression ;
  public: inline GALGAS_lexicalExpressionAST readProperty_mSelectExpression (void) const {
    return mProperty_mSelectExpression ;
  }

  public: GALGAS_lexicalInstructionListAST mProperty_mSelectInstructionList ;
  public: inline GALGAS_lexicalInstructionListAST readProperty_mSelectInstructionList (void) const {
    return mProperty_mSelectInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelectExpression (const GALGAS_lexicalExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectExpression = inValue ;
  }

  public: inline void setter_setMSelectInstructionList (const GALGAS_lexicalInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                        const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSelectBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSelectBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                     const class GALGAS_lexicalInstructionListAST & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallActualArgumentListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_listWithValue (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalActualInputArgumentAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mLexicalActualInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionCallActualArgumentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallActualArgumentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mProperty_mLexicalActualInputArgument ;
  public: inline GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST readProperty_mLexicalActualInputArgument (void) const {
    return mProperty_mLexicalActualInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalActualInputArgument (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalActualInputArgument = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
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
// Phase 1: @lexicalAttributeInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak (const class GALGAS_lexicalAttributeInputArgumentAST & inSource) ;

  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalAttributeInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalAttributeInputArgumentAST bang_lexicalAttributeInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterInputArgumentAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
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
// Phase 1: @lexicalCharacterInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak (const class GALGAS_lexicalCharacterInputArgumentAST & inSource) ;

  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalCharacterInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterInputArgumentAST bang_lexicalCharacterInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalUnsignedInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_mUnsigned (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalUnsignedInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalUnsignedInputArgumentAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbigint mProperty_mUnsigned ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_lbigint & in_mUnsigned
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
// Phase 1: @lexicalUnsignedInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalUnsignedInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (const class GALGAS_lexicalUnsignedInputArgumentAST & inSource) ;

  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalUnsignedInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalUnsignedInputArgumentAST bang_lexicalUnsignedInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalUnsignedInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalUnsignedInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCurrentCharacterInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCurrentCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST (const class cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_new (const class GALGAS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCurrentCharacterInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
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
// Phase 1: @lexicalCurrentCharacterInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (const class GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST bang_lexicalCurrentCharacterInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_lexicalFunctionCallActualArgumentListAST readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalFunctionInputArgumentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateObjcCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GALGAS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GALGAS_lexiqueAnalysisContext & ioLexiqueAnalysisContext,
           class GALGAS_lexicalTypeEnum inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lexicalFunctionCallActualArgumentListAST mProperty_mFunctionActualArgumentList ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
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
// Phase 1: @lexicalFunctionInputArgumentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionInputArgumentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalFunctionInputArgumentAST_2D_weak (const class GALGAS_lexicalFunctionInputArgumentAST & inSource) ;

  public: GALGAS_lexicalFunctionInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalFunctionInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalFunctionInputArgumentAST bang_lexicalFunctionInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalFunctionInputArgumentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @lexicalArgumentModeAST enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_lexicalInputMode,
    kEnum_lexicalInputOutputMode
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
  public: static GALGAS_lexicalArgumentModeAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputMode (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputMode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_lexicalInputMode () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalInputOutputMode () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalArgumentModeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST lexicalFormalModeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_lexicalFormalModeName (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cppConstInFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppConstInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cppReferenceInFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppReferenceInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @lexicalTypeEnum enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_lexicalType_5F_string,
    kEnum_lexicalType_5F_char,
    kEnum_lexicalType_5F_uint,
    kEnum_lexicalType_5F_uint_36__34_,
    kEnum_lexicalType_5F_sint,
    kEnum_lexicalType_5F_sint_36__34_,
    kEnum_lexicalType_5F_double,
    kEnum_lexicalType_5F_bigint
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
  public: static GALGAS_lexicalTypeEnum extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_bigint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_char (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_double (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_string (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_bigint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_char () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_double () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_sint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_sint_36__34_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_string () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_uint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_uint_36__34_ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalTypeEnum class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSentValueList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSentValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSentValueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalSentValueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLexicalFormalSelector,
                                                 const class GALGAS_string & in_mLexicalAttributeName,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSentValueList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSentValueList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalSentValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_lexicalTypeEnum & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_lexicalTypeEnum & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalSentValueList add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_lexicalTypeEnum constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_lexicalTypeEnum constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_lexicalTypeEnum & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_lexicalTypeEnum & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_lexicalTypeEnum & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_lexicalTypeEnum & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_lexicalTypeEnum & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSentValueList ;
 
} ; // End of GALGAS_lexicalSentValueList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalSentValueList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalSentValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSentValueList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalSentValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLexicalFormalSelector ;
  public: inline GALGAS_lstring readProperty_mLexicalFormalSelector (void) const {
    return mProperty_mLexicalFormalSelector ;
  }

  public: GALGAS_string mProperty_mLexicalAttributeName ;
  public: inline GALGAS_string readProperty_mLexicalAttributeName (void) const {
    return mProperty_mLexicalAttributeName ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalSelector = inValue ;
  }

  public: inline void setter_setMLexicalAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeName = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSentValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSentValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_lexicalTypeEnum & inOperand2,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalSentValueList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_terminalMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_terminalMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_terminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_terminalMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_terminalMap (const GALGAS_terminalMap & inSource) ;
  public: GALGAS_terminalMap & operator = (const GALGAS_terminalMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalMap extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_terminalMap constructor_mapWithMapToOverride (const class GALGAS_terminalMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalSentValueList & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalMap add_operation (const GALGAS_terminalMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalSentValueList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListForKey (class GALGAS_lexicalSentValueList constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalSentValueList & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalSentValueList & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_terminalMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalMap ;
 
} ; // End of GALGAS_terminalMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalMap : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@terminalMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_terminalMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;

//--- Constructor
  public: cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                   const GALGAS_lexicalSentValueList & in_mSentAttributeList
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GALGAS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_lexicalSentValueList & in_mSentAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTypeMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalTypeMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) ;
  public: GALGAS_lexicalTypeMap & operator = (const GALGAS_lexicalTypeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTypeMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTypeMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalTypeMap add_operation (const GALGAS_lexicalTypeMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalTypeEnum & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalTypeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTypeMap ;
 
} ; // End of GALGAS_lexicalTypeMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalTypeMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;

//--- Constructor
  public: cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lexicalTypeEnum & in_mLexicalType
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTypeMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalTypeMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalAttributeMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalAttributeMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) ;
  public: GALGAS_lexicalAttributeMap & operator = (const GALGAS_lexicalAttributeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalAttributeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalAttributeMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeMap add_operation (const GALGAS_lexicalAttributeMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalTypeEnum & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalAttributeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeMap ;
 
} ; // End of GALGAS_lexicalAttributeMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalAttributeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalAttributeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalAttributeMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalAttributeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;

//--- Constructor
  public: cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lexicalTypeEnum & in_mLexicalType
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalAttributeMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTerminalName,
                                                 const class GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                 const class GALGAS_string & in_mSyntaxErrorMessage,
                                                 const class GALGAS_bool & in_isEndOfTemplateMark,
                                                 const class GALGAS_bool & in_atomicSelection,
                                                 const class GALGAS_uint & in_mStyleIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalList extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_bool & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_uint & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalSentValueList & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_uint & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalList add_operation (const GALGAS_terminalList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lexicalSentValueList constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               class GALGAS_uint constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lexicalSentValueList constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalSentValueList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_uint & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lexicalSentValueList & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_uint & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lexicalSentValueList & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_lexicalSentValueList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalSentValueList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_uint & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lexicalSentValueList & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_uint & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_atomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_terminalList ;
 
} ; // End of GALGAS_terminalList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalList : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTerminalName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_atomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: inline GALGAS_lstring readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GALGAS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GALGAS_string mProperty_mSyntaxErrorMessage ;
  public: inline GALGAS_string readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GALGAS_bool mProperty_isEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

  public: GALGAS_bool mProperty_atomicSelection ;
  public: inline GALGAS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GALGAS_uint mProperty_mStyleIndex ;
  public: inline GALGAS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalList_2D_element (const GALGAS_lstring & in_mTerminalName,
                                          const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                          const GALGAS_string & in_mSyntaxErrorMessage,
                                          const GALGAS_bool & in_isEndOfTemplateMark,
                                          const GALGAS_bool & in_atomicSelection,
                                          const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalList_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalSentValueList & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_bool & inOperand3,
                                                                       const class GALGAS_bool & inOperand4,
                                                                       const class GALGAS_uint & inOperand5,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  public: GALGAS_lexicalExplicitTokenListMap & operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMap extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExplicitTokenListMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalExplicitTokenListMap add_operation (const GALGAS_lexicalExplicitTokenListMap & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAtomicSelectionForKey (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkForKey (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalForKey (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_atomicSelectionForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEndOfTemplateMarkForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalForKey (const class GALGAS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExplicitTokenListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_atomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExplicitTokenListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalExplicitTokenListMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mTerminal ;
  public: GALGAS_bool mProperty_atomicSelection ;
  public: GALGAS_bool mProperty_isEndOfTemplateMark ;

//--- Constructor
  public: cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_lstring & in_mTerminal,
                                                   const GALGAS_bool & in_atomicSelection,
                                                   const GALGAS_bool & in_isEndOfTemplateMark
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mTerminal ;
  public: inline GALGAS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GALGAS_bool mProperty_atomicSelection ;
  public: inline GALGAS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GALGAS_bool mProperty_isEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminal (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_lstring & in_mTerminal,
                                                         const GALGAS_bool & in_atomicSelection,
                                                         const GALGAS_bool & in_isEndOfTemplateMark) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tokenSortedlist sorted list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_tokenSortedlist : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_tokenSortedlist (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_tokenSortedlist extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tokenSortedlist constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_tokenSortedlist constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_uint inArgument0,
                                               class GALGAS_string inArgument1,
                                               class GALGAS_string inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_tokenSortedlist ;
 
} ; // End of GALGAS_tokenSortedlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_tokenSortedlist : public cGenericAbstractEnumerator {
  public: cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTerminalName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_tokenSortedlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tokenSortedlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_tokenSortedlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mLength ;
  public: inline GALGAS_uint readProperty_mLength (void) const {
    return mProperty_mLength ;
  }

  public: GALGAS_string mProperty_mName ;
  public: inline GALGAS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_string mProperty_mTerminalName ;
  public: inline GALGAS_string readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLength (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLength = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMTerminalName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & in_mLength,
                                             const GALGAS_string & in_mName,
                                             const GALGAS_string & in_mTerminalName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_tokenSortedlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tokenSortedlist_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_tokenSortedlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMapMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMapMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMapMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMapMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  public: GALGAS_lexicalExplicitTokenListMapMap & operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMapMap extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMapMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExplicitTokenListMapMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMapMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                     const class GALGAS_tokenSortedlist & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalExplicitTokenListMapMap add_operation (const GALGAS_lexicalExplicitTokenListMapMap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalExplicitTokenListMap constinArgument1,
                                                  class GALGAS_tokenSortedlist constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExplicitTokenListMapForKey (class GALGAS_lexicalExplicitTokenListMap constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShouldBeGeneratedForKey (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTokenSortedListForKey (class GALGAS_tokenSortedlist constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalExplicitTokenListMap & outArgument1,
                                                  class GALGAS_tokenSortedlist & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_mExplicitTokenListMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mShouldBeGeneratedForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist getter_mTokenSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalExplicitTokenListMap & outOperand1,
                                                    class GALGAS_tokenSortedlist & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMapMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMapMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExplicitTokenListMapMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public: class GALGAS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExplicitTokenListMapMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalExplicitTokenListMapMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMapMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: GALGAS_tokenSortedlist mProperty_mTokenSortedList ;
  public: GALGAS_bool mProperty_mShouldBeGenerated ;

//--- Constructor
  public: cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                      const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                      const GALGAS_bool & in_mShouldBeGenerated
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMapMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMapMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: inline GALGAS_lexicalExplicitTokenListMap readProperty_mExplicitTokenListMap (void) const {
    return mProperty_mExplicitTokenListMap ;
  }

  public: GALGAS_tokenSortedlist mProperty_mTokenSortedList ;
  public: inline GALGAS_tokenSortedlist readProperty_mTokenSortedList (void) const {
    return mProperty_mTokenSortedList ;
  }

  public: GALGAS_bool mProperty_mShouldBeGenerated ;
  public: inline GALGAS_bool readProperty_mShouldBeGenerated (void) const {
    return mProperty_mShouldBeGenerated ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExplicitTokenListMap = inValue ;
  }

  public: inline void setter_setMTokenSortedList (const GALGAS_tokenSortedlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTokenSortedList = inValue ;
  }

  public: inline void setter_setMShouldBeGenerated (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShouldBeGenerated = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                            const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                            const GALGAS_bool & in_mShouldBeGenerated) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMapMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                         const class GALGAS_tokenSortedlist & inOperand2,
                                                                                         const class GALGAS_bool & inOperand3,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalMessageMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalMessageMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) ;
  public: GALGAS_lexicalMessageMap & operator = (const GALGAS_lexicalMessageMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalMessageMap constructor_mapWithMapToOverride (const class GALGAS_lexicalMessageMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalMessageMap add_operation (const GALGAS_lexicalMessageMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalMessageForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageIsUsedForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalMessageForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMessageIsUsedForKey (const class GALGAS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalMessageMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageMap ;
 
} ; // End of GALGAS_lexicalMessageMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalMessageMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalMessageMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalMessageMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalMessageMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mLexicalMessage ;
  public: GALGAS_bool mProperty_mMessageIsUsed ;

//--- Constructor
  public: cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                         const GALGAS_lstring & in_mLexicalMessage,
                                         const GALGAS_bool & in_mMessageIsUsed
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mLexicalMessage ;
  public: inline GALGAS_lstring readProperty_mLexicalMessage (void) const {
    return mProperty_mLexicalMessage ;
  }

  public: GALGAS_bool mProperty_mMessageIsUsed ;
  public: inline GALGAS_bool readProperty_mMessageIsUsed (void) const {
    return mProperty_mMessageIsUsed ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessage = inValue ;
  }

  public: inline void setter_setMMessageIsUsed (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageIsUsed = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_lstring & in_mLexicalMessage,
                                               const GALGAS_bool & in_mMessageIsUsed) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalMessageMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineFormalArgumentList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                 const class GALGAS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRoutineFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                          const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                          const class GALGAS_string & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineFormalArgumentList add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                               class GALGAS_lexicalTypeEnum constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                      class GALGAS_lexicalTypeEnum constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                 class GALGAS_lexicalTypeEnum & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                class GALGAS_lexicalTypeEnum & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                      class GALGAS_lexicalTypeEnum & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentModeAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lexicalTypeEnum & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                             class GALGAS_lexicalTypeEnum & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mLexicalFormalArgumentModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineFormalArgumentList ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRoutineFormalArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineFormalArgumentList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalArgumentModeAST mProperty_mLexicalFormalArgumentMode ;
  public: inline GALGAS_lexicalArgumentModeAST readProperty_mLexicalFormalArgumentMode (void) const {
    return mProperty_mLexicalFormalArgumentMode ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalFormalArgumentType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalFormalArgumentType (void) const {
    return mProperty_mLexicalFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mArgumentNameForComment ;
  public: inline GALGAS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalArgumentMode (const GALGAS_lexicalArgumentModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentMode = inValue ;
  }

  public: inline void setter_setMLexicalFormalArgumentType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                              const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                              const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                           const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) ;
  public: GALGAS_lexicalRoutineMap & operator = (const GALGAS_lexicalRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRoutineMap constructor_mapWithMapToOverride (const class GALGAS_lexicalRoutineMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                     const class GALGAS_stringlist & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineMap add_operation (const GALGAS_lexicalRoutineMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalRoutineFormalArgumentList constinArgument1,
                                                  class GALGAS_stringlist constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageListForKey (class GALGAS_stringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRoutineFormalArgumentListForKey (class GALGAS_lexicalRoutineFormalArgumentList constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalRoutineFormalArgumentList & outArgument1,
                                                  class GALGAS_stringlist & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageListForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_mLexicalRoutineFormalArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalRoutineFormalArgumentList & outOperand1,
                                                    class GALGAS_stringlist & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineMap ;
 
} ; // End of GALGAS_lexicalRoutineMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalRoutineFormalArgumentList current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalRoutineMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalRoutineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: GALGAS_stringlist mProperty_mErrorMessageList ;
  public: GALGAS_bool mProperty_mIsExtern ;

//--- Constructor
  public: cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                         const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                         const GALGAS_stringlist & in_mErrorMessageList,
                                         const GALGAS_bool & in_mIsExtern
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GALGAS_lexicalRoutineFormalArgumentList readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GALGAS_stringlist mProperty_mErrorMessageList ;
  public: inline GALGAS_stringlist readProperty_mErrorMessageList (void) const {
    return mProperty_mErrorMessageList ;
  }

  public: GALGAS_bool mProperty_mIsExtern ;
  public: inline GALGAS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

  public: inline void setter_setMIsExtern (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                               const GALGAS_stringlist & in_mErrorMessageList,
                                               const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                            const class GALGAS_stringlist & inOperand2,
                                                                            const class GALGAS_bool & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalRoutineMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionFormalArgumentList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                 const class GALGAS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                           const class GALGAS_string & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionFormalArgumentList add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalTypeEnum constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalTypeEnum & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalTypeEnum & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalTypeEnum & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalTypeEnum & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalTypeEnum & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionFormalArgumentList ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionFormalArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionFormalArgumentList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

  public: GALGAS_string mProperty_mArgumentNameForComment ;
  public: inline GALGAS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                               const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                            const class GALGAS_string & inOperand1,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalFunctionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalFunctionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) ;
  public: GALGAS_lexicalFunctionMap & operator = (const GALGAS_lexicalFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionMap constructor_mapWithMapToOverride (const class GALGAS_lexicalFunctionMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                     const class GALGAS_lexicalTypeEnum & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionMap add_operation (const GALGAS_lexicalFunctionMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalFunctionFormalArgumentList constinArgument1,
                                                  class GALGAS_lexicalTypeEnum constinArgument2,
                                                  class GALGAS_string constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeListForKey (class GALGAS_lexicalFunctionFormalArgumentList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionNameForKey (class GALGAS_string constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalFunctionFormalArgumentList & outArgument1,
                                                  class GALGAS_lexicalTypeEnum & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_mLexicalTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReplacementFunctionNameForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mReturnedLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalFunctionFormalArgumentList & outOperand1,
                                                    class GALGAS_lexicalTypeEnum & outOperand2,
                                                    class GALGAS_string & outOperand3,
                                                    class GALGAS_bool & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalFunctionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionMap ;
 
} ; // End of GALGAS_lexicalFunctionMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalFunctionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalFunctionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: GALGAS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: GALGAS_string mProperty_mReplacementFunctionName ;
  public: GALGAS_bool mProperty_mIsExtern ;

//--- Constructor
  public: cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                          const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                          const GALGAS_string & in_mReplacementFunctionName,
                                          const GALGAS_bool & in_mIsExtern
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: inline GALGAS_lexicalFunctionFormalArgumentList readProperty_mLexicalTypeList (void) const {
    return mProperty_mLexicalTypeList ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mReturnedLexicalType (void) const {
    return mProperty_mReturnedLexicalType ;
  }

  public: GALGAS_string mProperty_mReplacementFunctionName ;
  public: inline GALGAS_string readProperty_mReplacementFunctionName (void) const {
    return mProperty_mReplacementFunctionName ;
  }

  public: GALGAS_bool mProperty_mIsExtern ;
  public: inline GALGAS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalTypeList (const GALGAS_lexicalFunctionFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeList = inValue ;
  }

  public: inline void setter_setMReturnedLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedLexicalType = inValue ;
  }

  public: inline void setter_setMReplacementFunctionName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunctionName = inValue ;
  }

  public: inline void setter_setMIsExtern (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                const GALGAS_string & in_mReplacementFunctionName,
                                                const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                             const class GALGAS_lexicalTypeEnum & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalFunctionMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateDelimitorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mStartString,
                                                 const class GALGAS_lstring & in_mEndString,
                                                 const class GALGAS_bool & in_mPreservesStartDelimiter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorList extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDelimitorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateDelimitorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateDelimitorList add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesStartDelimiterAtIndex (class GALGAS_bool constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesStartDelimiterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_templateDelimitorList ;
 
} ; // End of GALGAS_templateDelimitorList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateDelimitorList : public cGenericAbstractEnumerator {
  public: cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateDelimitorList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mStartString ;
  public: inline GALGAS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GALGAS_lstring mProperty_mEndString ;
  public: inline GALGAS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

  public: GALGAS_bool mProperty_mPreservesStartDelimiter ;
  public: inline GALGAS_bool readProperty_mPreservesStartDelimiter (void) const {
    return mProperty_mPreservesStartDelimiter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setMEndString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

  public: inline void setter_setMPreservesStartDelimiter (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesStartDelimiter = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & in_mStartString,
                                                   const GALGAS_lstring & in_mEndString,
                                                   const GALGAS_bool & in_mPreservesStartDelimiter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDelimitorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateDelimitorList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @styleMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_styleMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_styleMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_styleMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_styleMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_styleMap (const GALGAS_styleMap & inSource) ;
  public: GALGAS_styleMap & operator = (const GALGAS_styleMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_styleMap extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_styleMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_styleMap constructor_mapWithMapToOverride (const class GALGAS_styleMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_styleMap add_operation (const GALGAS_styleMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_lstring constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleIndexForKey (class GALGAS_uint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_styleMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_styleMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_styleMap ;
 
} ; // End of GALGAS_styleMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_styleMap : public cGenericAbstractEnumerator {
  public: cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_styleMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@styleMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_styleMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mComment ;
  public: GALGAS_uint mProperty_mStyleIndex ;

//--- Constructor
  public: cMapElement_styleMap (const GALGAS_lstring & inKey,
                                const GALGAS_lstring & in_mComment,
                                const GALGAS_uint & in_mStyleIndex
                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @styleMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_styleMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mComment ;
  public: inline GALGAS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GALGAS_uint mProperty_mStyleIndex ;
  public: inline GALGAS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_styleMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_lstring & in_mComment,
                                      const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_styleMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_styleMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_uint & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_styleMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_styleMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTagMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalTagMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTagMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) ;
  public: GALGAS_lexicalTagMap & operator = (const GALGAS_lexicalTagMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagMap extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTagMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTagMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalTagMap add_operation (const GALGAS_lexicalTagMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTagMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalTagMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTagMap ;
 
} ; // End of GALGAS_lexicalTagMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalTagMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalTagMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalTagMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexicalTagMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTagMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalTagMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;

