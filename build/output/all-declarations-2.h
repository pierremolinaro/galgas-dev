#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalRoutineFormalArgumentList list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalRoutineFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                  const class GALGAS_string & in_mArgumentNameForComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalRoutineFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                           const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                           const class GALGAS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineFormalArgumentList add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                       class GALGAS_lexicalTypeEnum constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                  class GALGAS_lexicalTypeEnum & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                 class GALGAS_lexicalTypeEnum & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                       class GALGAS_lexicalTypeEnum & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                               class GALGAS_lexicalTypeEnum & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lexicalTypeEnum & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mLexicalFormalArgumentModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineFormalArgumentList ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineFormalArgumentList {
//--- Constructor
  public : cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalRoutineFormalArgumentList (void) ;

//--- No copy
  private : cEnumerator_lexicalRoutineFormalArgumentList (const cEnumerator_lexicalRoutineFormalArgumentList &) ;
  private : cEnumerator_lexicalRoutineFormalArgumentList & operator = (const cEnumerator_lexicalRoutineFormalArgumentList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_lexicalRoutineFormalArgumentList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @lexicalRoutineFormalArgumentList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalArgumentModeAST mAttribute_mLexicalFormalArgumentMode ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalFormalArgumentType ;
  public : GALGAS_string mAttribute_mArgumentNameForComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                               const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                               const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                            const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                            const class GALGAS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalRoutineMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) ;
  public : GALGAS_lexicalRoutineMap & operator = (const GALGAS_lexicalRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalRoutineMap constructor_mapWithMapToOverride (const class GALGAS_lexicalRoutineMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalRoutineFormalArgumentList constinArgument1,
                                                   class GALGAS_stringlist constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMErrorMessageListForKey (class GALGAS_stringlist constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexicalRoutineFormalArgumentListForKey (class GALGAS_lexicalRoutineFormalArgumentList constinArgument0,
                                                                                    class GALGAS_string constinArgument1,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalRoutineFormalArgumentList & outArgument1,
                                                   class GALGAS_stringlist & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_mLexicalRoutineFormalArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineMap ;
 
} ; // End of GALGAS_lexicalRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineMap {
//--- Constructor
  public : cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalRoutineMap (void) ;

//--- No copy
  private : cEnumerator_lexicalRoutineMap (const cEnumerator_lexicalRoutineMap &) ;
  private : cEnumerator_lexicalRoutineMap & operator = (const cEnumerator_lexicalRoutineMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalRoutineFormalArgumentList current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_lexicalRoutineMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@lexicalRoutineMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalRoutineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalRoutineFormalArgumentList mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;
  public : GALGAS_bool mAttribute_mIsExtern ;

//--- Constructor
  public : cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                          const GALGAS_stringlist & in_mErrorMessageList,
                                          const GALGAS_bool & in_mIsExtern
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalRoutineMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalRoutineFormalArgumentList mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;
  public : GALGAS_bool mAttribute_mIsExtern ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                const GALGAS_stringlist & in_mErrorMessageList,
                                                const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                             const class GALGAS_stringlist & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExtern (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionFormalArgumentList list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalFunctionFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                  const class GALGAS_string & in_mArgumentNameForComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalFunctionFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                            const class GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionFormalArgumentList add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalTypeEnum & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalTypeEnum & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalTypeEnum & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalTypeEnum & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalTypeEnum & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionFormalArgumentList ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionFormalArgumentList {
//--- Constructor
  public : cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalFunctionFormalArgumentList (void) ;

//--- No copy
  private : cEnumerator_lexicalFunctionFormalArgumentList (const cEnumerator_lexicalFunctionFormalArgumentList &) ;
  private : cEnumerator_lexicalFunctionFormalArgumentList & operator = (const cEnumerator_lexicalFunctionFormalArgumentList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionFormalArgumentList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_lexicalFunctionFormalArgumentList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalFunctionFormalArgumentList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;
  public : GALGAS_string mAttribute_mArgumentNameForComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                             const class GALGAS_string & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalFunctionMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalFunctionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) ;
  public : GALGAS_lexicalFunctionMap & operator = (const GALGAS_lexicalFunctionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalFunctionMap constructor_mapWithMapToOverride (const class GALGAS_lexicalFunctionMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                      const class GALGAS_lexicalTypeEnum & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalFunctionFormalArgumentList constinArgument1,
                                                   class GALGAS_lexicalTypeEnum constinArgument2,
                                                   class GALGAS_string constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexicalTypeListForKey (class GALGAS_lexicalFunctionFormalArgumentList constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionNameForKey (class GALGAS_string constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnedLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalFunctionFormalArgumentList & outArgument1,
                                                   class GALGAS_lexicalTypeEnum & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_mLexicalTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReplacementFunctionNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mReturnedLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionMap ;
 
} ; // End of GALGAS_lexicalFunctionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionMap {
//--- Constructor
  public : cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalFunctionMap (void) ;

//--- No copy
  private : cEnumerator_lexicalFunctionMap (const cEnumerator_lexicalFunctionMap &) ;
  private : cEnumerator_lexicalFunctionMap & operator = (const cEnumerator_lexicalFunctionMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_lexicalFunctionMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalFunctionMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalFunctionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalFunctionFormalArgumentList mAttribute_mLexicalTypeList ;
  public : GALGAS_lexicalTypeEnum mAttribute_mReturnedLexicalType ;
  public : GALGAS_string mAttribute_mReplacementFunctionName ;
  public : GALGAS_bool mAttribute_mIsExtern ;

//--- Constructor
  public : cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                           const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                           const GALGAS_string & in_mReplacementFunctionName,
                                           const GALGAS_bool & in_mIsExtern
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalFunctionMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalFunctionFormalArgumentList mAttribute_mLexicalTypeList ;
  public : GALGAS_lexicalTypeEnum mAttribute_mReturnedLexicalType ;
  public : GALGAS_string mAttribute_mReplacementFunctionName ;
  public : GALGAS_bool mAttribute_mIsExtern ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                 const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                 const GALGAS_string & in_mReplacementFunctionName,
                                                 const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                              const class GALGAS_lexicalTypeEnum & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_bool & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExtern (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_mLexicalTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReplacementFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mReturnedLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateDelimitorList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateDelimitorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateDelimitorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateDelimitorList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStartString,
                                                  const class GALGAS_lstring & in_mEndString,
                                                  const class GALGAS_bool & in_mPreservesStartDelimiter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateDelimitorList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateDelimitorList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateDelimitorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_bool & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateDelimitorList add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesStartDelimiterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateDelimitorList ;
 
} ; // End of GALGAS_templateDelimitorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_templateDelimitorList {
//--- Constructor
  public : cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_templateDelimitorList (void) ;

//--- No copy
  private : cEnumerator_templateDelimitorList (const cEnumerator_templateDelimitorList &) ;
  private : cEnumerator_templateDelimitorList & operator = (const cEnumerator_templateDelimitorList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateDelimitorList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_templateDelimitorList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateDelimitorList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateDelimitorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mStartString ;
  public : GALGAS_lstring mAttribute_mEndString ;
  public : GALGAS_bool mAttribute_mPreservesStartDelimiter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateDelimitorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & in_mStartString,
                                                    const GALGAS_lstring & in_mEndString,
                                                    const GALGAS_bool & in_mPreservesStartDelimiter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateDelimitorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateDelimitorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesStartDelimiter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateDelimitorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @styleMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_styleMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_styleMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_styleMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_styleMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_styleMap (const GALGAS_styleMap & inSource) ;
  public : GALGAS_styleMap & operator = (const GALGAS_styleMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_styleMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_styleMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_styleMap constructor_mapWithMapToOverride (const class GALGAS_styleMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStyleIndexForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_styleMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_styleMap ;
 
} ; // End of GALGAS_styleMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_styleMap {
//--- Constructor
  public : cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_styleMap (void) ;

//--- No copy
  private : cEnumerator_styleMap (const cEnumerator_styleMap &) ;
  private : cEnumerator_styleMap & operator = (const cEnumerator_styleMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_styleMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_styleMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@styleMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_styleMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mComment ;
  public : GALGAS_uint mAttribute_mStyleIndex ;

//--- Constructor
  public : cMapElement_styleMap (const GALGAS_lstring & inKey,
                                 const GALGAS_lstring & in_mComment,
                                 const GALGAS_uint & in_mStyleIndex
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @styleMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_styleMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mComment ;
  public : GALGAS_uint mAttribute_mStyleIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_styleMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_styleMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_lstring & in_mComment,
                                       const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_styleMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_styleMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_uint & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_styleMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_styleMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTagMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTagMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalTagMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTagMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTagMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) ;
  public : GALGAS_lexicalTagMap & operator = (const GALGAS_lexicalTagMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTagMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalTagMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTagMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTagMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTagMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalTagMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTagMap ;
 
} ; // End of GALGAS_lexicalTagMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalTagMap {
//--- Constructor
  public : cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalTagMap (void) ;

//--- No copy
  private : cEnumerator_lexicalTagMap (const cEnumerator_lexicalTagMap &) ;
  private : cEnumerator_lexicalTagMap & operator = (const cEnumerator_lexicalTagMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTagMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_lexicalTagMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@lexicalTagMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTagMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalTagMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTagMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalTagMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTagMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalTagMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_lexicalTypeBaseName (const class GALGAS_lexicalTypeEnum & inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension getter '@lexicalExpressionAST generateConditionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateConditionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_lexicalExpressionAST_generateConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                               const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexiqueAnalysisContext struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mLexiqueName ;
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
  public : GALGAS_lexiqueAnalysisContext (const GALGAS_string & in_mLexiqueName,
                                          const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
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
  public : static class GALGAS_lexiqueAnalysisContext constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_lexicalRoutineMap & inOperand1,
                                                                       const class GALGAS_lexicalFunctionMap & inOperand2,
                                                                       const class GALGAS_lexicalMessageMap & inOperand3,
                                                                       const class GALGAS_terminalMap & inOperand4,
                                                                       const class GALGAS_terminalList & inOperand5,
                                                                       const class GALGAS_lexicalAttributeMap & inOperand6,
                                                                       const class GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                       const class GALGAS_stringset & inOperand8,
                                                                       const class GALGAS_templateDelimitorList & inOperand9,
                                                                       const class GALGAS_styleMap & inOperand10,
                                                                       const class GALGAS_stringset & inOperand11
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mExternUnicodeTestFunctions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap getter_mLexicalAttributeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap getter_mLexicalFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap getter_mLexicalMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap getter_mLexicalRoutineMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap getter_mLexicalTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap getter_mStyleMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_mTerminalList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mUnicodeStringToGenerate (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                      class C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                             enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                     class C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineArgument (const int32_t inClassIndex,
                                                   enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                         const class GALGAS_string constinArgument0,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateDefaultSendCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                 const GALGAS_string constin_inScannerClassName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension getter '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                   const class GALGAS_string constinArgument0,
                                                                                                   const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateInstructionCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalInstructionAST_generateInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                 const GALGAS_string constin_inScannerClassName,
                                                                 const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension getter '@abstractLexicalRuleAST generateCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                         const class GALGAS_string constinArgument0,
                                                                                         const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCode (const int32_t inClassIndex,
                                        enterExtensionGetter_abstractLexicalRuleAST_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                      const GALGAS_string constin_inScannerClassName,
                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension getter '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                     const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaConditionCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                    const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                           class C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                  enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                          const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                        enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension getter '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                              const class GALGAS_string constinArgument0,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                      const GALGAS_string constin_inScannerClassName,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension getter '@lexicalInstructionAST generateCocoaInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                        const class GALGAS_string constinArgument0,
                                                                                                        const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                      const GALGAS_string constin_inScannerClassName,
                                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension getter '@abstractLexicalRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                              const class GALGAS_string constinArgument0,
                                                                                              const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaCode (const int32_t inClassIndex,
                                             enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                           const GALGAS_string constin_inScannerClassName,
                                                           const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@lexicalTypeEnum cppTypeName' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cppTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@lexicalTypeEnum appendMethodName' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_appendMethodName (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension getter '@lexicalTypeEnum appendArgumentOfMethod' (as function)                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_appendArgumentOfMethod (const class GALGAS_lexicalTypeEnum & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@lexicalTypeEnum initialization' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_initialization (const class GALGAS_lexicalTypeEnum & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@lexicalTypeEnum cocoaTypeName' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cocoaTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const class GALGAS_lexicalTypeEnum & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension getter '@lexicalTypeEnum cocoaInitializationCode' (as function)                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cocoaInitializationCode (const class GALGAS_lexicalTypeEnum & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@lexicalTypeEnum cocoaResetPrefix' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cocoaResetPrefix (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@lexicalTypeEnum cocoaReset' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cocoaReset (const class GALGAS_lexicalTypeEnum & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                     extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalDefaultAction (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                      class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                  extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalExpression (const class cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                          class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                          class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                            extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalFunctionCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                         class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                         class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                  class GALGAS_lexicalArgumentModeAST inArgument1,
                                                                                                                  class GALGAS_lexicalTypeEnum inArgument2,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                        class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                        class GALGAS_lexicalTagMap & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                   extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalInstruction (const class cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRule (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @optionDefaultValueEnumAST enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionDefaultValueEnumAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_optionDefaultValueEnumAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noDefaultValue,
    kEnum_unsignedDefaultValue,
    kEnum_stringDefaultValue
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
  public : static GALGAS_optionDefaultValueEnumAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionDefaultValueEnumAST constructor_noDefaultValue (LOCATION_ARGS) ;

  public : static class GALGAS_optionDefaultValueEnumAST constructor_stringDefaultValue (LOCATION_ARGS) ;

  public : static class GALGAS_optionDefaultValueEnumAST constructor_unsignedDefaultValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStringDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsignedDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionDefaultValueEnumAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @commandLineOptionListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_commandLineOptionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionTypeName,
                                                  const class GALGAS_lstring & in_mOptionInternalName,
                                                  const class GALGAS_lchar & in_mOptionInvocationLetter,
                                                  const class GALGAS_lstring & in_mOptionInvocationString,
                                                  const class GALGAS_lstring & in_mOptionComment,
                                                  const class GALGAS_lstring & in_mOptionDefaultValue,
                                                  const class GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_commandLineOptionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_commandLineOptionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lchar & inOperand2,
                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                   const class GALGAS_lstring & inOperand5,
                                                                                   const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lchar & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionListAST add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lchar constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_optionDefaultValueEnumAST constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lchar & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lchar & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lchar & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lchar & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lchar & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionDefaultValueEnumAST getter_mOptionDefaultValueKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInternalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mOptionInvocationLetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInvocationStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionListAST ;
 
} ; // End of GALGAS_commandLineOptionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_commandLineOptionListAST {
//--- Constructor
  public : cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_commandLineOptionListAST (void) ;

//--- No copy
  private : cEnumerator_commandLineOptionListAST (const cEnumerator_commandLineOptionListAST &) ;
  private : cEnumerator_commandLineOptionListAST & operator = (const cEnumerator_commandLineOptionListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public : class GALGAS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public : class GALGAS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_commandLineOptionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_commandLineOptionListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @commandLineOptionListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOptionTypeName ;
  public : GALGAS_lstring mAttribute_mOptionInternalName ;
  public : GALGAS_lchar mAttribute_mOptionInvocationLetter ;
  public : GALGAS_lstring mAttribute_mOptionInvocationString ;
  public : GALGAS_lstring mAttribute_mOptionComment ;
  public : GALGAS_lstring mAttribute_mOptionDefaultValue ;
  public : GALGAS_optionDefaultValueEnumAST mAttribute_mOptionDefaultValueKind ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_commandLineOptionListAST_2D_element (const GALGAS_lstring & in_mOptionTypeName,
                                                       const GALGAS_lstring & in_mOptionInternalName,
                                                       const GALGAS_lchar & in_mOptionInvocationLetter,
                                                       const GALGAS_lstring & in_mOptionInvocationString,
                                                       const GALGAS_lstring & in_mOptionComment,
                                                       const GALGAS_lstring & in_mOptionDefaultValue,
                                                       const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_commandLineOptionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lchar & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_lstring & inOperand4,
                                                                                    const class GALGAS_lstring & inOperand5,
                                                                                    const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_commandLineOptionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionDefaultValueEnumAST getter_mOptionDefaultValueKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInternalName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mOptionInvocationLetter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInvocationString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @commandLineOptionMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_commandLineOptionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_commandLineOptionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) ;
  public : GALGAS_commandLineOptionMap & operator = (const GALGAS_commandLineOptionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_commandLineOptionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_commandLineOptionMap constructor_mapWithMapToOverride (const class GALGAS_commandLineOptionMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_char & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_char constinArgument1,
                                                   class GALGAS_string constinArgument2,
                                                   class GALGAS_string constinArgument3,
                                                   class GALGAS_string constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_string constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValueForKey (class GALGAS_string constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionCharForKey (class GALGAS_char constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionStringForKey (class GALGAS_string constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_char & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionCharForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionStringForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_commandLineOptionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionMap ;
 
} ; // End of GALGAS_commandLineOptionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_commandLineOptionMap {
//--- Constructor
  public : cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_commandLineOptionMap (void) ;

//--- No copy
  private : cEnumerator_commandLineOptionMap (const cEnumerator_commandLineOptionMap &) ;
  private : cEnumerator_commandLineOptionMap & operator = (const cEnumerator_commandLineOptionMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_commandLineOptionMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_commandLineOptionMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@commandLineOptionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_commandLineOptionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;

//--- Constructor
  public : cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_char & in_mOptionChar,
                                             const GALGAS_string & in_mOptionString,
                                             const GALGAS_string & in_mComment,
                                             const GALGAS_string & in_mDefaultValue
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @commandLineOptionMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_commandLineOptionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_commandLineOptionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_char & in_mOptionChar,
                                                   const GALGAS_string & in_mOptionString,
                                                   const GALGAS_string & in_mComment,
                                                   const GALGAS_string & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_commandLineOptionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_char & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_string & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_commandLineOptionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionChar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiSimpleAttributeListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiSimpleAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiSimpleAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiSimpleAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mKey,
                                                  const class GALGAS_lstring & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiSimpleAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiSimpleAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guiSimpleAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiSimpleAttributeListAST add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiSimpleAttributeListAST ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiSimpleAttributeListAST {
//--- Constructor
  public : cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_guiSimpleAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_guiSimpleAttributeListAST (const cEnumerator_guiSimpleAttributeListAST &) ;
  private : cEnumerator_guiSimpleAttributeListAST & operator = (const cEnumerator_guiSimpleAttributeListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiSimpleAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_guiSimpleAttributeListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @guiSimpleAttributeListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiSimpleAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mKey ;
  public : GALGAS_lstring mAttribute_mValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiSimpleAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiSimpleAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                        const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiSimpleAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiSimpleAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiSimpleAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guiCompoundAttributeListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCompoundAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiCompoundAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiCompoundAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mKey,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_lstring & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCompoundAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiCompoundAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guiCompoundAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiCompoundAttributeListAST add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiCompoundAttributeListAST ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiCompoundAttributeListAST {
//--- Constructor
  public : cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_guiCompoundAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_guiCompoundAttributeListAST (const cEnumerator_guiCompoundAttributeListAST &) ;
  private : cEnumerator_guiCompoundAttributeListAST & operator = (const cEnumerator_guiCompoundAttributeListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiCompoundAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_guiCompoundAttributeListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @guiCompoundAttributeListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCompoundAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mKey ;
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_lstring mAttribute_mValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiCompoundAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiCompoundAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                          const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCompoundAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiCompoundAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiCompoundAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalLabelListAST list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTerminal,
                                                  const class GALGAS_uint & in_mDisplayFlags
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_terminalLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_uint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalLabelListAST add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDisplayFlagsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalLabelListAST ;
 
} ; // End of GALGAS_terminalLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalLabelListAST {
//--- Constructor
  public : cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_terminalLabelListAST (void) ;

//--- No copy
  private : cEnumerator_terminalLabelListAST (const cEnumerator_terminalLabelListAST &) ;
  private : cEnumerator_terminalLabelListAST & operator = (const cEnumerator_terminalLabelListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDisplayFlags (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalLabelListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_terminalLabelListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @terminalLabelListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_uint mAttribute_mDisplayFlags ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalLabelListAST_2D_element (const GALGAS_lstring & in_mTerminal,
                                                   const GALGAS_uint & in_mDisplayFlags) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDisplayFlags (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guiLabelListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                  const class GALGAS_terminalLabelListAST & in_mTerminalList,
                                                  const class GALGAS_location & in_mLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiLabelListAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guiLabelListAST constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_terminalLabelListAST & inOperand1,
                                                                          const class GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_terminalLabelListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiLabelListAST add_operation (const GALGAS_guiLabelListAST & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_terminalLabelListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                  class GALGAS_terminalLabelListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                 class GALGAS_terminalLabelListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                       class GALGAS_terminalLabelListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                               class GALGAS_terminalLabelListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                              class GALGAS_terminalLabelListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLeadingCharacterStrippedCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_mTerminalListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiLabelListAST ;
 
} ; // End of GALGAS_guiLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiLabelListAST {
//--- Constructor
  public : cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_guiLabelListAST (void) ;

//--- No copy
  private : cEnumerator_guiLabelListAST (const cEnumerator_guiLabelListAST &) ;
  private : cEnumerator_guiLabelListAST & operator = (const cEnumerator_guiLabelListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_uint current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const ;
  public : class GALGAS_terminalLabelListAST current_mTerminalList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiLabelListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_guiLabelListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @guiLabelListAST_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mLeadingCharacterStrippedCount ;
  public : GALGAS_terminalLabelListAST mAttribute_mTerminalList ;
  public : GALGAS_location mAttribute_mLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                              const GALGAS_terminalLabelListAST & in_mTerminalList,
                                              const GALGAS_location & in_mLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiLabelListAST_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                           const class GALGAS_terminalLabelListAST & inOperand1,
                                                                           const class GALGAS_location & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLeadingCharacterStrippedCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_mTerminalList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @withLexiqueListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_withLexiqueListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_withLexiqueListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_withLexiqueListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexiqueFileName,
                                                  const class GALGAS_guiLabelListAST & in_mLabels,
                                                  const class GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                  const class GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_withLexiqueListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_withLexiqueListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_withLexiqueListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_guiLabelListAST & inOperand1,
                                                                             const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                             const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_guiLabelListAST & inOperand1,
                                                      const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                      const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_withLexiqueListAST add_operation (const GALGAS_withLexiqueListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_guiLabelListAST constinArgument1,
                                                       class GALGAS_guiSimpleAttributeListAST constinArgument2,
                                                       class GALGAS_guiCompoundAttributeListAST constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_guiLabelListAST & outArgument1,
                                                  class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                  class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_guiLabelListAST & outArgument1,
                                                 class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                 class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_guiLabelListAST & outArgument1,
                                                       class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                       class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_guiLabelListAST & outArgument1,
                                               class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                               class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_guiLabelListAST & outArgument1,
                                              class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                              class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_mCompoundAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mSimpleAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_withLexiqueListAST ;
 
} ; // End of GALGAS_withLexiqueListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_withLexiqueListAST {
//--- Constructor
  public : cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_withLexiqueListAST (void) ;

//--- No copy
  private : cEnumerator_withLexiqueListAST (const cEnumerator_withLexiqueListAST &) ;
  private : cEnumerator_withLexiqueListAST & operator = (const cEnumerator_withLexiqueListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public : class GALGAS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public : class GALGAS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public : class GALGAS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_withLexiqueListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_withLexiqueListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @withLexiqueListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_withLexiqueListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLexiqueFileName ;
  public : GALGAS_guiLabelListAST mAttribute_mLabels ;
  public : GALGAS_guiSimpleAttributeListAST mAttribute_mSimpleAttributes ;
  public : GALGAS_guiCompoundAttributeListAST mAttribute_mCompoundAttributes ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_withLexiqueListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_withLexiqueListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_withLexiqueListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_withLexiqueListAST_2D_element (const GALGAS_lstring & in_mLexiqueFileName,
                                                 const GALGAS_guiLabelListAST & in_mLabels,
                                                 const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_withLexiqueListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_withLexiqueListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_guiLabelListAST & inOperand1,
                                                                              const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                              const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_withLexiqueListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_mCompoundAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mSimpleAttributes (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_withLexiqueListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiCommandLineOptionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCommandLineOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiCommandLineOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiCommandLineOptionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOptionComponent,
                                                  const class GALGAS_string & in_mOptionIdentifier,
                                                  const class GALGAS_char & in_mOptionChar,
                                                  const class GALGAS_string & in_mOptionString,
                                                  const class GALGAS_string & in_mComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCommandLineOptionList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiCommandLineOptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guiCommandLineOptionList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_char & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_char & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiCommandLineOptionList add_operation (const GALGAS_guiCommandLineOptionList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_char constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_string constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_char & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_char & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_char & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_string & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_char & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_char & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionCharAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionIdentifierAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiCommandLineOptionList ;
 
} ; // End of GALGAS_guiCommandLineOptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiCommandLineOptionList {
//--- Constructor
  public : cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_guiCommandLineOptionList (void) ;

//--- No copy
  private : cEnumerator_guiCommandLineOptionList (const cEnumerator_guiCommandLineOptionList &) ;
  private : cEnumerator_guiCommandLineOptionList & operator = (const cEnumerator_guiCommandLineOptionList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_string current_mOptionComponent (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public : class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiCommandLineOptionList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_guiCommandLineOptionList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @guiCommandLineOptionList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCommandLineOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mOptionComponent ;
  public : GALGAS_string mAttribute_mOptionIdentifier ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiCommandLineOptionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiCommandLineOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiCommandLineOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiCommandLineOptionList_2D_element (const GALGAS_string & in_mOptionComponent,
                                                       const GALGAS_string & in_mOptionIdentifier,
                                                       const GALGAS_char & in_mOptionChar,
                                                       const GALGAS_string & in_mOptionString,
                                                       const GALGAS_string & in_mComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCommandLineOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiCommandLineOptionList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_char & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionChar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponent (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiCommandLineOptionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @extensionMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionMap (const GALGAS_extensionMap & inSource) ;
  public : GALGAS_extensionMap & operator = (const GALGAS_extensionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMap extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_extensionMap constructor_mapWithMapToOverride (const class GALGAS_extensionMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueNameForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMap ;
 
} ; // End of GALGAS_extensionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionMap {
//--- Constructor
  public : cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_extensionMap (void) ;

//--- No copy
  private : cEnumerator_extensionMap (const cEnumerator_extensionMap &) ;
  private : cEnumerator_extensionMap & operator = (const cEnumerator_extensionMap &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mLexiqueName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_extensionMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@extensionMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mLexiqueName ;

//--- Constructor
  public : cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                     const GALGAS_string & in_mLexiqueName
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mLexiqueName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_string & in_mLexiqueName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @textMacroList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_textMacroList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_textMacroList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_textMacroList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mKey,
                                                  const class GALGAS_string & in_mContents
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_textMacroList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_textMacroList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_textMacroList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_textMacroList add_operation (const GALGAS_textMacroList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_textMacroList ;
 
} ; // End of GALGAS_textMacroList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_textMacroList {
//--- Constructor
  public : cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_textMacroList (void) ;

//--- No copy
  private : cEnumerator_textMacroList (const cEnumerator_textMacroList &) ;
  private : cEnumerator_textMacroList & operator = (const cEnumerator_textMacroList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_string current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mContents (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_textMacroList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_textMacroList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @textMacroList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_textMacroList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mKey ;
  public : GALGAS_string mAttribute_mContents ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_textMacroList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_textMacroList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_textMacroList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_textMacroList_2D_element (const GALGAS_string & in_mKey,
                                            const GALGAS_string & in_mContents) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_textMacroList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_textMacroList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mKey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_textMacroList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @importedLexiqueList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_importedLexiqueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_importedLexiqueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_importedLexiqueList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mLexiqueClassName,
                                                  const class GALGAS_string & in_mBlockComment,
                                                  const class GALGAS_string & in_mTitle,
                                                  const class GALGAS_textMacroList & in_mTextMacroList,
                                                  const class GALGAS_guiLabelListAST & in_mLabels
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_importedLexiqueList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_importedLexiqueList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_importedLexiqueList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_textMacroList & inOperand3,
                                                                              const class GALGAS_guiLabelListAST & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_textMacroList & inOperand3,
                                                      const class GALGAS_guiLabelListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_importedLexiqueList add_operation (const GALGAS_importedLexiqueList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_textMacroList constinArgument3,
                                                       class GALGAS_guiLabelListAST constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_textMacroList & outArgument3,
                                                  class GALGAS_guiLabelListAST & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_textMacroList & outArgument3,
                                                 class GALGAS_guiLabelListAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_textMacroList & outArgument3,
                                                       class GALGAS_guiLabelListAST & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_textMacroList & outArgument3,
                                               class GALGAS_guiLabelListAST & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_textMacroList & outArgument3,
                                              class GALGAS_guiLabelListAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBlockCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_mTextMacroListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTitleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_importedLexiqueList ;
 
} ; // End of GALGAS_importedLexiqueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_importedLexiqueList {
//--- Constructor
  public : cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_importedLexiqueList (void) ;

//--- No copy
  private : cEnumerator_importedLexiqueList (const cEnumerator_importedLexiqueList &) ;
  private : cEnumerator_importedLexiqueList & operator = (const cEnumerator_importedLexiqueList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_string current_mLexiqueClassName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBlockComment (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTitle (LOCATION_ARGS) const ;
  public : class GALGAS_textMacroList current_mTextMacroList (LOCATION_ARGS) const ;
  public : class GALGAS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_importedLexiqueList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_importedLexiqueList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @importedLexiqueList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_importedLexiqueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mLexiqueClassName ;
  public : GALGAS_string mAttribute_mBlockComment ;
  public : GALGAS_string mAttribute_mTitle ;
  public : GALGAS_textMacroList mAttribute_mTextMacroList ;
  public : GALGAS_guiLabelListAST mAttribute_mLabels ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_importedLexiqueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_importedLexiqueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_importedLexiqueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_importedLexiqueList_2D_element (const GALGAS_string & in_mLexiqueClassName,
                                                  const GALGAS_string & in_mBlockComment,
                                                  const GALGAS_string & in_mTitle,
                                                  const GALGAS_textMacroList & in_mTextMacroList,
                                                  const GALGAS_guiLabelListAST & in_mLabels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_importedLexiqueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_importedLexiqueList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_textMacroList & inOperand3,
                                                                               const class GALGAS_guiLabelListAST & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBlockComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_mTextMacroList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTitle (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_importedLexiqueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GUIComponentListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_GUIComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_GUIComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_GUIComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGUIComponentName,
                                                  const class GALGAS_lstringlist & in_mImportedOptionList,
                                                  const class GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                  const class GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_GUIComponentListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_GUIComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_galgas_33_GUIComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                                        const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                        const class GALGAS_withLexiqueListAST & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_GUIComponentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                      const class GALGAS_withLexiqueListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_GUIComponentListAST add_operation (const GALGAS_galgas_33_GUIComponentListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_guiSimpleAttributeListAST constinArgument2,
                                                       class GALGAS_withLexiqueListAST constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                  class GALGAS_withLexiqueListAST & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                 class GALGAS_withLexiqueListAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                       class GALGAS_withLexiqueListAST & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                               class GALGAS_withLexiqueListAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                              class GALGAS_withLexiqueListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGUIComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mGlobalSimpleAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mImportedOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_mWithLexiqueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_GUIComponentListAST ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_GUIComponentListAST {
//--- Constructor
  public : cEnumerator_galgas_33_GUIComponentListAST (const GALGAS_galgas_33_GUIComponentListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_galgas_33_GUIComponentListAST (void) ;

//--- No copy
  private : cEnumerator_galgas_33_GUIComponentListAST (const cEnumerator_galgas_33_GUIComponentListAST &) ;
  private : cEnumerator_galgas_33_GUIComponentListAST & operator = (const cEnumerator_galgas_33_GUIComponentListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mGUIComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mImportedOptionList (LOCATION_ARGS) const ;
  public : class GALGAS_guiSimpleAttributeListAST current_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_withLexiqueListAST current_mWithLexiqueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_GUIComponentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_galgas_33_GUIComponentListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @galgas_33_GUIComponentListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_GUIComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mGUIComponentName ;
  public : GALGAS_lstringlist mAttribute_mImportedOptionList ;
  public : GALGAS_guiSimpleAttributeListAST mAttribute_mGlobalSimpleAttributeList ;
  public : GALGAS_withLexiqueListAST mAttribute_mWithLexiqueList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_GUIComponentListAST_2D_element (const GALGAS_lstring & in_mGUIComponentName,
                                                            const GALGAS_lstringlist & in_mImportedOptionList,
                                                            const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                            const GALGAS_withLexiqueListAST & in_mWithLexiqueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_GUIComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                                         const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                         const class GALGAS_withLexiqueListAST & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_GUIComponentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGUIComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mImportedOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_mWithLexiqueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @guiAnalysisContext struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_stringlist mAttribute_mImportedOptionComponentList ;
  public : GALGAS_guiCommandLineOptionList mAttribute_mBoolOptionList ;
  public : GALGAS_guiCommandLineOptionList mAttribute_mUIntOptionList ;
  public : GALGAS_guiCommandLineOptionList mAttribute_mStringOptionList ;
  public : GALGAS_stringlist mAttribute_mNibAndClassList ;
  public : GALGAS_extensionMap mAttribute_mExtensionMap ;
  public : GALGAS_importedLexiqueList mAttribute_mWithLexiqueList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiAnalysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiAnalysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiAnalysisContext (const GALGAS_stringlist & in_mImportedOptionComponentList,
                                      const GALGAS_guiCommandLineOptionList & in_mBoolOptionList,
                                      const GALGAS_guiCommandLineOptionList & in_mUIntOptionList,
                                      const GALGAS_guiCommandLineOptionList & in_mStringOptionList,
                                      const GALGAS_stringlist & in_mNibAndClassList,
                                      const GALGAS_extensionMap & in_mExtensionMap,
                                      const GALGAS_importedLexiqueList & in_mWithLexiqueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiAnalysisContext extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guiAnalysisContext constructor_new (const class GALGAS_stringlist & inOperand0,
                                                                   const class GALGAS_guiCommandLineOptionList & inOperand1,
                                                                   const class GALGAS_guiCommandLineOptionList & inOperand2,
                                                                   const class GALGAS_guiCommandLineOptionList & inOperand3,
                                                                   const class GALGAS_stringlist & inOperand4,
                                                                   const class GALGAS_extensionMap & inOperand5,
                                                                   const class GALGAS_importedLexiqueList & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_mBoolOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMap getter_mExtensionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mImportedOptionComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mNibAndClassList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_mStringOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_mUIntOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_mWithLexiqueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiAnalysisContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @optionComponentMapForGeneration map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForGeneration : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForGeneration (void) ;

//--------------------------------- Handle copy
  public : GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) ;
  public : GALGAS_optionComponentMapForGeneration & operator = (const GALGAS_optionComponentMapForGeneration & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionComponentMapForGeneration constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_optionComponentMapForGeneration constructor_mapWithMapToOverride (const class GALGAS_optionComponentMapForGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_guiAnalysisContext & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_guiAnalysisContext constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuiComponentContextForKey (class GALGAS_guiAnalysisContext constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guiAnalysisContext getter_mGuiComponentContextForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForGeneration getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForGeneration * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionComponentMapForGeneration ;
 
} ; // End of GALGAS_optionComponentMapForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_optionComponentMapForGeneration {
//--- Constructor
  public : cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_optionComponentMapForGeneration (void) ;

//--- No copy
  private : cEnumerator_optionComponentMapForGeneration (const cEnumerator_optionComponentMapForGeneration &) ;
  private : cEnumerator_optionComponentMapForGeneration & operator = (const cEnumerator_optionComponentMapForGeneration &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_guiAnalysisContext current_mGuiComponentContext (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_optionComponentMapForGeneration_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_optionComponentMapForGeneration_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@optionComponentMapForGeneration' map                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForGeneration : public cMapElement {
//--- Map attributes
  public : GALGAS_guiAnalysisContext mAttribute_mGuiComponentContext ;

//--- Constructor
  public : cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                        const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @optionComponentMapForGeneration_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_guiAnalysisContext mAttribute_mGuiComponentContext ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentMapForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionComponentMapForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionComponentMapForGeneration_2D_element (const GALGAS_lstring & in_lkey,
                                                              const GALGAS_guiAnalysisContext & in_mGuiComponentContext) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionComponentMapForGeneration_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_guiAnalysisContext & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentMapForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiAnalysisContext getter_mGuiComponentContext (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentMapForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyInCollectionListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyInCollectionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_propertyInCollectionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_propertyInCollectionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyTypeName,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_lstringlist & in_mFeatureList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyInCollectionListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyInCollectionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_propertyInCollectionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFeatureListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyInCollectionListAST ;
 
} ; // End of GALGAS_propertyInCollectionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_propertyInCollectionListAST {
//--- Constructor
  public : cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_propertyInCollectionListAST (void) ;

//--- No copy
  private : cEnumerator_propertyInCollectionListAST (const cEnumerator_propertyInCollectionListAST &) ;
  private : cEnumerator_propertyInCollectionListAST & operator = (const cEnumerator_propertyInCollectionListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyInCollectionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_propertyInCollectionListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @propertyInCollectionListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyInCollectionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mPropertyTypeName ;
  public : GALGAS_lstring mAttribute_mPropertyName ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_propertyInCollectionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyInCollectionListAST_2D_element (const GALGAS_lstring & in_mPropertyTypeName,
                                                          const GALGAS_lstring & in_mPropertyName,
                                                          const GALGAS_lstringlist & in_mFeatureList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyInCollectionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyInCollectionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstringlist & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyInCollectionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyInCollectionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typedPropertyList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typedPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeTypeProxy ;
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_bool mAttribute_mHasSetter ;
  public : GALGAS_bool mAttribute_mHasGetter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typedPropertyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                const GALGAS_lstring & in_mAttributeName,
                                                const GALGAS_bool & in_mHasSetter,
                                                const GALGAS_bool & in_mHasGetter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typedPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typedPropertyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typedPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mAttributeTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasGetter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasSetter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typedPropertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mConstantName ;
  public : GALGAS__32_lstringlist mAttribute_mAssociatedValueDefinitionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                               const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS__32_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociatedValueDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantListForGeneration list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumConstantListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mConstantName,
                                                  const class GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantListForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumConstantListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_unifiedTypeMapProxyList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_mAssociatedValueTypeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumConstantListForGeneration ;
 
} ; // End of GALGAS_enumConstantListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantListForGeneration {
//--- Constructor
  public : cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_enumConstantListForGeneration (void) ;

//--- No copy
  private : cEnumerator_enumConstantListForGeneration (const cEnumerator_enumConstantListForGeneration &) ;
  private : cEnumerator_enumConstantListForGeneration & operator = (const cEnumerator_enumConstantListForGeneration &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_string current_mConstantName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMapProxyList current_mAssociatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantListForGeneration_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_enumConstantListForGeneration_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_unifiedTypeMapProxyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMapProxyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedTypeMapProxyList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList add_operation (const GALGAS_unifiedTypeMapProxyList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMapProxyList ;
 
} ; // End of GALGAS_unifiedTypeMapProxyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMapProxyList {
//--- Constructor
  public : cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_unifiedTypeMapProxyList (void) ;

//--- No copy
  private : cEnumerator_unifiedTypeMapProxyList (const cEnumerator_unifiedTypeMapProxyList &) ;
  private : cEnumerator_unifiedTypeMapProxyList & operator = (const cEnumerator_unifiedTypeMapProxyList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_unifiedTypeMapProxyList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_unifiedTypeMapProxyList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @enumConstantListForGeneration_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mConstantName ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedValueTypeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & in_mConstantName,
                                                            const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_mAssociatedValueTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @unifiedTypeMapProxyList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_unifiedTypeMapProxyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_unifiedTypeMapProxyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_unifiedTypeMapProxyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMapProxyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapProxyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapProxyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externTypeConstructorList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeConstructorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externTypeConstructorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externTypeConstructorList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mConstructorName,
                                                  const class GALGAS_lstring & in_mResultTypeName,
                                                  const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeConstructorList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeConstructorList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externTypeConstructorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeConstructorList add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeConstructorList ;
 
} ; // End of GALGAS_externTypeConstructorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externTypeConstructorList {
//--- Constructor
  public : cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_externTypeConstructorList (void) ;

//--- No copy
  private : cEnumerator_externTypeConstructorList (const cEnumerator_externTypeConstructorList &) ;
  private : cEnumerator_externTypeConstructorList & operator = (const cEnumerator_externTypeConstructorList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mConstructorName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externTypeConstructorList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_externTypeConstructorList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typeNameFormalParameterNameList list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeNameFormalParameterNameList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_typeNameFormalParameterNameList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_typeNameFormalParameterNameList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_lstring & in_mFormalParameterTypeName,
                                                  const class GALGAS_lstring & in_mFormalParameterName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeNameFormalParameterNameList extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeNameFormalParameterNameList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_typeNameFormalParameterNameList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_typeNameFormalParameterNameList add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typeNameFormalParameterNameList ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_typeNameFormalParameterNameList {
//--- Constructor
  public : cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_typeNameFormalParameterNameList (void) ;

//--- No copy
  private : cEnumerator_typeNameFormalParameterNameList (const cEnumerator_typeNameFormalParameterNameList &) ;
  private : cEnumerator_typeNameFormalParameterNameList & operator = (const cEnumerator_typeNameFormalParameterNameList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeNameFormalParameterNameList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_typeNameFormalParameterNameList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @externTypeConstructorList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeConstructorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mConstructorName ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_typeNameFormalParameterNameList mAttribute_mParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeConstructorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externTypeConstructorList_2D_element (const GALGAS_lstring & in_mConstructorName,
                                                        const GALGAS_lstring & in_mResultTypeName,
                                                        const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeConstructorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeConstructorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeConstructorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeConstructorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeGetterList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeGetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externTypeGetterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externTypeGetterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGetterName,
                                                  const class GALGAS_lstring & in_mResultTypeName,
                                                  const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeGetterList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeGetterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externTypeGetterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeGetterList add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeGetterList ;
 
} ; // End of GALGAS_externTypeGetterList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externTypeGetterList {
//--- Constructor
  public : cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_externTypeGetterList (void) ;

//--- No copy
  private : cEnumerator_externTypeGetterList (const cEnumerator_externTypeGetterList &) ;
  private : cEnumerator_externTypeGetterList & operator = (const cEnumerator_externTypeGetterList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mGetterName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externTypeGetterList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_externTypeGetterList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externTypeGetterList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeGetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mGetterName ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_typeNameFormalParameterNameList mAttribute_mParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeGetterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externTypeGetterList_2D_element (const GALGAS_lstring & in_mGetterName,
                                                   const GALGAS_lstring & in_mResultTypeName,
                                                   const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeGetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeGetterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeGetterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeGetterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeSetterList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeSetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externTypeSetterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externTypeSetterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSetterName,
                                                  const class GALGAS_formalParameterListAST & in_mFormalParameterList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeSetterList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeSetterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externTypeSetterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeSetterList add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_formalParameterListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_formalParameterListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_formalParameterListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeSetterList ;
 
} ; // End of GALGAS_externTypeSetterList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externTypeSetterList {
//--- Constructor
  public : cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_externTypeSetterList (void) ;

//--- No copy
  private : cEnumerator_externTypeSetterList (const cEnumerator_externTypeSetterList &) ;
  private : cEnumerator_externTypeSetterList & operator = (const cEnumerator_externTypeSetterList &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mSetterName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externTypeSetterList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_externTypeSetterList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @formalParameterListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName,
                                                  const class GALGAS_bool & in_mIsUnused
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_formalParameterListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_bool constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterListAST ;
 
} ; // End of GALGAS_formalParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalParameterListAST {
//--- Constructor
  public : cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_formalParameterListAST (void) ;

//--- No copy
  private : cEnumerator_formalParameterListAST (const cEnumerator_formalParameterListAST &) ;
  private : cEnumerator_formalParameterListAST & operator = (const cEnumerator_formalParameterListAST &) ;

//--- 
  public : bool hasCurrentObject (void) const ;
  public : bool hasNextObject (void) const ;
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ; // § à supprimer

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_formalParameterListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
  private : const typeEnumerationOrder mOrder ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externTypeSetterList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeSetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSetterName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeSetterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externTypeSetterList_2D_element (const GALGAS_lstring & in_mSetterName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeSetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externTypeSetterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalParameterListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeSetterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeSetterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList_2D_element ;

#endif
