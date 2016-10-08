#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@templateInstructionAST templateInstructionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis) (const class cPtr_templateInstructionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                             const class GALGAS_templateAnalysisContext constinArgument2,
                                                                                             class GALGAS_templateInstructionListForGeneration & ioArgument3,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_templateInstructionAnalysis (const class cPtr_templateInstructionAST * inObject,
                                                      const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                      GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration) (const class cPtr_templateInstructionForGeneration * inObject,
                                                                                                  class GALGAS_string & ioArgument0,
                                                                                                  class GALGAS_stringset & ioArgument1,
                                                                                                  class GALGAS_uint & ioArgument2,
                                                                                                  class GALGAS_stringset & ioArgument3,
                                                                                                  class GALGAS_bool & ioArgument4,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_templateCodeGeneration (const class cPtr_templateInstructionForGeneration * inObject,
                                                 GALGAS_string & io_ioGeneratedCode,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_bool & io_ioUseColumnMarker,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @semanticDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_semanticDeclarationAST (void) ;

//---
  public : inline const class cPtr_semanticDeclarationAST * ptr (void) const { return (const cPtr_semanticDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticDeclarationAST (const cPtr_semanticDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @semanticDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticDeclarationAST : public acPtr_class {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;

//--- Constructor
  public : cPtr_semanticDeclarationAST (const GALGAS_bool & in_mIsPredefined
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExpressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalExpressionAST (void) ;

//---
  public : inline const class cPtr_lexicalExpressionAST * ptr (void) const { return (const cPtr_lexicalExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @lexicalExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalExpressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalInstructionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalInstructionAST (void) ;

//---
  public : inline const class cPtr_lexicalInstructionAST * ptr (void) const { return (const cPtr_lexicalInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalInstructionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalInstructionListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalInstructionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalInstructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalInstructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalInstructionListAST constructor_listWithValue (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalInstructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalInstructionAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalInstructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalInstructionAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalInstructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalInstructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalInstructionListAST ;
  friend class cEnumerator_new_lexicalInstructionListAST ;
 
} ; // End of GALGAS_lexicalInstructionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalInstructionListAST {
//--- Constructor
  public : cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalInstructionListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalInstructionListAST (const cEnumerator_lexicalInstructionListAST &) ;
  private : cEnumerator_lexicalInstructionListAST & operator = (const cEnumerator_lexicalInstructionListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalInstructionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalInstructionListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalInstructionListAST {
//--- Constructor
  public : cEnumerator_new_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalInstructionListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalInstructionListAST (const cEnumerator_new_lexicalInstructionListAST &) ;
  private : cEnumerator_new_lexicalInstructionListAST & operator = (const cEnumerator_new_lexicalInstructionListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalInstructionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalInstructionListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalInstructionListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalInstructionAST mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalInstructionListAST_2D_element constructor_new (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionAST getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalInstructionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @metamodelTemplateDelimitorListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_metamodelTemplateDelimitorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_metamodelTemplateDelimitorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_metamodelTemplateDelimitorListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStartString,
                                                  const class GALGAS_lstringlist & in_mOptionList,
                                                  const class GALGAS_lstring & in_mEndString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_metamodelTemplateDelimitorListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_metamodelTemplateDelimitorListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_metamodelTemplateDelimitorListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstringlist & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_metamodelTemplateDelimitorListAST add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_metamodelTemplateDelimitorListAST ;
  friend class cEnumerator_new_metamodelTemplateDelimitorListAST ;
 
} ; // End of GALGAS_metamodelTemplateDelimitorListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_metamodelTemplateDelimitorListAST {
//--- Constructor
  public : cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_metamodelTemplateDelimitorListAST (void) ;

//--- No copy
  private : cEnumerator_metamodelTemplateDelimitorListAST (const cEnumerator_metamodelTemplateDelimitorListAST &) ;
  private : cEnumerator_metamodelTemplateDelimitorListAST & operator = (const cEnumerator_metamodelTemplateDelimitorListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_metamodelTemplateDelimitorListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_metamodelTemplateDelimitorListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_metamodelTemplateDelimitorListAST {
//--- Constructor
  public : cEnumerator_new_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_metamodelTemplateDelimitorListAST (void) ;

//--- No copy
  private : cEnumerator_new_metamodelTemplateDelimitorListAST (const cEnumerator_new_metamodelTemplateDelimitorListAST &) ;
  private : cEnumerator_new_metamodelTemplateDelimitorListAST & operator = (const cEnumerator_new_metamodelTemplateDelimitorListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_metamodelTemplateDelimitorListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_metamodelTemplateDelimitorListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @metamodelTemplateDelimitorListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_metamodelTemplateDelimitorListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mStartString ;
  public : GALGAS_lstringlist mAttribute_mOptionList ;
  public : GALGAS_lstring mAttribute_mEndString ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_metamodelTemplateDelimitorListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element (const GALGAS_lstring & in_mStartString,
                                                                const GALGAS_lstringlist & in_mOptionList,
                                                                const GALGAS_lstring & in_mEndString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_metamodelTemplateDelimitorListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_metamodelTemplateDelimitorListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                                             const class GALGAS_lstring & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_metamodelTemplateDelimitorListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateReplacementListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateReplacementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateReplacementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateReplacementListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMatchString,
                                                  const class GALGAS_lstring & in_mReplacementString,
                                                  const class GALGAS_lstring & in_mReplacementFunction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateReplacementListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateReplacementListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_templateReplacementListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateReplacementListAST add_operation (const GALGAS_templateReplacementListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateReplacementListAST ;
  friend class cEnumerator_new_templateReplacementListAST ;
 
} ; // End of GALGAS_templateReplacementListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_templateReplacementListAST {
//--- Constructor
  public : cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_templateReplacementListAST (void) ;

//--- No copy
  private : cEnumerator_templateReplacementListAST (const cEnumerator_templateReplacementListAST &) ;
  private : cEnumerator_templateReplacementListAST & operator = (const cEnumerator_templateReplacementListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateReplacementListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_templateReplacementListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_templateReplacementListAST {
//--- Constructor
  public : cEnumerator_new_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_templateReplacementListAST (void) ;

//--- No copy
  private : cEnumerator_new_templateReplacementListAST (const cEnumerator_new_templateReplacementListAST &) ;
  private : cEnumerator_new_templateReplacementListAST & operator = (const cEnumerator_new_templateReplacementListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateReplacementListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_templateReplacementListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateReplacementListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateReplacementListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mMatchString ;
  public : GALGAS_lstring mAttribute_mReplacementString ;
  public : GALGAS_lstring mAttribute_mReplacementFunction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateReplacementListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateReplacementListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateReplacementListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateReplacementListAST_2D_element (const GALGAS_lstring & in_mMatchString,
                                                         const GALGAS_lstring & in_mReplacementString,
                                                         const GALGAS_lstring & in_mReplacementFunction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateReplacementListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateReplacementListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateReplacementListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMatchString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateReplacementListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractLexicalRuleAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractLexicalRuleAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractLexicalRuleAST (void) ;

//---
  public : inline const class cPtr_abstractLexicalRuleAST * ptr (void) const { return (const cPtr_abstractLexicalRuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractLexicalRuleAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @abstractLexicalRuleAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractLexicalRuleAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractLexicalRuleAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalRuleListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalRuleListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRuleListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRuleListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalRuleListAST constructor_listWithValue (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRuleListAST ;
  friend class cEnumerator_new_lexicalRuleListAST ;
 
} ; // End of GALGAS_lexicalRuleListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRuleListAST {
//--- Constructor
  public : cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalRuleListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalRuleListAST (const cEnumerator_lexicalRuleListAST &) ;
  private : cEnumerator_lexicalRuleListAST & operator = (const cEnumerator_lexicalRuleListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRuleListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalRuleListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalRuleListAST {
//--- Constructor
  public : cEnumerator_new_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalRuleListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalRuleListAST (const cEnumerator_new_lexicalRuleListAST &) ;
  private : cEnumerator_new_lexicalRuleListAST & operator = (const cEnumerator_new_lexicalRuleListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRuleListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalRuleListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalRuleListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractLexicalRuleAST mAttribute_mLexicalRule ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRuleListAST_2D_element constructor_new (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRuleAST getter_mLexicalRule (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRuleListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalExplicitRuleAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--- Constructor
  public : GALGAS_lexicalExplicitRuleAST (void) ;

//---
  public : inline const class cPtr_lexicalExplicitRuleAST * ptr (void) const { return (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExplicitRuleAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                       const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mLexicalRuleExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalExplicitRuleAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {
//--- Attributes
  public : GALGAS_lexicalExpressionAST mAttribute_mLexicalRuleExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mInstructionList ;

//--- Constructor
  public : cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                        const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST getter_mLexicalRuleExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalMessageDeclarationListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalMessageDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMessageName,
                                                  const class GALGAS_lstring & in_mMessageValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalMessageDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalMessageDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageDeclarationListAST ;
  friend class cEnumerator_new_lexicalMessageDeclarationListAST ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalMessageDeclarationListAST {
//--- Constructor
  public : cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalMessageDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalMessageDeclarationListAST (const cEnumerator_lexicalMessageDeclarationListAST &) ;
  private : cEnumerator_lexicalMessageDeclarationListAST & operator = (const cEnumerator_lexicalMessageDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalMessageDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalMessageDeclarationListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalMessageDeclarationListAST {
//--- Constructor
  public : cEnumerator_new_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalMessageDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalMessageDeclarationListAST (const cEnumerator_new_lexicalMessageDeclarationListAST &) ;
  private : cEnumerator_new_lexicalMessageDeclarationListAST & operator = (const cEnumerator_new_lexicalMessageDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalMessageDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalMessageDeclarationListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @lexicalMessageDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mMessageName ;
  public : GALGAS_lstring mAttribute_mMessageValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalMessageDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & in_mMessageName,
                                                               const GALGAS_lstring & in_mMessageValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalMessageDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalAttributeListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_lstring & in_mName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeListAST add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeListAST ;
  friend class cEnumerator_new_lexicalAttributeListAST ;
 
} ; // End of GALGAS_lexicalAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalAttributeListAST {
//--- Constructor
  public : cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalAttributeListAST (const cEnumerator_lexicalAttributeListAST &) ;
  private : cEnumerator_lexicalAttributeListAST & operator = (const cEnumerator_lexicalAttributeListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalAttributeListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalAttributeListAST {
//--- Constructor
  public : cEnumerator_new_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalAttributeListAST (const cEnumerator_new_lexicalAttributeListAST &) ;
  private : cEnumerator_new_lexicalAttributeListAST & operator = (const cEnumerator_new_lexicalAttributeListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalAttributeListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalAttributeListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_lstring & in_mName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalStyleListAST list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStyleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalStyleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalStyleListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_lstring & in_mComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStyleListAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalStyleListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalStyleListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalStyleListAST add_operation (const GALGAS_lexicalStyleListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalStyleListAST ;
  friend class cEnumerator_new_lexicalStyleListAST ;
 
} ; // End of GALGAS_lexicalStyleListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalStyleListAST {
//--- Constructor
  public : cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalStyleListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalStyleListAST (const cEnumerator_lexicalStyleListAST &) ;
  private : cEnumerator_lexicalStyleListAST & operator = (const cEnumerator_lexicalStyleListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalStyleListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalStyleListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalStyleListAST {
//--- Constructor
  public : cEnumerator_new_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalStyleListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalStyleListAST (const cEnumerator_new_lexicalStyleListAST &) ;
  private : cEnumerator_new_lexicalStyleListAST & operator = (const cEnumerator_new_lexicalStyleListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalStyleListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalStyleListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalStyleListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStyleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_lstring mAttribute_mComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalStyleListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalStyleListAST_2D_element (const GALGAS_lstring & in_mName,
                                                  const GALGAS_lstring & in_mComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStyleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalStyleListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalStyleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStyleListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @terminalDeclarationListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                  const class GALGAS_lstring & in_mSyntaxErrorMessage,
                                                  const class GALGAS_lstring & in_mStyle,
                                                  const class GALGAS_lstringlist & in_mOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_terminalDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                     const class GALGAS_lstringlist & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstringlist & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalDeclarationListAST add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_sentLexicalAttributeListAST constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_lstringlist constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_lstringlist & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_lstringlist & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_lstringlist & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalDeclarationListAST ;
  friend class cEnumerator_new_terminalDeclarationListAST ;
 
} ; // End of GALGAS_terminalDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalDeclarationListAST {
//--- Constructor
  public : cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_terminalDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_terminalDeclarationListAST (const cEnumerator_terminalDeclarationListAST &) ;
  private : cEnumerator_terminalDeclarationListAST & operator = (const cEnumerator_terminalDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_terminalDeclarationListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_terminalDeclarationListAST {
//--- Constructor
  public : cEnumerator_new_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_terminalDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_new_terminalDeclarationListAST (const cEnumerator_new_terminalDeclarationListAST &) ;
  private : cEnumerator_new_terminalDeclarationListAST & operator = (const cEnumerator_new_terminalDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_terminalDeclarationListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sentLexicalAttributeListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sentLexicalAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sentLexicalAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sentLexicalAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_lstring & in_mAttributeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sentLexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sentLexicalAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_sentLexicalAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sentLexicalAttributeListAST add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sentLexicalAttributeListAST ;
  friend class cEnumerator_new_sentLexicalAttributeListAST ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_sentLexicalAttributeListAST {
//--- Constructor
  public : cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_sentLexicalAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_sentLexicalAttributeListAST (const cEnumerator_sentLexicalAttributeListAST &) ;
  private : cEnumerator_sentLexicalAttributeListAST & operator = (const cEnumerator_sentLexicalAttributeListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sentLexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_sentLexicalAttributeListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_sentLexicalAttributeListAST {
//--- Constructor
  public : cEnumerator_new_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_sentLexicalAttributeListAST (void) ;

//--- No copy
  private : cEnumerator_new_sentLexicalAttributeListAST (const cEnumerator_new_sentLexicalAttributeListAST &) ;
  private : cEnumerator_new_sentLexicalAttributeListAST & operator = (const cEnumerator_new_sentLexicalAttributeListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sentLexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_sentLexicalAttributeListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @terminalDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_sentLexicalAttributeListAST mAttribute_mSentAttributeList ;
  public : GALGAS_lstring mAttribute_mSyntaxErrorMessage ;
  public : GALGAS_lstring mAttribute_mStyle ;
  public : GALGAS_lstringlist mAttribute_mOptionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                         const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                         const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                         const GALGAS_lstring & in_mStyle,
                                                         const GALGAS_lstringlist & in_mOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                      const class GALGAS_lstringlist & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyle (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @sentLexicalAttributeListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sentLexicalAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_lstring mAttribute_mAttributeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sentLexicalAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_lstring & in_mAttributeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sentLexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sentLexicalAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sentLexicalAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalListEntryListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalListEntryListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalListEntryListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalListEntryListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEntrySpelling,
                                                  const class GALGAS_lstring & in_mTerminalSpelling,
                                                  const class GALGAS_lstringlist & in_mFeatureList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalListEntryListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalListEntryListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalListEntryListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalListEntryListAST add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListEntryListAST ;
  friend class cEnumerator_new_lexicalListEntryListAST ;
 
} ; // End of GALGAS_lexicalListEntryListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalListEntryListAST {
//--- Constructor
  public : cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalListEntryListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalListEntryListAST (const cEnumerator_lexicalListEntryListAST &) ;
  private : cEnumerator_lexicalListEntryListAST & operator = (const cEnumerator_lexicalListEntryListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalListEntryListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalListEntryListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalListEntryListAST {
//--- Constructor
  public : cEnumerator_new_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalListEntryListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalListEntryListAST (const cEnumerator_new_lexicalListEntryListAST &) ;
  private : cEnumerator_new_lexicalListEntryListAST & operator = (const cEnumerator_new_lexicalListEntryListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalListEntryListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalListEntryListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalListEntryListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalListEntryListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mEntrySpelling ;
  public : GALGAS_lstring mAttribute_mTerminalSpelling ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalListEntryListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & in_mEntrySpelling,
                                                      const GALGAS_lstring & in_mTerminalSpelling,
                                                      const GALGAS_lstringlist & in_mFeatureList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalListEntryListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalListEntryListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstringlist & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalListEntryListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntrySpelling (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSpelling (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalListEntryListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalListDeclarationListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalListDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalListDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalListDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_lstring & in_mStyle,
                                                  const class GALGAS_lstring & in_mSyntaxErrorMessage,
                                                  const class GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                  const class GALGAS_lexicalListEntryListAST & in_mEntryList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalListDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalListDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalListDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                        const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                        const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                      const class GALGAS_lexicalListEntryListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalListDeclarationListAST add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                                       class GALGAS_lexicalListEntryListAST constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                  class GALGAS_lexicalListEntryListAST & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                 class GALGAS_lexicalListEntryListAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                       class GALGAS_lexicalListEntryListAST & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                               class GALGAS_lexicalListEntryListAST & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                              class GALGAS_lexicalListEntryListAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListDeclarationListAST ;
  friend class cEnumerator_new_lexicalListDeclarationListAST ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalListDeclarationListAST {
//--- Constructor
  public : cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalListDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalListDeclarationListAST (const cEnumerator_lexicalListDeclarationListAST &) ;
  private : cEnumerator_lexicalListDeclarationListAST & operator = (const cEnumerator_lexicalListDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalListDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalListDeclarationListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalListDeclarationListAST {
//--- Constructor
  public : cEnumerator_new_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalListDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalListDeclarationListAST (const cEnumerator_new_lexicalListDeclarationListAST &) ;
  private : cEnumerator_new_lexicalListDeclarationListAST & operator = (const cEnumerator_new_lexicalListDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalListDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalListDeclarationListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexicalListDeclarationListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalListDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_lstring mAttribute_mStyle ;
  public : GALGAS_lstring mAttribute_mSyntaxErrorMessage ;
  public : GALGAS_sentLexicalAttributeListAST mAttribute_mSentAttributeList ;
  public : GALGAS_lexicalListEntryListAST mAttribute_mEntryList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalListDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mStyle,
                                                            const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                            const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                            const GALGAS_lexicalListEntryListAST & in_mEntryList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalListDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalListDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                         const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                         const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalListDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_mEntryList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyle (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalOrExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalOrExpressionAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalOrExpressionAST (void) ;

//---
  public : inline const class cPtr_lexicalOrExpressionAST * ptr (void) const { return (const cPtr_lexicalOrExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalOrExpressionAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                       const class GALGAS_lexicalExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalOrExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalOrExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lexicalExpressionAST mAttribute_mLeftOperand ;
  public : GALGAS_lexicalExpressionAST mAttribute_mRightOperand ;

//--- Constructor
  public : cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                        const GALGAS_lexicalExpressionAST & in_mRightOperand
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST getter_mLeftOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST getter_mRightOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalSendSearchListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendSearchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSendSearchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSendSearchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_lstring & in_mSearchListName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendSearchListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSendSearchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalSendSearchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSendSearchListAST ;
  friend class cEnumerator_new_lexicalSendSearchListAST ;
 
} ; // End of GALGAS_lexicalSendSearchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSendSearchListAST {
//--- Constructor
  public : cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalSendSearchListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalSendSearchListAST (const cEnumerator_lexicalSendSearchListAST &) ;
  private : cEnumerator_lexicalSendSearchListAST & operator = (const cEnumerator_lexicalSendSearchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSearchListName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSendSearchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalSendSearchListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalSendSearchListAST {
//--- Constructor
  public : cEnumerator_new_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalSendSearchListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalSendSearchListAST (const cEnumerator_new_lexicalSendSearchListAST &) ;
  private : cEnumerator_new_lexicalSendSearchListAST & operator = (const cEnumerator_new_lexicalSendSearchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSearchListName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSendSearchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalSendSearchListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalSendSearchListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendSearchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_lstring mAttribute_mSearchListName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSendSearchListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                       const GALGAS_lstring & in_mSearchListName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendSearchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSendSearchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchListName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendSearchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalSendDefaultActionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendDefaultActionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalSendDefaultActionAST (void) ;

//---
  public : inline const class cPtr_lexicalSendDefaultActionAST * ptr (void) const { return (const cPtr_lexicalSendDefaultActionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendDefaultActionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendDefaultActionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalSendDefaultActionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSendDefaultActionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalStructuredSendInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStructuredSendInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalStructuredSendInstructionAST (void) ;

//---
  public : inline const class cPtr_lexicalStructuredSendInstructionAST * ptr (void) const { return (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStructuredSendInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalStructuredSendInstructionAST constructor_new (const class GALGAS_lexicalSendSearchListAST & inOperand0,
                                                                                    const class GALGAS_lexicalSendDefaultActionAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalStructuredSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendDefaultActionAST getter_mLexicalSendDefaultAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_mLexicalSendSearchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStructuredSendInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @lexicalStructuredSendInstructionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalStructuredSendInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalSendSearchListAST mAttribute_mLexicalSendSearchList ;
  public : GALGAS_lexicalSendDefaultActionAST mAttribute_mLexicalSendDefaultAction ;

//--- Constructor
  public : cPtr_lexicalStructuredSendInstructionAST (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                     const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST getter_mLexicalSendSearchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendDefaultActionAST getter_mLexicalSendDefaultAction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalWhileBranchListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalWhileBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalWhileBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalWhileBranchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                  const class GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalWhileBranchListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalWhileBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalWhileBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                    const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                       class GALGAS_lexicalInstructionListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                  class GALGAS_lexicalInstructionListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class GALGAS_lexicalInstructionListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                       class GALGAS_lexicalInstructionListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class GALGAS_lexicalInstructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalWhileBranchListAST ;
  friend class cEnumerator_new_lexicalWhileBranchListAST ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalWhileBranchListAST {
//--- Constructor
  public : cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalWhileBranchListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalWhileBranchListAST (const cEnumerator_lexicalWhileBranchListAST &) ;
  private : cEnumerator_lexicalWhileBranchListAST & operator = (const cEnumerator_lexicalWhileBranchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalWhileBranchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalWhileBranchListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalWhileBranchListAST {
//--- Constructor
  public : cEnumerator_new_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalWhileBranchListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalWhileBranchListAST (const cEnumerator_new_lexicalWhileBranchListAST &) ;
  private : cEnumerator_new_lexicalWhileBranchListAST & operator = (const cEnumerator_new_lexicalWhileBranchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalWhileBranchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalWhileBranchListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalWhileBranchListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalWhileBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mWhileInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                        const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalWhileBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalWhileBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                     const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalRepeatInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRepeatInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalRepeatInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRepeatInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalRepeatInstructionAST * ptr (void) const { return (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRepeatInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRepeatInstructionAST constructor_new (const class GALGAS_lexicalInstructionListAST & inOperand0,
                                                                            const class GALGAS_lexicalWhileBranchListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRepeatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST getter_mLexicalWhileBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mRepeatedInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRepeatInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRepeatInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRepeatInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalInstructionListAST mAttribute_mRepeatedInstructionList ;
  public : GALGAS_lexicalWhileBranchListAST mAttribute_mLexicalWhileBranchList ;

//--- Constructor
  public : cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                             const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST getter_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST getter_mLexicalWhileBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectBranchListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSelectBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSelectBranchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                  const class GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectBranchListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSelectBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalSelectBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                     const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                       class GALGAS_lexicalInstructionListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                  class GALGAS_lexicalInstructionListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class GALGAS_lexicalInstructionListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                       class GALGAS_lexicalInstructionListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class GALGAS_lexicalInstructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSelectBranchListAST ;
  friend class cEnumerator_new_lexicalSelectBranchListAST ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSelectBranchListAST {
//--- Constructor
  public : cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalSelectBranchListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalSelectBranchListAST (const cEnumerator_lexicalSelectBranchListAST &) ;
  private : cEnumerator_lexicalSelectBranchListAST & operator = (const cEnumerator_lexicalSelectBranchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSelectBranchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalSelectBranchListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalSelectBranchListAST {
//--- Constructor
  public : cEnumerator_new_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalSelectBranchListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalSelectBranchListAST (const cEnumerator_new_lexicalSelectBranchListAST &) ;
  private : cEnumerator_new_lexicalSelectBranchListAST & operator = (const cEnumerator_new_lexicalSelectBranchListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSelectBranchListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalSelectBranchListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalSelectBranchListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalExpressionAST mAttribute_mSelectExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mSelectInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSelectBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST getter_mSelectExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mSelectInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalSelectInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalSelectInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSelectInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalSelectInstructionAST * ptr (void) const { return (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSelectInstructionAST constructor_new (const class GALGAS_lexicalSelectBranchListAST & inOperand0,
                                                                            const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSelectInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_mDefaultInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST getter_mLexicalSelectBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSelectInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalSelectInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSelectInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalSelectBranchListAST mAttribute_mLexicalSelectBranchList ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mDefaultInstructionList ;

//--- Constructor
  public : cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                             const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST getter_mLexicalSelectBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST getter_mDefaultInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractLexicalRoutineActualArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractLexicalRoutineActualArgumentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (void) ;

//---
  public : inline const class cPtr_abstractLexicalRoutineActualArgumentAST * ptr (void) const { return (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractLexicalRoutineActualArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mActualPassingModeLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRoutineActualArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @abstractLexicalRoutineActualArgumentAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractLexicalRoutineActualArgumentAST : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mActualPassingModeLocation ;

//--- Constructor
  public : cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mActualPassingModeLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalRoutineCallActualArgumentListAST list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalRoutineCallActualArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalRoutineCallActualArgumentListAST constructor_listWithValue (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineCallActualArgumentListAST add_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineCallActualArgumentListAST ;
  friend class cEnumerator_new_lexicalRoutineCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalRoutineCallActualArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineCallActualArgumentListAST {
//--- Constructor
  public : cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalRoutineCallActualArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalRoutineCallActualArgumentListAST (const cEnumerator_lexicalRoutineCallActualArgumentListAST &) ;
  private : cEnumerator_lexicalRoutineCallActualArgumentListAST & operator = (const cEnumerator_lexicalRoutineCallActualArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalRoutineCallActualArgumentListAST {
//--- Constructor
  public : cEnumerator_new_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalRoutineCallActualArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalRoutineCallActualArgumentListAST (const cEnumerator_new_lexicalRoutineCallActualArgumentListAST &) ;
  private : cEnumerator_new_lexicalRoutineCallActualArgumentListAST & operator = (const cEnumerator_new_lexicalRoutineCallActualArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @lexicalRoutineCallActualArgumentListAST_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractLexicalRoutineActualArgumentAST mAttribute_mLexicalRoutineActualArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRoutineActualArgumentAST getter_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalRoutineOrFunctionFormalInputArgumentAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) ;

//---
  public : inline const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * ptr (void) const { return (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalFormalInputArgumentAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFormalInputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--- Constructor
  public : GALGAS_lexicalFormalInputArgumentAST (void) ;

//---
  public : inline const class cPtr_lexicalFormalInputArgumentAST * ptr (void) const { return (const cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFormalInputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mRoutineOrFunctionFormalInputArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFormalInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @lexicalFormalInputArgumentAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalFormalInputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {
//--- Attributes
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mAttribute_mRoutineOrFunctionFormalInputArgument ;

//--- Constructor
  public : cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                               const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mRoutineOrFunctionFormalInputArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionCallActualArgumentListAST list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalFunctionCallActualArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_listWithValue (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionCallActualArgumentListAST ;
  friend class cEnumerator_new_lexicalFunctionCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionCallActualArgumentListAST {
//--- Constructor
  public : cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalFunctionCallActualArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalFunctionCallActualArgumentListAST (const cEnumerator_lexicalFunctionCallActualArgumentListAST &) ;
  private : cEnumerator_lexicalFunctionCallActualArgumentListAST & operator = (const cEnumerator_lexicalFunctionCallActualArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalFunctionCallActualArgumentListAST {
//--- Constructor
  public : cEnumerator_new_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalFunctionCallActualArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalFunctionCallActualArgumentListAST (const cEnumerator_new_lexicalFunctionCallActualArgumentListAST &) ;
  private : cEnumerator_new_lexicalFunctionCallActualArgumentListAST & operator = (const cEnumerator_new_lexicalFunctionCallActualArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @lexicalFunctionCallActualArgumentListAST_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mAttribute_mLexicalActualInputArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mLexicalActualInputArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalCurrentCharacterInputArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCurrentCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCurrentCharacterInputArgumentAST * ptr (void) const { return (const cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCurrentCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_new (const class GALGAS_location & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @lexicalCurrentCharacterInputArgumentAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalLogInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalLogInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalLogInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalLogInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalLogInstructionAST * ptr (void) const { return (const cPtr_lexicalLogInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalLogInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalLogInstructionAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalLogInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalLogInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalLogInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalLogInstructionAST (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalArgumentModeAST enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_lexicalInputMode,
    kEnum_lexicalInputOutputMode
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
  public : static GALGAS_lexicalArgumentModeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputMode (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalArgumentModeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@lexicalArgumentModeAST lexicalFormalModeName' (as function)                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_lexicalFormalModeName (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension getter '@lexicalArgumentModeAST cppConstInFormalArgument' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cppConstInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@lexicalArgumentModeAST cppReferenceInFormalArgument' (as function)                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cppReferenceInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalExternRoutineFormalArgumentListAST list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternRoutineFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                  const class GALGAS_lstring & in_mLexicalTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                                    const class GALGAS_lstring & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternRoutineFormalArgumentListAST add_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternRoutineFormalArgumentListAST ;
  friend class cEnumerator_new_lexicalExternRoutineFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExternRoutineFormalArgumentListAST {
//--- Constructor
  public : cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalExternRoutineFormalArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalExternRoutineFormalArgumentListAST (const cEnumerator_lexicalExternRoutineFormalArgumentListAST &) ;
  private : cEnumerator_lexicalExternRoutineFormalArgumentListAST & operator = (const cEnumerator_lexicalExternRoutineFormalArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalExternRoutineFormalArgumentListAST {
//--- Constructor
  public : cEnumerator_new_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalExternRoutineFormalArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalExternRoutineFormalArgumentListAST (const cEnumerator_new_lexicalExternRoutineFormalArgumentListAST &) ;
  private : cEnumerator_new_lexicalExternRoutineFormalArgumentListAST & operator = (const cEnumerator_new_lexicalExternRoutineFormalArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @lexicalExternRoutineFormalArgumentListAST_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalArgumentModeAST mAttribute_mPassingMode ;
  public : GALGAS_lstring mAttribute_mLexicalTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                        const GALGAS_lstring & in_mLexicalTypeName,
                                                                        const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_lstring & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mPassingMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ;

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
  public : static class GALGAS_externRoutineListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externRoutineListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                               const class GALGAS_stringlist & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externRoutineListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lexicalExternRoutineFormalArgumentListAST constinArgument1,
                                                       class GALGAS_stringlist constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_stringlist & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_stringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externRoutineListAST ;
  friend class cEnumerator_new_externRoutineListAST ;
 
} ; // End of GALGAS_externRoutineListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externRoutineListAST {
//--- Constructor
  public : cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_externRoutineListAST (void) ;

//--- No copy
  private : cEnumerator_externRoutineListAST (const cEnumerator_externRoutineListAST &) ;
  private : cEnumerator_externRoutineListAST & operator = (const cEnumerator_externRoutineListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externRoutineListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_externRoutineListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_externRoutineListAST {
//--- Constructor
  public : cEnumerator_new_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_externRoutineListAST (void) ;

//--- No copy
  private : cEnumerator_new_externRoutineListAST (const cEnumerator_new_externRoutineListAST &) ;
  private : cEnumerator_new_externRoutineListAST & operator = (const cEnumerator_new_externRoutineListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externRoutineListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_externRoutineListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externRoutineListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externRoutineListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externRoutineListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externRoutineListAST_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                   const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                   const GALGAS_stringlist & in_mErrorMessageList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externRoutineListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                const class GALGAS_stringlist & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externRoutineListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexicalExternFunctionFormalArgumentListAST list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternFunctionFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexicalTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternFunctionFormalArgumentListAST add_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternFunctionFormalArgumentListAST ;
  friend class cEnumerator_new_lexicalExternFunctionFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExternFunctionFormalArgumentListAST {
//--- Constructor
  public : cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalExternFunctionFormalArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_lexicalExternFunctionFormalArgumentListAST (const cEnumerator_lexicalExternFunctionFormalArgumentListAST &) ;
  private : cEnumerator_lexicalExternFunctionFormalArgumentListAST & operator = (const cEnumerator_lexicalExternFunctionFormalArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalExternFunctionFormalArgumentListAST {
//--- Constructor
  public : cEnumerator_new_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalExternFunctionFormalArgumentListAST (void) ;

//--- No copy
  private : cEnumerator_new_lexicalExternFunctionFormalArgumentListAST (const cEnumerator_new_lexicalExternFunctionFormalArgumentListAST &) ;
  private : cEnumerator_new_lexicalExternFunctionFormalArgumentListAST & operator = (const cEnumerator_new_lexicalExternFunctionFormalArgumentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @lexicalExternFunctionFormalArgumentListAST_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLexicalTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (const GALGAS_lstring & in_mLexicalTypeName,
                                                                         const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_lstring & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externFunctionListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externFunctionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnedTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externFunctionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST add_operation (const GALGAS_externFunctionListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lexicalExternFunctionFormalArgumentListAST constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externFunctionListAST ;
  friend class cEnumerator_new_externFunctionListAST ;
 
} ; // End of GALGAS_externFunctionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externFunctionListAST {
//--- Constructor
  public : cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_externFunctionListAST (void) ;

//--- No copy
  private : cEnumerator_externFunctionListAST (const cEnumerator_externFunctionListAST &) ;
  private : cEnumerator_externFunctionListAST & operator = (const cEnumerator_externFunctionListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnedTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externFunctionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_externFunctionListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_externFunctionListAST {
//--- Constructor
  public : cEnumerator_new_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_externFunctionListAST (void) ;

//--- No copy
  private : cEnumerator_new_externFunctionListAST (const cEnumerator_new_externFunctionListAST &) ;
  private : cEnumerator_new_externFunctionListAST & operator = (const cEnumerator_new_externFunctionListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnedTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externFunctionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_externFunctionListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @externFunctionListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST mAttribute_mLexicalFunctionFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mReturnedTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externFunctionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externFunctionListAST_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                    const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                    const GALGAS_lstring & in_mReturnedTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @indexingListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_indexingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_indexingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_indexingListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mIndexName,
                                                  const class GALGAS_lstring & in_mIndexComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_indexingListAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_indexingListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_indexingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_indexingListAST add_operation (const GALGAS_indexingListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_indexingListAST ;
  friend class cEnumerator_new_indexingListAST ;
 
} ; // End of GALGAS_indexingListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_indexingListAST {
//--- Constructor
  public : cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_indexingListAST (void) ;

//--- No copy
  private : cEnumerator_indexingListAST (const cEnumerator_indexingListAST &) ;
  private : cEnumerator_indexingListAST & operator = (const cEnumerator_indexingListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_indexingListAST_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_indexingListAST {
//--- Constructor
  public : cEnumerator_new_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_indexingListAST (void) ;

//--- No copy
  private : cEnumerator_new_indexingListAST (const cEnumerator_new_indexingListAST &) ;
  private : cEnumerator_new_indexingListAST & operator = (const cEnumerator_new_indexingListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_indexingListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @indexingListAST_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_indexingListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mIndexName ;
  public : GALGAS_lstring mAttribute_mIndexComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_indexingListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_indexingListAST_2D_element (const GALGAS_lstring & in_mIndexName,
                                              const GALGAS_lstring & in_mIndexComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_indexingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_indexingListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_indexingListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeEnum enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
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
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeEnum extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_bigint (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_char (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_double (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_string (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_bigint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalSentValueList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSentValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSentValueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSentValueList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexicalFormalSelector,
                                                  const class GALGAS_string & in_mLexicalAttributeName,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSentValueList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSentValueList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalSentValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_lexicalTypeEnum & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_lexicalTypeEnum & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSentValueList add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_lexicalTypeEnum constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_lexicalTypeEnum & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_lexicalTypeEnum & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_lexicalTypeEnum & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_lexicalTypeEnum & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_lexicalTypeEnum & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSentValueList ;
  friend class cEnumerator_new_lexicalSentValueList ;
 
} ; // End of GALGAS_lexicalSentValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSentValueList {
//--- Constructor
  public : cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalSentValueList (void) ;

//--- No copy
  private : cEnumerator_lexicalSentValueList (const cEnumerator_lexicalSentValueList &) ;
  private : cEnumerator_lexicalSentValueList & operator = (const cEnumerator_lexicalSentValueList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSentValueList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalSentValueList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalSentValueList {
//--- Constructor
  public : cEnumerator_new_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalSentValueList (void) ;

//--- No copy
  private : cEnumerator_new_lexicalSentValueList (const cEnumerator_new_lexicalSentValueList &) ;
  private : cEnumerator_new_lexicalSentValueList & operator = (const cEnumerator_new_lexicalSentValueList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSentValueList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalSentValueList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalSentValueList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSentValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLexicalFormalSelector ;
  public : GALGAS_string mAttribute_mLexicalAttributeName ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                   const GALGAS_string & in_mLexicalAttributeName,
                                                   const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSentValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalSentValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_lexicalTypeEnum & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexicalAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalFormalSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSentValueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @terminalMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_terminalMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_terminalMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_terminalMap (const GALGAS_terminalMap & inSource) ;
  public : GALGAS_terminalMap & operator = (const GALGAS_terminalMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_terminalMap constructor_mapWithMapToOverride (const class GALGAS_terminalMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalSentValueList constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSentAttributeListForKey (class GALGAS_lexicalSentValueList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalSentValueList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_terminalMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalMap ;
  friend class cEnumerator_new_terminalMap ;
 
} ; // End of GALGAS_terminalMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalMap {
//--- Constructor
  public : cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_terminalMap (void) ;

//--- No copy
  private : cEnumerator_terminalMap (const cEnumerator_terminalMap &) ;
  private : cEnumerator_terminalMap & operator = (const cEnumerator_terminalMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_terminalMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_terminalMap {
//--- Constructor
  public : cEnumerator_new_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_terminalMap (void) ;

//--- No copy
  private : cEnumerator_new_terminalMap (const cEnumerator_new_terminalMap &) ;
  private : cEnumerator_new_terminalMap & operator = (const cEnumerator_new_terminalMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_terminalMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@terminalMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;

//--- Constructor
  public : cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                    const GALGAS_lexicalSentValueList & in_mSentAttributeList
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
//                                           @terminalMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_lexicalSentValueList & in_mSentAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalSentValueList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTypeMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) ;
  public : GALGAS_lexicalTypeMap & operator = (const GALGAS_lexicalTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalTypeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalTypeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTypeMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTypeMap ;
  friend class cEnumerator_new_lexicalTypeMap ;
 
} ; // End of GALGAS_lexicalTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalTypeMap {
//--- Constructor
  public : cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalTypeMap (void) ;

//--- No copy
  private : cEnumerator_lexicalTypeMap (const cEnumerator_lexicalTypeMap &) ;
  private : cEnumerator_lexicalTypeMap & operator = (const cEnumerator_lexicalTypeMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTypeMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalTypeMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalTypeMap {
//--- Constructor
  public : cEnumerator_new_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalTypeMap (void) ;

//--- No copy
  private : cEnumerator_new_lexicalTypeMap (const cEnumerator_new_lexicalTypeMap &) ;
  private : cEnumerator_new_lexicalTypeMap & operator = (const cEnumerator_new_lexicalTypeMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTypeMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalTypeMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@lexicalTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;

//--- Constructor
  public : cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lexicalTypeEnum & in_mLexicalType
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
//                                          @lexicalTypeMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalTypeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lexicalTypeEnum & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalAttributeMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalAttributeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) ;
  public : GALGAS_lexicalAttributeMap & operator = (const GALGAS_lexicalAttributeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalAttributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalAttributeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalAttributeMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalAttributeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeMap ;
  friend class cEnumerator_new_lexicalAttributeMap ;
 
} ; // End of GALGAS_lexicalAttributeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalAttributeMap {
//--- Constructor
  public : cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalAttributeMap (void) ;

//--- No copy
  private : cEnumerator_lexicalAttributeMap (const cEnumerator_lexicalAttributeMap &) ;
  private : cEnumerator_lexicalAttributeMap & operator = (const cEnumerator_lexicalAttributeMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalAttributeMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalAttributeMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalAttributeMap {
//--- Constructor
  public : cEnumerator_new_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalAttributeMap (void) ;

//--- No copy
  private : cEnumerator_new_lexicalAttributeMap (const cEnumerator_new_lexicalAttributeMap &) ;
  private : cEnumerator_new_lexicalAttributeMap & operator = (const cEnumerator_new_lexicalAttributeMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalAttributeMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalAttributeMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalAttributeMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalAttributeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;

//--- Constructor
  public : cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lexicalTypeEnum & in_mLexicalType
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
//                                       @lexicalAttributeMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalAttributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalTypeEnum & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @terminalList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTerminalName,
                                                  const class GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                  const class GALGAS_string & in_mSyntaxErrorMessage,
                                                  const class GALGAS_bool & in_mIsEndOfTemplateMark,
                                                  const class GALGAS_bool & in_mAtomicSelection,
                                                  const class GALGAS_uint & in_mStyleIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_terminalList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalSentValueList & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_bool & inOperand3,
                                                                       const class GALGAS_bool & inOperand4,
                                                                       const class GALGAS_uint & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_uint & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalList add_operation (const GALGAS_terminalList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lexicalSentValueList constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_bool constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lexicalSentValueList & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  class GALGAS_uint & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalSentValueList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_uint & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lexicalSentValueList & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_uint & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalSentValueList & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               class GALGAS_uint & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalSentValueList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_uint & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalList ;
  friend class cEnumerator_new_terminalList ;
 
} ; // End of GALGAS_terminalList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalList {
//--- Constructor
  public : cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_terminalList (void) ;

//--- No copy
  private : cEnumerator_terminalList (const cEnumerator_terminalList &) ;
  private : cEnumerator_terminalList & operator = (const cEnumerator_terminalList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_mTerminalName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsEndOfTemplateMark (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAtomicSelection (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_terminalList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_terminalList {
//--- Constructor
  public : cEnumerator_new_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_terminalList (void) ;

//--- No copy
  private : cEnumerator_new_terminalList (const cEnumerator_new_terminalList &) ;
  private : cEnumerator_new_terminalList & operator = (const cEnumerator_new_terminalList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mTerminalName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsEndOfTemplateMark (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAtomicSelection (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_terminalList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @terminalList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;
  public : GALGAS_string mAttribute_mSyntaxErrorMessage ;
  public : GALGAS_bool mAttribute_mIsEndOfTemplateMark ;
  public : GALGAS_bool mAttribute_mAtomicSelection ;
  public : GALGAS_uint mAttribute_mStyleIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalList_2D_element (const GALGAS_lstring & in_mTerminalName,
                                           const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                           const GALGAS_string & in_mSyntaxErrorMessage,
                                           const GALGAS_bool & in_mIsEndOfTemplateMark,
                                           const GALGAS_bool & in_mAtomicSelection,
                                           const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lexicalSentValueList & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_bool & inOperand3,
                                                                        const class GALGAS_bool & inOperand4,
                                                                        const class GALGAS_uint & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAtomicSelection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsEndOfTemplateMark (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalExplicitTokenListMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  public : GALGAS_lexicalExplicitTokenListMap & operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExplicitTokenListMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalExplicitTokenListMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMap & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_lstringlist constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFeatureListForKey (class GALGAS_lstringlist constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminalForKey (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFeatureListForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMap ;
  friend class cEnumerator_new_lexicalExplicitTokenListMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExplicitTokenListMap {
//--- Constructor
  public : cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalExplicitTokenListMap (void) ;

//--- No copy
  private : cEnumerator_lexicalExplicitTokenListMap (const cEnumerator_lexicalExplicitTokenListMap &) ;
  private : cEnumerator_lexicalExplicitTokenListMap & operator = (const cEnumerator_lexicalExplicitTokenListMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalExplicitTokenListMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalExplicitTokenListMap {
//--- Constructor
  public : cEnumerator_new_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalExplicitTokenListMap (void) ;

//--- No copy
  private : cEnumerator_new_lexicalExplicitTokenListMap (const cEnumerator_new_lexicalExplicitTokenListMap &) ;
  private : cEnumerator_new_lexicalExplicitTokenListMap & operator = (const cEnumerator_new_lexicalExplicitTokenListMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalExplicitTokenListMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalExplicitTokenListMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;

//--- Constructor
  public : cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & in_mTerminal,
                                                    const GALGAS_lstringlist & in_mFeatureList
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
//                                   @lexicalExplicitTokenListMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExplicitTokenListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_lstring & in_mTerminal,
                                                          const GALGAS_lstringlist & in_mFeatureList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExplicitTokenListMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstringlist & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @tokenSortedlist sorted list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_tokenSortedlist : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_tokenSortedlist (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tokenSortedlist extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tokenSortedlist constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_tokenSortedlist constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_uint & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_uint & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tokenSortedlist ;
  friend class cEnumerator_new_tokenSortedlist ;
 
} ; // End of GALGAS_tokenSortedlist class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_tokenSortedlist {
//--- Constructor
  public : cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_tokenSortedlist (void) ;

//--- No copy
  private : cEnumerator_tokenSortedlist (const cEnumerator_tokenSortedlist &) ;
  private : cEnumerator_tokenSortedlist & operator = (const cEnumerator_tokenSortedlist &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_uint current_mLength (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTerminalName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tokenSortedlist_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_tokenSortedlist_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_tokenSortedlist {
//--- Constructor
  public : cEnumerator_new_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_tokenSortedlist (void) ;

//--- No copy
  private : cEnumerator_new_tokenSortedlist (const cEnumerator_new_tokenSortedlist &) ;
  private : cEnumerator_new_tokenSortedlist & operator = (const cEnumerator_new_tokenSortedlist &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_uint current_mLength (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTerminalName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tokenSortedlist_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_tokenSortedlist_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @tokenSortedlist_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_tokenSortedlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mLength ;
  public : GALGAS_string mAttribute_mName ;
  public : GALGAS_string mAttribute_mTerminalName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tokenSortedlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & in_mLength,
                                              const GALGAS_string & in_mName,
                                              const GALGAS_string & in_mTerminalName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tokenSortedlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tokenSortedlist_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_string & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLength (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tokenSortedlist_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalExplicitTokenListMapMap map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMapMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMapMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMapMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  public : GALGAS_lexicalExplicitTokenListMapMap & operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMapMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExplicitTokenListMapMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalExplicitTokenListMapMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMapMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                      const class GALGAS_tokenSortedlist & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalExplicitTokenListMap constinArgument1,
                                                   class GALGAS_tokenSortedlist constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExplicitTokenListMapForKey (class GALGAS_lexicalExplicitTokenListMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMShouldBeGeneratedForKey (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTokenSortedListForKey (class GALGAS_tokenSortedlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalExplicitTokenListMap & outArgument1,
                                                   class GALGAS_tokenSortedlist & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_mExplicitTokenListMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mShouldBeGeneratedForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist getter_mTokenSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMapMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMapMap ;
  friend class cEnumerator_new_lexicalExplicitTokenListMapMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExplicitTokenListMapMap {
//--- Constructor
  public : cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalExplicitTokenListMapMap (void) ;

//--- No copy
  private : cEnumerator_lexicalExplicitTokenListMapMap (const cEnumerator_lexicalExplicitTokenListMapMap &) ;
  private : cEnumerator_lexicalExplicitTokenListMapMap & operator = (const cEnumerator_lexicalExplicitTokenListMapMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public : class GALGAS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMapMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalExplicitTokenListMapMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalExplicitTokenListMapMap {
//--- Constructor
  public : cEnumerator_new_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalExplicitTokenListMapMap (void) ;

//--- No copy
  private : cEnumerator_new_lexicalExplicitTokenListMapMap (const cEnumerator_new_lexicalExplicitTokenListMapMap &) ;
  private : cEnumerator_new_lexicalExplicitTokenListMapMap & operator = (const cEnumerator_new_lexicalExplicitTokenListMapMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public : class GALGAS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMapMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalExplicitTokenListMapMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalExplicitTokenListMapMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMapMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalExplicitTokenListMap mAttribute_mExplicitTokenListMap ;
  public : GALGAS_tokenSortedlist mAttribute_mTokenSortedList ;
  public : GALGAS_bool mAttribute_mShouldBeGenerated ;

//--- Constructor
  public : cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                       const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                       const GALGAS_bool & in_mShouldBeGenerated
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
//                                  @lexicalExplicitTokenListMapMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMapMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalExplicitTokenListMap mAttribute_mExplicitTokenListMap ;
  public : GALGAS_tokenSortedlist mAttribute_mTokenSortedList ;
  public : GALGAS_bool mAttribute_mShouldBeGenerated ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                             const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                             const GALGAS_bool & in_mShouldBeGenerated) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMapMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                          const class GALGAS_tokenSortedlist & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_mExplicitTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mShouldBeGenerated (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist getter_mTokenSortedList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalMessageMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalMessageMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalMessageMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) ;
  public : GALGAS_lexicalMessageMap & operator = (const GALGAS_lexicalMessageMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalMessageMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_lexicalMessageMap constructor_mapWithMapToOverride (const class GALGAS_lexicalMessageMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexicalMessageForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMessageIsUsedForKey (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalMessageForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMessageIsUsedForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalMessageMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageMap ;
  friend class cEnumerator_new_lexicalMessageMap ;
 
} ; // End of GALGAS_lexicalMessageMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalMessageMap {
//--- Constructor
  public : cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_lexicalMessageMap (void) ;

//--- No copy
  private : cEnumerator_lexicalMessageMap (const cEnumerator_lexicalMessageMap &) ;
  private : cEnumerator_lexicalMessageMap & operator = (const cEnumerator_lexicalMessageMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalMessageMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalMessageMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalMessageMap {
//--- Constructor
  public : cEnumerator_new_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalMessageMap (void) ;

//--- No copy
  private : cEnumerator_new_lexicalMessageMap (const cEnumerator_new_lexicalMessageMap &) ;
  private : cEnumerator_new_lexicalMessageMap & operator = (const cEnumerator_new_lexicalMessageMap &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalMessageMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalMessageMap_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@lexicalMessageMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalMessageMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mLexicalMessage ;
  public : GALGAS_bool mAttribute_mMessageIsUsed ;

//--- Constructor
  public : cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lstring & in_mLexicalMessage,
                                          const GALGAS_bool & in_mMessageIsUsed
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
//                                        @lexicalMessageMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mLexicalMessage ;
  public : GALGAS_bool mAttribute_mMessageIsUsed ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalMessageMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lstring & in_mLexicalMessage,
                                                const GALGAS_bool & in_mMessageIsUsed) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexicalMessageMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMessageIsUsed (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalMessageMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;

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
  friend class cEnumerator_new_lexicalRoutineFormalArgumentList ;
 
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
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArrayEx.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArrayEx.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline uint32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const uint32_t inIndex) { mIndex = inIndex ; }
  protected : const cCollectionElement * currentObjectPtr (LOCATION_ARGS) const ;

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ;
  private : TC_Array <GALGAS_lexicalRoutineFormalArgumentList_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_lexicalRoutineFormalArgumentList {
//--- Constructor
  public : cEnumerator_new_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_lexicalRoutineFormalArgumentList (void) ;

//--- No copy
  private : cEnumerator_new_lexicalRoutineFormalArgumentList (const cEnumerator_new_lexicalRoutineFormalArgumentList &) ;
  private : cEnumerator_new_lexicalRoutineFormalArgumentList & operator = (const cEnumerator_new_lexicalRoutineFormalArgumentList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_lexicalRoutineFormalArgumentList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

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

#endif
