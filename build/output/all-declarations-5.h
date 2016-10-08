#ifndef all_2D_declarations_2D__35__ENTITIES_DEFINED
#define all_2D_declarations_2D__35__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@constructorMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;

//--- Constructor
  public : cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType
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
//                                          @constructorMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_functionSignature & in_mArgumentTypeList,
                                             const GALGAS_bool & in_mHasCompilerArgument,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_functionSignature & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @methodQualifier enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_isAbstract,
    kEnum_isBasic,
    kEnum_isBasicFinal,
    kEnum_isInherited,
    kEnum_isOverriding,
    kEnum_isOverridingAbstract
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
  public : static GALGAS_methodQualifier extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_methodQualifier constructor_isAbstract (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isBasic (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isBasicFinal (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isInherited (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isOverriding (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasicFinal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsInherited (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodQualifier class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @methodKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_definedAsMember,
    kEnum_definedAsExtension
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
  public : static GALGAS_methodKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_methodKind constructor_definedAsExtension (LOCATION_ARGS) ;

  public : static class GALGAS_methodKind constructor_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsExtension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsMember (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@getterMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_getterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_getterMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_functionSignature & in_mArgumentTypeList,
                                  const GALGAS_location & in_mDeclarationLocation,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
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
//                                            @getterMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_methodKind & in_mKind,
                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                        const GALGAS_location & in_mDeclarationLocation,
                                        const GALGAS_bool & in_mHasCompilerArgument,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                        const GALGAS_methodQualifier & in_mQualifier,
                                        const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_methodKind & inOperand1,
                                                                     const class GALGAS_functionSignature & inOperand2,
                                                                     const class GALGAS_location & inOperand3,
                                                                     const class GALGAS_bool & inOperand4,
                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                     const class GALGAS_methodQualifier & inOperand6,
                                                                     const class GALGAS_string & inOperand7
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formalParameterSignature list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalParameterSignature (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalParameterSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_formalParameterSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                   const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                      const class GALGAS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                       class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                  class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterSignature ;
 
} ; // End of GALGAS_formalParameterSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalParameterSignature {
//--- Constructor
  public : cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_formalParameterSignature (void) ;

//--- No copy
  private : cEnumerator_formalParameterSignature (const cEnumerator_formalParameterSignature &) ;
  private : cEnumerator_formalParameterSignature & operator = (const cEnumerator_formalParameterSignature &) ;

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
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_formalParameterSignature_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @formalParameterSignature_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_formalArgumentPassingModeAST mAttribute_mFormalArgumentPassingMode ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                       const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                       const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalParameterSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                    const class GALGAS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@setterMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_setterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_setterMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_formalParameterSignature & in_mParameterList,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
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
//                                            @setterMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_setterMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_methodKind & in_mKind,
                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                        const GALGAS_bool & in_mHasCompilerArgument,
                                        const GALGAS_methodQualifier & in_mQualifier,
                                        const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_setterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_methodKind & inOperand1,
                                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
                                                                     const class GALGAS_methodQualifier & inOperand4,
                                                                     const class GALGAS_string & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@instanceMethodMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_instanceMethodMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                          const GALGAS_methodKind & in_mKind,
                                          const GALGAS_formalParameterSignature & in_mParameterList,
                                          const GALGAS_location & in_mDeclarationLocation,
                                          const GALGAS_bool & in_mHasCompilerArgument,
                                          const GALGAS_methodQualifier & in_mQualifier,
                                          const GALGAS_string & in_mErrorMessage
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
//                                        @instanceMethodMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instanceMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_methodKind & in_mKind,
                                                const GALGAS_formalParameterSignature & in_mParameterList,
                                                const GALGAS_location & in_mDeclarationLocation,
                                                const GALGAS_bool & in_mHasCompilerArgument,
                                                const GALGAS_methodQualifier & in_mQualifier,
                                                const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instanceMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instanceMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_methodKind & inOperand1,
                                                                             const class GALGAS_formalParameterSignature & inOperand2,
                                                                             const class GALGAS_location & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             const class GALGAS_methodQualifier & inOperand5,
                                                                             const class GALGAS_string & inOperand6
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instanceMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@classMethodMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_classMethodMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                       const GALGAS_formalParameterSignature & in_mParameterList,
                                       const GALGAS_bool & in_mHasCompilerArgument
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
//                                          @classMethodMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_formalParameterSignature & in_mParameterList,
                                             const GALGAS_bool & in_mHasCompilerArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_formalParameterSignature & inOperand1,
                                                                          const class GALGAS_bool & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @enumerationDescriptorList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mEnumeratedType ;
  public : GALGAS_string mAttribute_mEnumerationName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDescriptorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                        const GALGAS_string & in_mEnumerationName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationDescriptorList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                     const class GALGAS_string & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mEnumeratedType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDescriptorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_predefinedTypeKindEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_predefined_5F_uint,
    kEnum_predefined_5F_uint_36__34_,
    kEnum_predefined_5F_sint,
    kEnum_predefined_5F_sint_36__34_,
    kEnum_predefined_5F_char,
    kEnum_predefined_5F_double,
    kEnum_predefined_5F_string,
    kEnum_predefined_5F_stringset,
    kEnum_predefined_5F_bool,
    kEnum_predefined_5F_binaryset,
    kEnum_predefined_5F_function,
    kEnum_predefined_5F_location,
    kEnum_predefined_5F_type,
    kEnum_predefined_5F_object,
    kEnum_predefined_5F_data,
    kEnum_predefined_5F_filewrapper,
    kEnum_predefined_5F_application,
    kEnum_predefined_5F_bigint,
    kEnum_predefined_5F_timer
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
  public : static GALGAS_predefinedTypeKindEnum extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_application (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bigint (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_binaryset (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bool (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_char (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_data (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_double (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_filewrapper (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_function (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_location (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_object (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint_36__34_ (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_string (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_stringset (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_timer (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_type (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint (LOCATION_ARGS) ;

  public : static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_application (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_bigint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_binaryset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_bool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_char (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_data (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_double (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_filewrapper (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_function (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_location (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_object (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_sint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_string (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_stringset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_timer (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_uint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeKindEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@typeKindEnum kind' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_kind (const class GALGAS_typeKindEnum & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@attributeMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;

//--- Constructor
  public : cMapElement_attributeMap (const GALGAS_lstring & inKey,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType
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
//                                           @attributeMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_attributeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_attributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_attributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_attributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mAttributeType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@constantIndexMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedTypeList ;

//--- Constructor
  public : cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mIndex,
                                         const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList
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
//                                         @constantIndexMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedTypeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constantIndexMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mIndex,
                                               const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constantIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_uint & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapProxyList & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_mAssociatedTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantIndexMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_bool mAttribute_mIsConcrete ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSuperType ;
  public : GALGAS_typeKindEnum mAttribute_mTypeKindEnum ;
  public : GALGAS_bool mAttribute_mSupportCollectionValue ;
  public : GALGAS_typedPropertyList mAttribute_mAllTypedAttributeList ;
  public : GALGAS_attributeMap mAttribute_mAttributeMap ;
  public : GALGAS_typedPropertyList mAttribute_mCurrentTypedAttributeList ;
  public : GALGAS_constructorMap mAttribute_mConstructorMap ;
  public : GALGAS_getterMap mAttribute_mGetterMap ;
  public : GALGAS_setterMap mAttribute_mSetterMap ;
  public : GALGAS_instanceMethodMap mAttribute_mInstanceMethodMap ;
  public : GALGAS_classMethodMap mAttribute_mClassMethodMap ;
  public : GALGAS_enumerationDescriptorList mAttribute_mEnumerationDescriptor ;
  public : GALGAS_uint mAttribute_mHandledOperatorFlags ;
  public : GALGAS_functionSignature mAttribute_mAddAssignOperatorArguments ;
  public : GALGAS_constantIndexMap mAttribute_mEnumConstantMap ;
  public : GALGAS_enumConstantList mAttribute_mEnumConstantList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mMapSearchMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mMapProxySearchConstructorList ;
  public : GALGAS_bool mAttribute_mGenerateHeaderInSeparateFile ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeForEnumeratedElement ;
  public : GALGAS_string mAttribute_mDefaultConstructorName ;
  public : GALGAS_string mAttribute_mHeaderFileName ;
  public : GALGAS_headerKind mAttribute_mHeaderKind ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_bool & in_mIsConcrete,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperType,
                                       const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                       const GALGAS_bool & in_mSupportCollectionValue,
                                       const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                       const GALGAS_attributeMap & in_mAttributeMap,
                                       const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                       const GALGAS_constructorMap & in_mConstructorMap,
                                       const GALGAS_getterMap & in_mGetterMap,
                                       const GALGAS_setterMap & in_mSetterMap,
                                       const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                       const GALGAS_classMethodMap & in_mClassMethodMap,
                                       const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                       const GALGAS_uint & in_mHandledOperatorFlags,
                                       const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                       const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                       const GALGAS_enumConstantList & in_mEnumConstantList,
                                       const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                       const GALGAS_mapSearchMethodListAST & in_mMapProxySearchConstructorList,
                                       const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeForEnumeratedElement,
                                       const GALGAS_string & in_mDefaultConstructorName,
                                       const GALGAS_string & in_mHeaderFileName,
                                       const GALGAS_headerKind & in_mHeaderKind
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
//                                              @predefinedTypeAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypeAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_predefinedTypeAST (void) ;

//---
  public : inline const class cPtr_predefinedTypeAST * ptr (void) const { return (const cPtr_predefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_predefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @predefinedTypeAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_predefinedTypeAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_string mAttribute_mPredefinedTypeName ;
  public : GALGAS_predefinedTypeKindEnum mAttribute_mKind ;

//--- Constructor
  public : cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_string & in_mPredefinedTypeName,
                                   const GALGAS_predefinedTypeKindEnum & in_mKind
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @applicationPredefinedTypeAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_applicationPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_applicationPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_applicationPredefinedTypeAST * ptr (void) const { return (const cPtr_applicationPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_applicationPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_applicationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_applicationPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @applicationPredefinedTypeAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_applicationPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName,
                                              const GALGAS_predefinedTypeKindEnum & in_mKind
                                              COMMA_LOCATION_ARGS) ;

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
//                                           @bigintPredefinedTypeAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_bigintPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_bigintPredefinedTypeAST * ptr (void) const { return (const cPtr_bigintPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bigintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bigintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bigintPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @bigintPredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bigintPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_string & in_mPredefinedTypeName,
                                         const GALGAS_predefinedTypeKindEnum & in_mKind
                                         COMMA_LOCATION_ARGS) ;

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
//                                           @objectPredefinedTypeAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_objectPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_objectPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_objectPredefinedTypeAST * ptr (void) const { return (const cPtr_objectPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_objectPredefinedTypeAST (const cPtr_objectPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_objectPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_objectPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_objectPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @objectPredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_objectPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_string & in_mPredefinedTypeName,
                                         const GALGAS_predefinedTypeKindEnum & in_mKind
                                         COMMA_LOCATION_ARGS) ;

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
//                                         @filewrapperPredefinedTypeAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_filewrapperPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_filewrapperPredefinedTypeAST * ptr (void) const { return (const cPtr_filewrapperPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @filewrapperPredefinedTypeAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName,
                                              const GALGAS_predefinedTypeKindEnum & in_mKind
                                              COMMA_LOCATION_ARGS) ;

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
//                                          @binarysetPredefinedTypeAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_binarysetPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_binarysetPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_binarysetPredefinedTypeAST * ptr (void) const { return (const cPtr_binarysetPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_binarysetPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_binarysetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binarysetPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @binarysetPredefinedTypeAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_binarysetPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_string & in_mPredefinedTypeName,
                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                            COMMA_LOCATION_ARGS) ;

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
//                                            @boolPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_boolPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_boolPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_boolPredefinedTypeAST * ptr (void) const { return (const cPtr_boolPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boolPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @boolPredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_boolPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                            @uintPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_uintPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_uintPredefinedTypeAST * ptr (void) const { return (const cPtr_uintPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_uintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uintPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @uintPredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_uintPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                        @uint_36__34_PredefinedTypeAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_uint_36__34_PredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_uint_36__34_PredefinedTypeAST * ptr (void) const { return (const cPtr_uint_36__34_PredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_uint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uint_36__34_PredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @uint64PredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_uint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                               const GALGAS_string & in_mPredefinedTypeName,
                                               const GALGAS_predefinedTypeKindEnum & in_mKind
                                               COMMA_LOCATION_ARGS) ;

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
//                                            @sintPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_sintPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_sintPredefinedTypeAST * ptr (void) const { return (const cPtr_sintPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sintPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @sintPredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sintPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                        @sint_36__34_PredefinedTypeAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_sint_36__34_PredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_sint_36__34_PredefinedTypeAST * ptr (void) const { return (const cPtr_sint_36__34_PredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sint_36__34_PredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @sint64PredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                               const GALGAS_string & in_mPredefinedTypeName,
                                               const GALGAS_predefinedTypeKindEnum & in_mKind
                                               COMMA_LOCATION_ARGS) ;

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
//                                            @charPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_charPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_charPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_charPredefinedTypeAST * ptr (void) const { return (const cPtr_charPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_charPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_charPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_charPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @charPredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_charPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                           @doublePredefinedTypeAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_doublePredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_doublePredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_doublePredefinedTypeAST * ptr (void) const { return (const cPtr_doublePredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_doublePredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_doublePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doublePredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @doublePredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_doublePredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_string & in_mPredefinedTypeName,
                                         const GALGAS_predefinedTypeKindEnum & in_mKind
                                         COMMA_LOCATION_ARGS) ;

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
//                                           @stringPredefinedTypeAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_stringPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_stringPredefinedTypeAST * ptr (void) const { return (const cPtr_stringPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stringPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_stringPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @stringPredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_string & in_mPredefinedTypeName,
                                         const GALGAS_predefinedTypeKindEnum & in_mKind
                                         COMMA_LOCATION_ARGS) ;

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
//                                          @locationPredefinedTypeAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_locationPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_locationPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_locationPredefinedTypeAST * ptr (void) const { return (const cPtr_locationPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_locationPredefinedTypeAST (const cPtr_locationPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_locationPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_locationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_locationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_locationPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @locationPredefinedTypeAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_locationPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_locationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_predefinedTypeKindEnum & in_mKind
                                           COMMA_LOCATION_ARGS) ;

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
//                                          @stringsetPredefinedTypeAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringsetPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_stringsetPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_stringsetPredefinedTypeAST * ptr (void) const { return (const cPtr_stringsetPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stringsetPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_stringsetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringsetPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @stringsetPredefinedTypeAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_stringsetPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_string & in_mPredefinedTypeName,
                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                            COMMA_LOCATION_ARGS) ;

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
//                                          @functionPredefinedTypeAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_functionPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_functionPredefinedTypeAST * ptr (void) const { return (const cPtr_functionPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionPredefinedTypeAST (const cPtr_functionPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @functionPredefinedTypeAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_functionPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_predefinedTypeKindEnum & in_mKind
                                           COMMA_LOCATION_ARGS) ;

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
//                                            @typePredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typePredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_typePredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_typePredefinedTypeAST * ptr (void) const { return (const cPtr_typePredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typePredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typePredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @typePredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_typePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                            @dataPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_dataPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_dataPredefinedTypeAST * ptr (void) const { return (const cPtr_dataPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_dataPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dataPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @dataPredefinedTypeAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_dataPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

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
//                                            @timerPredefinedTypeAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_timerPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_timerPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_timerPredefinedTypeAST * ptr (void) const { return (const cPtr_timerPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_timerPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_timerPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_timerPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @timerPredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_timerPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName,
                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                        COMMA_LOCATION_ARGS) ;

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
//                               Extension method '@predefinedTypeAST getConstructorMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getConstructorMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                              class GALGAS_unifiedTypeMap & ioArgument0,
                                                                              class GALGAS_constructorMap & outArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getConstructorMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getConstructorMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getConstructorMap (const class cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_constructorMap & out_outConstructorMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getGetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getGetterMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                         class GALGAS_unifiedTypeMap & ioArgument0,
                                                                         class GALGAS_getterMap & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getGetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getGetterMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getGetterMap (const class cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_getterMap & out_outGetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getSetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getSetterMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                         class GALGAS_unifiedTypeMap & ioArgument0,
                                                                         class GALGAS_setterMap & outArgument1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getSetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getSetterMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getSetterMap (const class cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_setterMap & out_outSetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                 class GALGAS_instanceMethodMap & outArgument1,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                                extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getInstanceMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@predefinedTypeAST getClassMethodMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getClassMethodMap) (const class cPtr_predefinedTypeAST * inObject,
                                                                              class GALGAS_unifiedTypeMap & ioArgument0,
                                                                              class GALGAS_classMethodMap & outArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getClassMethodMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getClassMethodMap (const class cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_classMethodMap & out_outClassMethodMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@predefinedTypeAST getSupportedOperatorFlags'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags) (const class cPtr_predefinedTypeAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                     enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList) (const class cPtr_predefinedTypeAST * inObject,
                                                                                     class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                     class GALGAS_functionSignature & outArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getAddAssignArgumentList (const class cPtr_predefinedTypeAST * inObject,
                                                   GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@predefinedTypeAST getEnumerationList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_predefinedTypeAST_getEnumerationList) (const class cPtr_predefinedTypeAST * inObject,
                                                                               class GALGAS_unifiedTypeMap & ioArgument0,
                                                                               class GALGAS_enumerationDescriptorList & outArgument1,
                                                                               class GALGAS_string & outArgument2,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getEnumerationList (const int32_t inClassIndex,
                                              extensionMethodSignature_predefinedTypeAST_getEnumerationList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getEnumerationList (const class cPtr_predefinedTypeAST * inObject,
                                             GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             GALGAS_string & out_outEnumeratedType,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension getter '@location sourceFile' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_sourceFile (const class GALGAS_location & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension getter '@location commaSourceFile' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_commaSourceFile (const class GALGAS_location & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext) (const class cPtr_semanticInstructionAST * inObject,
                                                                                                   class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                             extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInstructionInSemanticContext (const class cPtr_semanticInstructionAST * inObject,
                                                            GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext) (const class cPtr_semanticExpressionAST * inObject,
                                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                            extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterExpressionInSemanticContext (const class cPtr_semanticExpressionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInstructionListInSemanticContext (const class GALGAS_semanticInstructionListAST inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@actualOutputExpressionList enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @grammarLabelMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_grammarLabelMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_grammarLabelMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) ;
  public : GALGAS_grammarLabelMap & operator = (const GALGAS_grammarLabelMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarLabelMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarLabelMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_grammarLabelMap constructor_mapWithMapToOverride (const class GALGAS_grammarLabelMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterSignature & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterSignature constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLabelSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterSignature & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mLabelSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_grammarLabelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_grammarLabelMap ;
 
} ; // End of GALGAS_grammarLabelMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_grammarLabelMap {
//--- Constructor
  public : cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_grammarLabelMap (void) ;

//--- No copy
  private : cEnumerator_grammarLabelMap (const cEnumerator_grammarLabelMap &) ;
  private : cEnumerator_grammarLabelMap & operator = (const cEnumerator_grammarLabelMap &) ;

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
  public : class GALGAS_formalParameterSignature current_mLabelSignature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_grammarLabelMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_grammarLabelMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@grammarLabelMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mLabelSignature ;

//--- Constructor
  public : cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                        const GALGAS_formalParameterSignature & in_mLabelSignature
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
//                                         @grammarLabelMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mLabelSignature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarLabelMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_formalParameterSignature & in_mLabelSignature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarLabelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_formalParameterSignature & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mLabelSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarLabelMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@grammarMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarMap : public cMapElement {
//--- Map attributes
  public : GALGAS_grammarLabelMap mAttribute_mLabelMap ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                   const GALGAS_grammarLabelMap & in_mLabelMap,
                                   const GALGAS_bool & in_mHasIndexing,
                                   const GALGAS_bool & in_mHasTranslateFeature
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
//                                            @grammarMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_grammarLabelMap mAttribute_mLabelMap ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_grammarMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_grammarLabelMap & in_mLabelMap,
                                         const GALGAS_bool & in_mHasIndexing,
                                         const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_grammarLabelMap & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_mLabelMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@routineMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mRoutineSignature ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_routineMap (const GALGAS_lstring & inKey,
                                   const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                   const GALGAS_bool & in_mIsInternal
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
//                                            @routineMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mRoutineSignature ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                         const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_formalParameterSignature & inOperand1,
                                                                      const class GALGAS_bool & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mRoutineSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@functionMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mFunctionSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_functionMap (const GALGAS_lstring & inKey,
                                    const GALGAS_functionSignature & in_mFunctionSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                    const GALGAS_bool & in_mIsInternal
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
//                                           @functionMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mFunctionSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_functionSignature & in_mFunctionSignature,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                          const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_functionSignature & inOperand1,
                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                       const class GALGAS_bool & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mFunctionSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @wrapperFileMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperFileMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_wrapperFileMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperFileMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperFileMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) ;
  public : GALGAS_wrapperFileMap & operator = (const GALGAS_wrapperFileMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperFileMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_wrapperFileMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_wrapperFileMap constructor_mapWithMapToOverride (const class GALGAS_wrapperFileMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uint & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   class GALGAS_uint constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAbsoluteFilePathForKey (class GALGAS_string constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsTextFileForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWrapperFileIndexForKey (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_uint & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbsoluteFilePathForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTextFileForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperFileIndexForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperFileMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperFileMap ;
 
} ; // End of GALGAS_wrapperFileMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperFileMap {
//--- Constructor
  public : cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_wrapperFileMap (void) ;

//--- No copy
  private : cEnumerator_wrapperFileMap (const cEnumerator_wrapperFileMap &) ;
  private : cEnumerator_wrapperFileMap & operator = (const cEnumerator_wrapperFileMap &) ;

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
  public : class GALGAS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperFileMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_wrapperFileMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@wrapperFileMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mAbsoluteFilePath ;
  public : GALGAS_bool mAttribute_mIsTextFile ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;
  public : GALGAS_uint mAttribute_mWrapperFileIndex ;

//--- Constructor
  public : cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                       const GALGAS_string & in_mAbsoluteFilePath,
                                       const GALGAS_bool & in_mIsTextFile,
                                       const GALGAS_uint & in_mWrapperDirectoryIndex,
                                       const GALGAS_uint & in_mWrapperFileIndex
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
//                                          @wrapperFileMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperFileMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mAbsoluteFilePath ;
  public : GALGAS_bool mAttribute_mIsTextFile ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;
  public : GALGAS_uint mAttribute_mWrapperFileIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperFileMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_string & in_mAbsoluteFilePath,
                                             const GALGAS_bool & in_mIsTextFile,
                                             const GALGAS_uint & in_mWrapperDirectoryIndex,
                                             const GALGAS_uint & in_mWrapperFileIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperFileMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_wrapperFileMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_uint & inOperand3,
                                                                          const class GALGAS_uint & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperFileMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbsoluteFilePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTextFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperFileIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperFileMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperDirectoryMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) ;
  public : GALGAS_wrapperDirectoryMap & operator = (const GALGAS_wrapperDirectoryMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_wrapperDirectoryMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_wrapperDirectoryMap constructor_mapWithMapToOverride (const class GALGAS_wrapperDirectoryMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_wrapperFileMap & inOperand1,
                                                      const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_wrapperFileMap constinArgument1,
                                                   class GALGAS_wrapperDirectoryMap constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_wrapperFileMap & outArgument1,
                                                   class GALGAS_wrapperDirectoryMap & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GALGAS_wrapperDirectoryMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperDirectoryMap {
//--- Constructor
  public : cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_wrapperDirectoryMap (void) ;

//--- No copy
  private : cEnumerator_wrapperDirectoryMap (const cEnumerator_wrapperDirectoryMap &) ;
  private : cEnumerator_wrapperDirectoryMap & operator = (const cEnumerator_wrapperDirectoryMap &) ;

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
  public : class GALGAS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperDirectoryMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_wrapperDirectoryMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@wrapperDirectoryMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;

//--- Constructor
  public : cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                            const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                            const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                            const GALGAS_uint & in_mWrapperDirectoryIndex
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
//                                       @wrapperDirectoryMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperDirectoryMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                  const GALGAS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_wrapperDirectoryMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_wrapperFileMap & inOperand1,
                                                                               const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                               const class GALGAS_uint & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @filewrapperTemplateMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) ;
  public : GALGAS_filewrapperTemplateMap & operator = (const GALGAS_filewrapperTemplateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperTemplateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_filewrapperTemplateMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperTemplateMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionSignature & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathForKey (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePathForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GALGAS_filewrapperTemplateMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperTemplateMap {
//--- Constructor
  public : cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : virtual ~ cEnumerator_filewrapperTemplateMap (void) ;

//--- No copy
  private : cEnumerator_filewrapperTemplateMap (const cEnumerator_filewrapperTemplateMap &) ;
  private : cEnumerator_filewrapperTemplateMap & operator = (const cEnumerator_filewrapperTemplateMap &) ;

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
  public : class GALGAS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateMap_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : capCollectionElementArray mEnumerationArrayEx ; // § à supprimer
  private : TC_Array <GALGAS_filewrapperTemplateMap_2D_element> mEnumerationArray ;
  private : uint32_t mIndex ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@filewrapperTemplateMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;

//--- Constructor
  public : cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                               const GALGAS_functionSignature & in_mTemplateSignature,
                                               const GALGAS_lstring & in_mFilewrapperTemplatePath
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
//                                      @filewrapperTemplateMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_functionSignature & in_mTemplateSignature,
                                                     const GALGAS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperTemplateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_functionSignature & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@filewrapperMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lstring & in_mFilewrapperPath,
                                       const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                       const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                       const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                       const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                       const GALGAS_bool & in_mIsInternal
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
//                                          @filewrapperMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lstring & in_mFilewrapperPath,
                                             const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                             const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                             const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                             const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                          const class GALGAS_wrapperFileMap & inOperand3,
                                                                          const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                          const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                          const class GALGAS_bool & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_mFilewrapperTemplateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@optionComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;

//--- Constructor
  public : cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringListOptionMap
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
//                              @optionComponentMapForSemanticAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringListOptionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_bool & inOperand1,
                                                                                                 const class GALGAS_commandLineOptionMap & inOperand2,
                                                                                                 const class GALGAS_commandLineOptionMap & inOperand3,
                                                                                                 const class GALGAS_commandLineOptionMap & inOperand4,
                                                                                                 const class GALGAS_commandLineOptionMap & inOperand5
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@lexiqueComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexiqueComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;

//--- Constructor
  public : cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                               const GALGAS_terminalMap & in_mTerminalMap,
                                                               const GALGAS_indexingListAST & in_mIndexingListAST,
                                                               const GALGAS_lstring & in_mIndexingDirectory
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
//                              @lexiqueComponentMapForSemanticAnalysis_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_terminalMap & in_mTerminalMap,
                                                                     const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                     const GALGAS_lstring & in_mIndexingDirectory) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_terminalMap & inOperand1,
                                                                                                  const class GALGAS_indexingListAST & inOperand2,
                                                                                                  const class GALGAS_lstring & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexingDirectory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@syntaxComponentMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_syntaxComponentMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & in_mLexiqueName,
                                           const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                           const GALGAS_syntaxRuleListAST & in_mRuleList,
                                           const GALGAS_bool & in_mHasTranslateFeature
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
//                                        @syntaxComponentMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxComponentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxComponentMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lstring & in_mLexiqueName,
                                                 const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                 const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxComponentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxComponentMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                              const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                              const class GALGAS_bool & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxComponentMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxComponentMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;

#endif
