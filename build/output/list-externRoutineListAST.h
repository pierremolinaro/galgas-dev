//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         File 'list-externRoutineListAST.h'                                          *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'35"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef list_2D_externRoutineListAST_1_DEFINED
#define list_2D_externRoutineListAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externRoutineListAST list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externRoutineListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externRoutineListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externRoutineListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                  const class GALGAS_stringlist & in_mErrorMessageList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineListAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externRoutineListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_externRoutineListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                         const class GALGAS_stringlist & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_externRoutineListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST operator_concat (const GALGAS_externRoutineListAST & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lexicalExternRoutineFormalArgumentListAST constinArgument1,
                                                         class GALGAS_stringlist constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                    class GALGAS_stringlist & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                   class GALGAS_stringlist & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                               class GALGAS_stringlist & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                              class GALGAS_stringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externRoutineListAST ;
 
} ; // End of GALGAS_externRoutineListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externRoutineListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externRoutineListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

