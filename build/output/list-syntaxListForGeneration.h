//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       File 'list-syntaxListForGeneration.h'                                         *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'35"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef list_2D_syntaxListForGeneration_1_DEFINED
#define list_2D_syntaxListForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxListForGeneration list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                  const class GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                  const class GALGAS_bool & in_mHasIndexing
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxListForGeneration constructor_listWithValue (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                            const class GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                      const class GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxListForGeneration operator_concat (const GALGAS_syntaxListForGeneration & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxListForGeneration add_operation (const GALGAS_syntaxListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element constinArgument0,
                                                         class GALGAS_syntaxDeclarationForGeneration constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                    class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                   class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                         class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                               class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                              class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST_2D_element reader_mSyntaxComponentRootAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxDeclarationForGeneration reader_mSyntaxGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxListForGeneration ;
 
} ; // End of GALGAS_syntaxListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxListForGeneration (const GALGAS_syntaxListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current_mSyntaxComponentRoot (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxDeclarationForGeneration current_mSyntaxGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasIndexing (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxListForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

